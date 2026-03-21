# Qt6 Static Build with Zig Build System

## Overview

This project builds Qt 6.8.3 as static libraries using the Zig build system,
replacing CMake/Ninja with `build.zig`. It builds QtCore, QtGui, QtWidgets, QtNetwork,
QtConcurrent, the Windows platform plugin (qwindows), and all required 3rd party
dependencies (HarfBuzz, FreeType, libpng, libjpeg, zlib, PCRE2, double-conversion).
It also builds the Qt build tools (`moc` and `rcc`) from source.

## Architecture

### Build Targets

| Target | Type | Description | Release Size |
|--------|------|-------------|-------------|
| `Qt6Core.lib` | Static library | Core non-GUI functionality | 16 MB |
| `Qt6Gui.lib` | Static library | GUI foundation (painting, fonts, images, RHI) | 20 MB |
| `Qt6Widgets.lib` | Static library | Desktop widgets (buttons, dialogs, views) | 22 MB |
| `Qt6Network.lib` | Static library | Networking (HTTP, sockets, DNS) | 7 MB |
| `Qt6Concurrent.lib` | Static library | Thread pool and parallel execution | 23 KB |
| `qwindows.lib` | Static library | Windows platform plugin | 2.5 MB |
| `qtHarfbuzz.lib` | Static library | HarfBuzz text shaping engine | 8.7 MB |
| `qtFreetype.lib` | Static library | FreeType font rendering | 869 KB |
| `qtLibpng.lib` | Static library | PNG image codec | 261 KB |
| `qtLibjpeg.lib` | Static library | JPEG image codec | 440 KB |
| `qtZlib.lib` | Static library | zlib compression | 104 KB |
| `qtPcre2.lib` | Static library | PCRE2 regular expressions | 416 KB |
| `qtDoubleConversion.lib` | Static library | Float/string conversion | 67 KB |
| `qtBootstrap.lib` | Static library | Minimal QtCore for tools | 4.9 MB |
| `moc.exe` | Executable | Qt Meta Object Compiler | 2.3 MB |
| `rcc.exe` | Executable | Qt Resource Compiler | 4.2 MB |

### Build Order / Dependencies

```
qtZlib, qtPcre2, qtDoubleConversion  (independent 3rd party libs)
        │
        ▼
   qtBootstrap  (minimal QtCore + embedded PCRE2, no MOC needed)
        │
        ▼
    moc.exe  (links qtBootstrap)
        │
        ├──► MOC generation for QtCore, QtGui, QtWidgets, QtNetwork, qwindows
        │
        ▼
   Qt6Core.lib  (full QtCore with MOC outputs)
        │
        ├──► rcc.exe  (links Qt6Core + qtZlib + qtPcre2)
        │
        ├──► Qt6Gui.lib     (+ qtHarfbuzz, qtFreetype, qtLibpng, qtLibjpeg)
        ├──► Qt6Widgets.lib
        ├──► Qt6Network.lib
        ├──► Qt6Concurrent.lib  (header-only, no MOC)
        └──► qwindows.lib  (Windows platform plugin)
```

### Directory Structure

```
qt6-zig-build/
├── build.zig              # Main Zig build script
├── build.zig.zon          # Package manifest
├── source_lists.zig       # QtCore source file arrays
├── source_lists_extra.zig # QtGui/Widgets/Network/etc source arrays
├── moc_headers.zig        # MOC header/source lists per module
├── DEV_NOTES.md           # This file
├── qt-resource/
│   ├── qtbase/            # Junction → Qt 6.8.3 Src/qtbase
│   ├── include/           # Junction → MinGW Qt include (syncqt headers)
│   ├── lib/               # Junction → MinGW Qt lib
│   ├── mkspecs/           # Junction → MinGW Qt mkspecs
│   └── plugins/           # Junction → MinGW Qt plugins
├── generated/
│   ├── QtCore/
│   │   ├── qconfig.h              # Static build configuration
│   │   ├── qtcore-config.h         # QtCore feature flags
│   │   ├── qtdeprecationdefinitions.h
│   │   ├── qconfig.cpp             # Library path configuration
│   │   └── private/
│   │       ├── qconfig_p.h         # Private configuration
│   │       ├── qtcore-config_p.h   # Private feature flags
│   │       └── qtcore_tracepoints_p.h
│   ├── uic/
│   │   └── ui_qfiledialog.h       # UIC-generated form header
│   ├── rcc/                        # RCC-generated resource files
│   ├── qmimeprovider_database.cpp  # Generated MIME type database
│   ├── moc_parser_patched.cpp      # Clang-compatible moc parser
│   └── zig_compat.h
└── zig-out/
    ├── lib/               # Built static libraries
    └── bin/               # Built executables (moc, rcc)
```

