# Qt6 Static Build with Zig Build System

## Overview

This project builds Qt 6.8.3 as static libraries using the Zig build system,
replacing CMake/Ninja with `build.zig`. It builds 15 Qt modules (Core, Gui, Widgets,
Network, Concurrent, Xml, Sql, OpenGL, PrintSupport, Svg, SvgWidgets, WebChannel,
Charts, Multimedia, SpatialAudio), the Windows platform plugin (qwindows), all
required 3rd party dependencies (HarfBuzz, FreeType, libpng, libjpeg, zlib, PCRE2,
double-conversion, Resonance Audio, Eigen), and the Qt build tools (`moc` and `rcc`)
from source. FFmpeg 7.0.1 source is bundled for the Multimedia FFmpeg backend.

## Architecture

### Build Targets

| Target | Type | Description | Debug Size |
|--------|------|-------------|------------|
| **Qt Modules** | | | |
| `Qt6Core.lib` | Static library | Core non-GUI functionality | 197 MB |
| `Qt6Gui.lib` | Static library | GUI foundation (painting, fonts, images, RHI) | 258 MB |
| `Qt6Widgets.lib` | Static library | Desktop widgets (buttons, dialogs, views) | 246 MB |
| `Qt6Network.lib` | Static library | Networking (HTTP, sockets, DNS) | 89 MB |
| `Qt6Concurrent.lib` | Static library | Thread pool and parallel execution | 263 KB |
| `Qt6Xml.lib` | Static library | XML DOM parser | 3.1 MB |
| `Qt6Sql.lib` | Static library | SQL database abstraction + models | 12.2 MB |
| `Qt6OpenGL.lib` | Static library | OpenGL wrappers and paint engine | 17.4 MB |
| `Qt6PrintSupport.lib` | Static library | Printing, print dialogs, print preview | 14.2 MB |
| `Qt6Svg.lib` | Static library | SVG rendering | 14.2 MB |
| `Qt6SvgWidgets.lib` | Static library | SVG widget integration | 1.0 MB |
| `Qt6WebChannel.lib` | Static library | WebChannel for Qt/web bridge | 7.7 MB |
| `Qt6Charts.lib` | Static library | Charts (line, bar, pie, scatter, etc.) | 97.3 MB |
| `Qt6Multimedia.lib` | Static library | Audio/video playback, capture, devices | 49.5 MB |
| `Qt6SpatialAudio.lib` | Static library | 3D spatial audio (Resonance Audio) | 64.6 MB |
| **Platform** | | | |
| `qwindows.lib` | Static library | Windows platform plugin | 35.6 MB |
| **3rd Party** | | | |
| `qtHarfbuzz.lib` | Static library | HarfBuzz text shaping engine | 133 MB |
| `qtFreetype.lib` | Static library | FreeType font rendering | 14.0 MB |
| `qtLibpng.lib` | Static library | PNG image codec | 3.2 MB |
| `qtLibjpeg.lib` | Static library | JPEG image codec | 9.3 MB |
| `qtZlib.lib` | Static library | zlib compression | 1.7 MB |
| `qtPcre2.lib` | Static library | PCRE2 regular expressions | 4.2 MB |
| `qtDoubleConversion.lib` | Static library | Float/string conversion | 863 KB |
| `qtBootstrap.lib` | Static library | Minimal QtCore for tools | 57.2 MB |
| **Tools** | | | |
| `moc.exe` | Executable | Qt Meta Object Compiler | 13.4 MB |
| `rcc.exe` | Executable | Qt Resource Compiler | 31.5 MB |

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
        ├──► MOC generation for all Qt modules
        │
        ▼
   Qt6Core.lib  (full QtCore with MOC outputs)
        │
        ├──► rcc.exe  (links Qt6Core + qtZlib + qtPcre2)
        │
        ├──► Qt6Gui.lib          (+ qtHarfbuzz, qtFreetype, qtLibpng, qtLibjpeg, OpenGL)
        ├──► Qt6Widgets.lib
        ├──► Qt6Network.lib
        ├──► Qt6Concurrent.lib   (header-only, no MOC)
        ├──► Qt6Xml.lib          (no MOC needed)
        ├──► Qt6Sql.lib
        ├──► Qt6OpenGL.lib       (depends on Gui)
        ├──► Qt6PrintSupport.lib (depends on Gui, Widgets)
        ├──► Qt6Svg.lib          (depends on Gui)
        ├──► Qt6SvgWidgets.lib   (depends on Gui, Widgets, Svg)
        ├──► Qt6WebChannel.lib   (depends on Core only)
        ├──► Qt6Charts.lib       (depends on Gui, Widgets)
        ├──► Qt6Multimedia.lib   (depends on Gui, Network; WMF audio backend)
        ├──► Qt6SpatialAudio.lib (depends on Multimedia; + Resonance Audio, Eigen)
        └──► qwindows.lib        (Windows platform plugin)
