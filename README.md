# Qt6 Static Build with Zig Build System

Build Qt 6.8.3 as static libraries using the Zig build system, replacing CMake/Ninja entirely.

## What's Built

| Library | Description | Release Size |
|---------|-------------|-------------|
| `Qt6Core.lib` | Core non-GUI functionality | 16 MB |
| `Qt6Gui.lib` | GUI foundation (painting, fonts, images, RHI) | 20 MB |
| `Qt6Widgets.lib` | Desktop widgets (buttons, dialogs, views) | 22 MB |
| `Qt6Network.lib` | Networking (HTTP, sockets, SSL base) | 7 MB |
| `Qt6Concurrent.lib` | Thread pool and parallel execution | 23 KB |
| `qwindows.lib` | Windows platform plugin (static) | 2.5 MB |
| `qtHarfbuzz.lib` | Text shaping engine | 8.7 MB |
| `qtFreetype.lib` | Font rendering | 869 KB |
| `qtLibpng.lib` | PNG codec | 261 KB |
| `qtLibjpeg.lib` | JPEG codec | 440 KB |
| `qtZlib.lib` | Compression | 104 KB |
| `qtPcre2.lib` | Regular expressions | 416 KB |
| `qtDoubleConversion.lib` | Float/string conversion | 67 KB |
| `qtBootstrap.lib` | Minimal QtCore for tools | 4.9 MB |
| `moc.exe` | Qt Meta Object Compiler | 2.3 MB |
| `rcc.exe` | Qt Resource Compiler | 4.2 MB |

## Prerequisites

