# Qt6 Static Build with Zig Build System

Build Qt 6.8.3 as static libraries using the Zig build system, replacing CMake/Ninja entirely.

## What's Built

| Library | Description | Debug Size |
|---------|-------------|------------|
| **Qt Modules** | | |
| `Qt6Core.lib` | Core non-GUI functionality | 197 MB |
| `Qt6Gui.lib` | GUI foundation (painting, fonts, images, RHI) | 258 MB |
| `Qt6Widgets.lib` | Desktop widgets (buttons, dialogs, views) | 246 MB |
| `Qt6Network.lib` | Networking (HTTP, sockets, SSL base) | 89 MB |
| `Qt6Concurrent.lib` | Thread pool and parallel execution | 263 KB |
| `Qt6Xml.lib` | XML DOM parser | 3.1 MB |
| `Qt6Sql.lib` | SQL database abstraction + models | 12.2 MB |
| `Qt6OpenGL.lib` | OpenGL wrappers and paint engine | 17.4 MB |
| `Qt6PrintSupport.lib` | Printing, print dialogs, print preview | 14.2 MB |
| `Qt6Svg.lib` | SVG rendering | 14.2 MB |
| `Qt6SvgWidgets.lib` | SVG widget integration | 1.0 MB |
| `Qt6WebChannel.lib` | WebChannel for Qt/web bridge | 7.7 MB |
| `Qt6Charts.lib` | Charts (line, bar, pie, scatter, etc.) | 97.3 MB |
| `Qt6Multimedia.lib` | Audio/video playback, capture, devices | 49.5 MB |
| `Qt6SpatialAudio.lib` | 3D spatial audio (Resonance Audio) | 64.6 MB |
| **Platform** | | |
| `qwindows.lib` | Windows platform plugin (static) | 35.6 MB |
| **3rd Party** | | |
| `qtHarfbuzz.lib` | Text shaping engine | 133 MB |
| `qtFreetype.lib` | Font rendering | 14.0 MB |
| `qtLibpng.lib` | PNG codec | 3.2 MB |
| `qtLibjpeg.lib` | JPEG codec | 9.3 MB |
| `qtZlib.lib` | Compression | 1.7 MB |
| `qtPcre2.lib` | Regular expressions | 4.2 MB |
| `qtDoubleConversion.lib` | Float/string conversion | 863 KB |
| `qtBootstrap.lib` | Minimal QtCore for tools | 57.2 MB |
| **Tools** | | |
| `moc.exe` | Qt Meta Object Compiler | 13.4 MB |
| `rcc.exe` | Qt Resource Compiler | 31.5 MB |

## Prerequisites

