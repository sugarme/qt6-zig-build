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
- An existing Qt CMake build (for syncqt-generated forwarding headers and pre-generated MOC outputs)

## Project Structure

```
qt6-zig-build/
├── build.zig                 # Main Zig build script
├── build.zig.zon             # Package manifest
├── source_lists.zig          # QtCore source file arrays
├── source_lists_extra.zig    # QtGui/Widgets/Network/etc source arrays
├── qt-sources/
│   └── 6.8.3/                # Qt version directory
│       ├── qtbase/            # Junction → Qt 6.8.3 qtbase source
│       └── include/           # Junction → Qt build syncqt headers
├── generated/
│   ├── QtCore/               # Config headers (qconfig.h, etc.)
│   ├── QtGui/                # QtGui config headers
│   ├── QtWidgets/            # QtWidgets config headers
│   ├── QtNetwork/            # QtNetwork config headers
│   ├── moc/                  # QtCore MOC outputs
│   ├── moc_gui/              # QtGui MOC outputs
│   ├── moc_widgets/          # QtWidgets MOC outputs
│   ├── moc_network/          # QtNetwork MOC outputs
│   ├── moc_qwindows/         # Platform plugin MOC outputs
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

2. Set up Qt source code in the `qt-sources/6.8.3/` directory:
```bash
# Create version directory
mkdir -p qt-sources/6.8.3

# Windows: Create directory junctions to your Qt source and build
mklink /J qt-sources\6.8.3\qtbase C:\path\to\qt-sources\6.8.3\Src\qtbase
mklink /J qt-sources\6.8.3\include C:\path\to\qt-sources\6.8.3\build\qtbase\include

# Linux/macOS: Use symlinks instead
# ln -s /path/to/qt-sources/6.8.3/Src/qtbase qt-sources/6.8.3/qtbase
# ln -s /path/to/qt-sources/6.8.3/build/qtbase/include qt-sources/6.8.3/include
```

The `qtbase` junction points to the Qt 6.8.3 source code (the `qtbase` submodule).
The `include` junction points to the syncqt-generated forwarding headers from an existing CMake build.

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