## Design Decisions

### 1. Why Zig Build System?

- **Single toolchain**: Zig includes a C/C++ compiler (Clang-based), linker, and build system
- **Cross-compilation**: Built-in support for targeting different platforms
- **No external dependencies**: No need for CMake, Ninja, MSVC, or MinGW
- **Reproducible builds**: Hermetic build environment
- **Simpler build scripts**: Zig's build API is more straightforward than CMake

### 2. Bootstrap vs Full QtCore

Qt's original build system uses a two-phase approach:
1. Build **Bootstrap QtCore** - a stripped-down version without QObject/moc support
2. Build **moc** using Bootstrap
3. Build **full QtCore** using moc-generated files

We replicate this approach. Bootstrap defines `QT_BOOTSTRAPPED` which disables:
- QObject and signals/slots (`QT_NO_QOBJECT`)
- Threading (`QT_FEATURE_thread = -1`)
- Exceptions (`QT_NO_EXCEPTIONS`)
- Data streams (`QT_NO_DATASTREAM`)
- Plugins/library loading
- And many more features

### 3. Build-time MOC Generation

MOC outputs are generated at build time by the Zig build system. The build first
compiles `moc.exe` (linked against `qtBootstrap`), then runs it on all headers that
need MOC processing. The `moc_headers.zig` file declares per-module lists of:

- **moc_headers**: Headers → `moc_*.cpp` files (`-i` flag, `#include`d by source files)
- **moc_sources**: Source files → `*.moc` files (`-i` flag, `#include`d inline)
- **moc_standalone**: Headers → `moc_*.cpp` files (no `-i` flag, compiled as separate TUs)
- **moc_empty**: Empty stub files for disabled features (e.g., `moc_qopenglcontext.cpp`)

The `generateMocOutputs()` helper in `build.zig` orchestrates this. Each MOC run
produces output into a `WriteFiles` step, and the resulting directory is added as an
include path so source files can `#include "moc_*.cpp"` as expected.

Platform defines (`-DWIN32`, `-D_WIN32`, `-DWIN64`, `-D_WIN64`, etc.) are passed to
MOC so Qt headers correctly derive `Q_OS_WIN` and conditionally exclude Unix-only
private slots (e.g., `_q_canWrite` in `QProcessPrivate`).

Key insight: Most MOC files are `#include`d directly from the source .cpp files
(e.g., `qobject.cpp` includes `moc_qobject.cpp` at the end). Only a few need
standalone compilation (e.g., `moc_qnamespace.cpp` for QtCore, several for qwindows).

### 4. Configuration Headers

The static build configuration differs from the default Qt build:
- `QT_FEATURE_shared = -1` (disabled)
- `QT_FEATURE_static = 1` (enabled)
- `QT_STATIC` defined
- `QT_FEATURE_dbus = -1` (disabled for simplicity)
- `QT_FEATURE_cpp_winrt = -1` (not needed)
- `QT_FEATURE_version_tagging = -1` (disabled for static)

### 5. Platform Specification