```

### Directory Structure

```
qt6-zig-build/
├── build.zig              # Main Zig build script
├── build.zig.zon          # Package manifest
├── source_lists.zig       # QtCore source file arrays
├── source_lists_extra.zig # QtGui/Widgets/Network/etc source arrays
├── source_lists_modules.zig # XML/SQL/OpenGL/PrintSupport/SVG/WebChannel sources
├── source_lists_charts.zig  # QtCharts source arrays
├── source_lists_multimedia.zig # Multimedia/SpatialAudio/FFmpeg sources
├── moc_headers.zig        # MOC header/source lists per module
├── DEV_NOTES.md           # This file
├── Qt/6.8.3/              # Bundled Qt 6.8.3 source (self-contained)
│   ├── include/           # syncqt-generated forwarding headers
│   │   ├── QtCore/, QtGui/, QtWidgets/, QtNetwork/, QtConcurrent/
│   │   ├── QtXml/, QtSql/, QtOpenGL/, QtPrintSupport/
│   │   ├── QtSvg/, QtSvgWidgets/, QtWebChannel/, QtCharts/
│   │   └── QtMultimedia/, QtSpatialAudio/
│   ├── qtbase/
│   │   ├── src/           # Qt source code (corelib, gui, widgets, etc.)
│   │   └── mkspecs/       # Platform specifications (win32-g++)
│   ├── qtsvg/src/         # SVG module source
│   ├── qtcharts/src/      # Charts module source
│   ├── qtwebchannel/src/  # WebChannel module source
│   └── qtmultimedia/src/  # Multimedia + SpatialAudio + 3rdparty
├── ffmpeg/                # FFmpeg 7.0.1 source (Zig build system)
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
| HarfBuzz | 10.1.0 | 76 | Text shaping |
| FreeType | 2.13.3 | 43 | Font rendering |
| libpng | 1.6.44 | 15 | PNG codec |
| libjpeg-turbo | 3.0.1 | 65 | JPEG codec |
| tinycbor | 0.6.1 | Included via headers | CBOR serialization |
| rfc6234 | - | 2 | SHA-224/256/384/512 |
| Resonance Audio | - | 72 | 3D spatial audio engine |
| Eigen | 3.x | Headers only | Linear algebra (for Resonance Audio) |
| pffft | - | 1 | FFT (for Resonance Audio) |
| FFmpeg | 7.0.1 | Bundled source | Media codecs (Zig build system) |

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

## Build Output Sizes (Debug)

| Artifact | Size |
|----------|------|
| Qt6Core.lib | 197 MB |
| Qt6Gui.lib | 258 MB |
| Qt6Widgets.lib | 246 MB |
| Qt6Network.lib | 89 MB |
| Qt6Charts.lib | 97.3 MB |
| Qt6SpatialAudio.lib | 64.6 MB |
| Qt6Multimedia.lib | 49.5 MB |
| Qt6OpenGL.lib | 17.4 MB |
| Qt6PrintSupport.lib | 14.2 MB |
| Qt6Svg.lib | 14.2 MB |
| Qt6Sql.lib | 12.2 MB |
| Qt6WebChannel.lib | 7.7 MB |
| Qt6Xml.lib | 3.1 MB |
| Qt6SvgWidgets.lib | 1.0 MB |
| Qt6Concurrent.lib | 263 KB |
| qwindows.lib | 35.6 MB |
| qtHarfbuzz.lib | 133 MB |
| qtBootstrap.lib | 57.2 MB |
| qtFreetype.lib | 14.0 MB |
| qtLibjpeg.lib | 9.3 MB |
| qtPcre2.lib | 4.2 MB |
| qtLibpng.lib | 3.2 MB |
| qtZlib.lib | 1.7 MB |
| qtDoubleConversion.lib | 863 KB |
| rcc.exe | 31.5 MB |
| moc.exe | 13.4 MB |

## Known Limitations

1. **Windows x86_64 only**: Currently configured for Windows. Linux/macOS would need
   different platform-specific source files and mkspecs.

2. **No QML/Qt Quick**: Only C++ modules are built (no declarative/QML engine).

3. **syncqt headers**: The `Qt/6.8.3/include/` directory contains pre-generated syncqt
   forwarding headers bundled in the repository.

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
- [x] Build QtXml, QtSql, QtOpenGL, QtPrintSupport modules
- [x] Build QtSvg, QtSvgWidgets modules
- [x] Build QtWebChannel module
- [x] Build QtCharts module
- [x] Build QtMultimedia module (Windows Media Foundation audio backend)
- [x] Build QtSpatialAudio module (with Resonance Audio + Eigen)
- [x] Enable OpenGL support in QtGui
- [x] Bundle FFmpeg 7.0.1 source (Zig build system)
- [ ] Build FFmpeg plugin for Qt Multimedia
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