- **Zig** 0.14.0+ (tested with 0.16.0-dev) - [ziglang.org](https://ziglang.org/download/)
- **Qt 6.8.3 source** code (qtbase module)
- An existing Qt MinGW installation (for syncqt-generated forwarding headers)

## Project Structure

```
qt6-zig-build/
├── build.zig                 # Main Zig build script
├── build.zig.zon             # Package manifest
├── source_lists.zig          # QtCore source file arrays
├── source_lists_extra.zig    # QtGui/Widgets/Network/etc source arrays
├── moc_headers.zig           # MOC header/source lists per module
├── qt-resource/
│   ├── qtbase/               # Junction → Qt 6.8.3 Src/qtbase
│   ├── include/              # Junction → MinGW Qt include (syncqt headers)
│   ├── lib/                  # Junction → MinGW Qt lib
│   ├── mkspecs/              # Junction → MinGW Qt mkspecs
│   └── plugins/              # Junction → MinGW Qt plugins
├── generated/
│   ├── QtCore/               # Config headers (qconfig.h, etc.)
│   ├── QtGui/                # QtGui config headers
│   ├── QtWidgets/            # QtWidgets config headers
│   ├── QtNetwork/            # QtNetwork config headers
│   ├── uic/                  # Pre-generated UIC form headers
│   ├── rcc/                  # RCC-generated resources
│   └── moc_parser_patched.cpp # Clang compatibility patch
├── DEV_NOTES.md
└── README.md
```

## Setup

1. Clone this repository:
```bash
git clone https://github.com/sugarme/qt6-zig-build.git
cd qt6-zig-build
```

2. Set up `qt-resource/` directory with junctions to your Qt installation and source:
```bash
# Create resource directory
mkdir qt-resource

# Windows: Create directory junctions (requires Qt 6.8.3 installed with MinGW and Sources)
mklink /J qt-resource\qtbase C:\Qt\6.8.3\Src\qtbase
mklink /J qt-resource\include C:\Qt\6.8.3\mingw_64\include
mklink /J qt-resource\lib C:\Qt\6.8.3\mingw_64\lib
mklink /J qt-resource\mkspecs C:\Qt\6.8.3\mingw_64\mkspecs
mklink /J qt-resource\plugins C:\Qt\6.8.3\mingw_64\plugins

# Linux/macOS: Use symlinks instead
# ln -s /path/to/Qt/6.8.3/Src/qtbase qt-resource/qtbase
# ln -s /path/to/Qt/6.8.3/gcc_64/include qt-resource/include
# ... etc.
```

The `qtbase` junction points to the Qt 6.8.3 source code.
The `include` junction points to the syncqt-generated forwarding headers from the Qt installation.
The `lib`, `mkspecs`, and `plugins` junctions point to the pre-built MinGW Qt (used for reference headers).

## Build Commands

```bash
# Debug build (all modules)
zig build

# Release build optimized for size (recommended)
zig build -Doptimize=ReleaseSmall

# Release build optimized for speed
zig build -Doptimize=ReleaseFast

# Release with safety checks
zig build -Doptimize=ReleaseSafe
```

## Output

Build artifacts are placed in `zig-out/`:
```
zig-out/
├── lib/
│   ├── Qt6Core.lib
│   ├── Qt6Gui.lib
│   ├── Qt6Widgets.lib
│   ├── Qt6Network.lib
│   ├── Qt6Concurrent.lib
│   ├── qwindows.lib
│   ├── qtHarfbuzz.lib
│   ├── qtFreetype.lib
│   ├── qtLibpng.lib
│   ├── qtLibjpeg.lib
│   ├── qtZlib.lib
│   ├── qtPcre2.lib
│   ├── qtDoubleConversion.lib
│   └── qtBootstrap.lib
└── bin/
    ├── moc.exe
    └── rcc.exe
```

## Verify

```bash
# Check tools work
zig-out/bin/moc.exe --version    # Should print: moc 6.8.3
zig-out/bin/rcc.exe --version    # Should print: rcc 6.8.3
```

## Using in Your Application

To link against these static libraries in your own Zig project:

```zig
const qt_dep = b.dependency("qt6_static", .{
    .target = target,
    .optimize = optimize,
});
exe.linkLibrary(qt_dep.artifact("Qt6Core"));
exe.linkLibrary(qt_dep.artifact("Qt6Gui"));
exe.linkLibrary(qt_dep.artifact("Qt6Widgets"));
exe.linkLibrary(qt_dep.artifact("qwindows"));
// ... link 3rd party libs
exe.linkLibrary(qt_dep.artifact("qtHarfbuzz"));
exe.linkLibrary(qt_dep.artifact("qtFreetype"));
exe.linkLibrary(qt_dep.artifact("qtLibpng"));
exe.linkLibrary(qt_dep.artifact("qtLibjpeg"));
exe.linkLibrary(qt_dep.artifact("qtZlib"));
exe.linkLibrary(qt_dep.artifact("qtPcre2"));
```

For static Qt builds, you must also:
- Define `QT_STATIC` in your application
- Use `Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)` for the platform plugin
- Link Windows system libraries: `user32`, `gdi32`, `shell32`, `advapi32`, `ole32`, etc.

## Platform Support

Currently targets **Windows x86_64** only. The build uses:
- `win32-g++` mkspec (Zig/Clang compatible)
- DirectWrite for font rendering
- Direct3D 11/12 for RHI backend
- Windows UI Automation for accessibility
- No OpenGL, Vulkan, or D-Bus support

## Enabled Features

| Feature | Status |
|---------|--------|
| FreeType fonts | Enabled |
| HarfBuzz text shaping | Enabled |
| PNG/JPEG image formats | Enabled |
| DirectWrite | Enabled |
| Direct3D 11/12 RHI | Enabled |
| CSS parser | Enabled |
| Drag and drop | Enabled |
| Clipboard | Enabled |
| Accessibility (UI Automation) | Enabled |
| PDF output | Enabled |
| File system model | Enabled |
| Markdown reader/writer | Enabled |
| OpenGL | Disabled |
| Vulkan | Disabled |
| D-Bus | Disabled |
| SSL/TLS | Disabled (no OpenSSL) |

## License

Qt is licensed under LGPL-3.0 / GPL-2.0 / GPL-3.0 or commercial license.
See [Qt Licensing](https://www.qt.io/licensing/) for details.

The Zig build scripts in this repository are provided as-is for educational and development purposes.