- **Zig** 0.14.0+ (tested with 0.16.0-dev) - [ziglang.org](https://ziglang.org/download/)

No external Qt installation is required. All necessary Qt 6.8.3 source code and headers are bundled in the repository under `Qt/6.8.3/`.

FFmpeg 7.0.1 source (with Zig build system) is bundled under `ffmpeg/` for the Qt Multimedia FFmpeg backend.

## Project Structure

```
qt6-zig-build/
├── build.zig                 # Main Zig build script
├── build.zig.zon             # Package manifest
├── source_lists.zig          # QtCore source file arrays
├── source_lists_extra.zig    # QtGui/Widgets/Network/etc source arrays
├── source_lists_modules.zig  # XML/SQL/OpenGL/PrintSupport/SVG/WebChannel sources
├── source_lists_charts.zig   # QtCharts source arrays
├── source_lists_multimedia.zig # Multimedia/SpatialAudio/FFmpeg sources
├── moc_headers.zig           # MOC header/source lists per module
├── Qt/6.8.3/                 # Bundled Qt 6.8.3 source (self-contained)
│   ├── include/              # syncqt-generated forwarding headers
│   │   ├── QtCore/, QtGui/, QtWidgets/, QtNetwork/, QtConcurrent/
│   │   ├── QtXml/, QtSql/, QtOpenGL/, QtPrintSupport/
│   │   ├── QtSvg/, QtSvgWidgets/, QtWebChannel/, QtCharts/
│   │   └── QtMultimedia/, QtSpatialAudio/
│   ├── qtbase/
│   │   ├── src/              # Qt source (corelib, gui, widgets, network, etc.)
│   │   └── mkspecs/          # Platform specifications (win32-g++)
│   ├── qtsvg/src/            # SVG module source
│   ├── qtcharts/src/         # Charts module source
│   ├── qtwebchannel/src/     # WebChannel module source
│   └── qtmultimedia/src/     # Multimedia + SpatialAudio source
├── ffmpeg/                   # FFmpeg 7.0.1 source (Zig build system)
├── generated/
│   ├── Qt{Core,Gui,Widgets,Network}/  # Config headers
│   ├── Qt{Xml,Sql,OpenGL,PrintSupport,Charts,Multimedia}/ # Module configs
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

No additional setup is needed — the Qt source code is bundled in the repository.

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
│   ├── Qt6Core.lib, Qt6Gui.lib, Qt6Widgets.lib, Qt6Network.lib
│   ├── Qt6Concurrent.lib, Qt6Xml.lib, Qt6Sql.lib, Qt6OpenGL.lib
│   ├── Qt6PrintSupport.lib, Qt6Svg.lib, Qt6SvgWidgets.lib
│   ├── Qt6WebChannel.lib, Qt6Charts.lib
│   ├── Qt6Multimedia.lib, Qt6SpatialAudio.lib
│   ├── qwindows.lib
│   ├── qtHarfbuzz.lib, qtFreetype.lib, qtLibpng.lib, qtLibjpeg.lib
│   ├── qtZlib.lib, qtPcre2.lib, qtDoubleConversion.lib
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
// Core modules
exe.linkLibrary(qt_dep.artifact("Qt6Core"));
exe.linkLibrary(qt_dep.artifact("Qt6Gui"));
exe.linkLibrary(qt_dep.artifact("Qt6Widgets"));
exe.linkLibrary(qt_dep.artifact("qwindows"));
// Optional modules (link as needed)
exe.linkLibrary(qt_dep.artifact("Qt6Network"));
exe.linkLibrary(qt_dep.artifact("Qt6Xml"));
exe.linkLibrary(qt_dep.artifact("Qt6Sql"));
exe.linkLibrary(qt_dep.artifact("Qt6OpenGL"));
exe.linkLibrary(qt_dep.artifact("Qt6PrintSupport"));
exe.linkLibrary(qt_dep.artifact("Qt6Svg"));
exe.linkLibrary(qt_dep.artifact("Qt6SvgWidgets"));
exe.linkLibrary(qt_dep.artifact("Qt6WebChannel"));
exe.linkLibrary(qt_dep.artifact("Qt6Charts"));
exe.linkLibrary(qt_dep.artifact("Qt6Multimedia"));
exe.linkLibrary(qt_dep.artifact("Qt6SpatialAudio"));
// 3rd party libs
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
- OpenGL (desktop, dynamic GL)
- No Vulkan or D-Bus support

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
| OpenGL (desktop, dynamic GL) | Enabled |
| SVG rendering | Enabled |
| Charts (line, bar, pie, etc.) | Enabled |
| Multimedia (audio/video, WMF backend) | Enabled |
| FFmpeg media backend (bundled 7.0.1) | Available |
| Spatial Audio (Resonance Audio) | Enabled |
| SQL database abstraction | Enabled |
| Print support + dialogs | Enabled |
| WebChannel | Enabled |
| Vulkan | Disabled |
| D-Bus | Disabled |
| SSL/TLS | Disabled (no OpenSSL) |

## License

Qt is licensed under LGPL-3.0 / GPL-2.0 / GPL-3.0 or commercial license.
See [Qt Licensing](https://www.qt.io/licensing/) for details.

The Zig build scripts in this repository are provided as-is for educational and development purposes.