We use `win32-g++` mkspec instead of `win32-msvc` because Zig's Clang backend is
more compatible with GCC/MinGW conventions. The MSVC mkspec has `typedef int mode_t`
which conflicts with Zig's libc `typedef unsigned short mode_t`.

### 6. Clang Compatibility Patches

One source file required patching for Clang compatibility:
- `parser.cpp` (moc tool): Uses `const char[] + QByteArrayView` which relies on
  MSVC's more permissive implicit conversion. Patched to use explicit `QByteArray()`
  constructors.

## Source File Analysis

### QtCore Source Counts (Windows)

| Category | Files |
|----------|-------|
| Common (cross-platform) | ~180 |
| Windows-specific | ~25 |
| MOC-generated (at build time) | 69 |
| 3rd party (embedded) | 2 (SHA hash algorithms) |
| Generated | 2 (MIME database, qconfig.cpp) |
| **Total** | **~278** |

### Third-Party Libraries

| Library | Version | Files | Purpose |
|---------|---------|-------|---------|
| zlib | 1.3.1 | 15 | Compression |
| PCRE2 | 10.45 | 28 | Regular expressions |
| double-conversion | 3.3.0 | 8 | Float↔string conversion |
| tinycbor | 0.6.1 | Included via headers | CBOR serialization |
| rfc6234 | - | 2 | SHA-224/256/384/512 |

## Build Commands

```bash
# Debug build (default)
zig build

# Release build (optimized for size)
zig build -Doptimize=ReleaseSmall

# Release build (optimized for speed)
zig build -Doptimize=ReleaseFast

# Verify built tools
./zig-out/bin/moc.exe --version
./zig-out/bin/rcc.exe --version
```

## Build Output Sizes

### Debug Build
| Artifact | Size |
|----------|------|
| Qt6Core.lib | 197 MB |
| qtBootstrap.lib | 57 MB |
| moc.exe | 13 MB |
| rcc.exe | 31 MB |

### ReleaseSmall Build
| Artifact | Size |
|----------|------|
| Qt6Core.lib | 16.5 MB |
| qtBootstrap.lib | 5.1 MB |
| moc.exe | 2.3 MB |
| rcc.exe | 4.2 MB |

## Known Limitations

1. **Windows x86_64 only**: Currently configured for Windows. Linux/macOS would need
   different platform-specific source files and mkspecs.

2. **No QML/Qt Quick**: Only the C++ modules (Core, Gui, Widgets, Network, Concurrent) are built.

3. **syncqt dependency**: The `qt-resource/include/` directory requires syncqt-generated
   forwarding headers from an existing Qt installation (MinGW build).

4. **UIC pre-generated**: `ui_qfiledialog.h` is pre-generated (stored in `generated/uic/`).
   A future step could build `uic.exe` and generate it at build time.

## Future Work

- [x] Build QtGui module (painting, fonts, images, windowing)
- [x] Build QtWidgets module (UI widgets, dialogs, layouts)
- [x] Build QtNetwork module (HTTP, sockets, DNS)
- [x] Build QtConcurrent module (thread pool, parallel execution)
- [x] Build platform plugins (qwindows for Windows)
- [x] Build harfbuzz, freetype, libpng, libjpeg as 3rd party dependencies
- [x] Generate MOC outputs at build time (moc.exe runs during build)
- [ ] Build UIC tool and generate ui_*.h at build time
- [ ] Run syncqt from Zig build to generate forwarding headers
- [ ] Add cross-compilation support (Linux, macOS targets)
- [ ] Add build options for feature selection

## References

- [VTK Zig Build](../vtk-zig-build/) - Reference implementation for large C++ project
- [allyourcodebase](https://github.com/allyourcodebase) - Zig build patterns for C/C++ libraries
- [Qt 6.8.3 Source](https://download.qt.io/official_releases/qt/6.8/6.8.3/)
- [Qt Build System](https://doc.qt.io/qt-6/build-sources.html)
- [Qt Platform Abstraction](https://doc.qt.io/qt-6/qpa.html)
