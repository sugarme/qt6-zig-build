const std = @import("std");
const sources = @import("source_lists.zig");
const extra = @import("source_lists_extra.zig");
const moc_lists = @import("moc_headers.zig");
const modules = @import("source_lists_modules.zig");
const charts = @import("source_lists_charts.zig");
const multimedia = @import("source_lists_multimedia.zig");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // ========================================================================
    // Build options for optional modules (core modules always built)
    // ========================================================================

    const enable_xml = b.option(bool, "xml", "Build Qt6Xml module") orelse true;
    const enable_sql = b.option(bool, "sql", "Build Qt6Sql module") orelse true;
    const enable_opengl = b.option(bool, "opengl", "Build Qt6OpenGL module") orelse true;
    const enable_printsupport = b.option(bool, "printsupport", "Build Qt6PrintSupport module") orelse true;
    const enable_svg = b.option(bool, "svg", "Build Qt6Svg module") orelse true;
    const enable_webchannel = b.option(bool, "webchannel", "Build Qt6WebChannel module") orelse true;
    const enable_charts = b.option(bool, "charts", "Build Qt6Charts module") orelse true;
    const enable_multimedia = b.option(bool, "multimedia", "Build Qt6Multimedia module") orelse true;
    const enable_spatialaudio = b.option(bool, "spatialaudio", "Build Qt6SpatialAudio module") orelse true;

    // ========================================================================
    // Common flags
    // ========================================================================

    const common_c_flags: []const []const u8 = &.{
        "-w", // suppress all warnings
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX",
        "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
    };

    const qt_core_cxx_flags: []const []const u8 = &.{
        "-std=c++17",
        "-w",
        "-fdelayed-template-parsing",
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX",
        "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH",
        "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_TYPESAFE_FLAGS",
        "-DQT_USE_NODISCARD_FILE_OPEN",
        "-DQT_STATIC",
        "-DQT_BUILD_CORE_LIB",
        "-DQT_NO_DEBUG",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC",
        "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    // ========================================================================
    // 1. zlib (static library)
    // ========================================================================

    const zlib_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    zlib_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/zlib"),
        .files = sources.zlib_sources,
        .flags = common_c_flags,
    });

    zlib_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/zlib/src"));
    // Qt's bundled zlib includes qconfig.h and qglobal.h
    addQtCoreIncludes(zlib_mod, b);

    const zlib_lib = b.addLibrary(.{
        .name = "qtZlib",
        .linkage = .static,
        .root_module = zlib_mod,
    });
    b.installArtifact(zlib_lib);

    // ========================================================================
    // 2. PCRE2 (static library)
    // ========================================================================

    const pcre2_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    pcre2_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/pcre2"),
        .files = sources.pcre2_sources,
        .flags = common_c_flags ++ &[_][]const u8{
            "-DHAVE_CONFIG_H",
            "-DPCRE2_CODE_UNIT_WIDTH=16",
            "-DPCRE2_STATIC",
            "-DPCRE2_DISABLE_JIT",
        },
    });

    pcre2_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/pcre2/src"));

    const pcre2_lib = b.addLibrary(.{
        .name = "qtPcre2",
        .linkage = .static,
        .root_module = pcre2_mod,
    });
    b.installArtifact(pcre2_lib);

    // ========================================================================
    // 3. double-conversion (static library)
    // ========================================================================

    const dblconv_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });
    dblconv_mod.linkSystemLibrary("c++", .{});

    dblconv_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/double-conversion"),
        .files = sources.double_conversion_sources,
        .flags = &.{
            "-std=c++17",
            "-w",
            "-D_CRT_SECURE_NO_WARNINGS",
        },
    });

    dblconv_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/double-conversion"));
    dblconv_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/double-conversion/double-conversion"));

    const dblconv_lib = b.addLibrary(.{
        .name = "qtDoubleConversion",
        .linkage = .static,
        .root_module = dblconv_mod,
    });
    b.installArtifact(dblconv_lib);

    // ========================================================================
    // 4. Bootstrap QtCore (static library - no MOC needed)
    // ========================================================================

    const bootstrap_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    bootstrap_mod.linkSystemLibrary("c++", .{});
    bootstrap_mod.linkSystemLibrary("advapi32", .{});
    bootstrap_mod.linkSystemLibrary("kernel32", .{});
    bootstrap_mod.linkSystemLibrary("netapi32", .{});
    bootstrap_mod.linkSystemLibrary("ole32", .{});
    bootstrap_mod.linkSystemLibrary("shell32", .{});
    bootstrap_mod.linkSystemLibrary("user32", .{});
    bootstrap_mod.linkSystemLibrary("uuid", .{});
    bootstrap_mod.linkSystemLibrary("version", .{});
    bootstrap_mod.linkSystemLibrary("winmm", .{});
    bootstrap_mod.linkSystemLibrary("ws2_32", .{});

    // Bootstrap-specific flags
    const bootstrap_flags: []const []const u8 = &.{
        "-std=c++17",
        "-w",
        "-fdelayed-template-parsing",
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX",
        "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_BOOTSTRAPPED",
        "-DQT_NO_CAST_FROM_ASCII",
        "-DQT_NO_CAST_TO_ASCII",
        "-DQT_NO_FOREACH",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_STATIC",
        "-DQT_VERSION_STR=\"6.8.3\"",
        "-DQT_VERSION_MAJOR=6",
        "-DQT_VERSION_MINOR=8",
        "-DQT_VERSION_PATCH=3",
        // Features not defined in qconfig-bootstrapped.h
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC",
        "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    addQtCoreIncludes(bootstrap_mod, b);

    // Bootstrap core sources
    bootstrap_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/corelib"),
        .files = sources.bootstrap_core_sources,
        .flags = bootstrap_flags,
    });

    // Bootstrap Windows-specific sources
    bootstrap_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/corelib"),
        .files = sources.bootstrap_win_sources,
        .flags = bootstrap_flags,
    });

    // Bootstrap also compiles embedded PCRE2 sources
    bootstrap_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/pcre2"),
        .files = sources.pcre2_sources,
        .flags = common_c_flags ++ &[_][]const u8{
            "-DHAVE_CONFIG_H",
            "-DPCRE2_CODE_UNIT_WIDTH=16",
            "-DPCRE2_STATIC",
            "-DPCRE2_DISABLE_JIT",
        },
    });

    const bootstrap_lib = b.addLibrary(.{
        .name = "qtBootstrap",
        .linkage = .static,
        .root_module = bootstrap_mod,
    });
    b.installArtifact(bootstrap_lib);

    // ========================================================================
    // 5. MOC tool (executable - links Bootstrap)
    // ========================================================================

    const moc_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    moc_mod.linkSystemLibrary("c++", .{});
    moc_mod.linkSystemLibrary("advapi32", .{});
    moc_mod.linkSystemLibrary("kernel32", .{});
    moc_mod.linkSystemLibrary("netapi32", .{});
    moc_mod.linkSystemLibrary("ole32", .{});
    moc_mod.linkSystemLibrary("shell32", .{});
    moc_mod.linkSystemLibrary("user32", .{});
    moc_mod.linkSystemLibrary("uuid", .{});
    moc_mod.linkSystemLibrary("version", .{});
    moc_mod.linkSystemLibrary("winmm", .{});
    moc_mod.linkSystemLibrary("ws2_32", .{});

    addQtCoreIncludes(moc_mod, b);
    moc_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/moc"));
    moc_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/shared"));
    moc_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/tinycbor/src"));

    const moc_flags: []const []const u8 = &.{
        "-std=c++17",
        "-w",
        "-fdelayed-template-parsing",
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-DNOMINMAX",
        "-DQT_MOC",
        "-DQT_NO_FOREACH",
        "-DQT_USE_NODISCARD_FILE_OPEN",
        "-DQT_BOOTSTRAPPED",
        "-DQT_STATIC",
        "-DQT_VERSION_STR=\"6.8.3\"",
        "-DQT_VERSION_MAJOR=6",
        "-DQT_VERSION_MINOR=8",
        "-DQT_VERSION_PATCH=3",
    };

    // Moc sources (parser.cpp patched for Clang compatibility)
    moc_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/tools/moc"),
        .files = &.{
            "collectjson.cpp",
            "generator.cpp",
            "main.cpp",
            "moc.cpp",
            "preprocessor.cpp",
            "token.cpp",
        },
        .flags = moc_flags,
    });
    // Patched parser.cpp (explicit QByteArray constructors for Clang)
    moc_mod.addCSourceFiles(.{
        .root = b.path("generated"),
        .files = &.{"moc_parser_patched.cpp"},
        .flags = moc_flags,
    });

    moc_mod.linkLibrary(bootstrap_lib);

    const moc_exe = b.addExecutable(.{
        .name = "moc",
        .root_module = moc_mod,
    });
    b.installArtifact(moc_exe);

    // ========================================================================
    // 6. Generate MOC outputs for QtCore
    // ========================================================================

    const qtcore_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/qtbase/src/corelib/global"),
        b.path("Qt/6.8.3/qtbase/src/corelib/kernel"),
        b.path("Qt/6.8.3/qtbase/src/corelib/io"),
        b.path("Qt/6.8.3/qtbase/src/corelib/thread"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };

    const qtcore_moc = generateMocOutputs(
        b,
        moc_exe,
        b.path("Qt/6.8.3/qtbase/src/corelib"),
        moc_lists.qtcore_moc_headers,
        moc_lists.qtcore_moc_sources,
        moc_lists.qtcore_moc_standalone,
        &.{},
        qtcore_moc_includes,
    );

    // ========================================================================
    // 7. Full QtCore (static library - with MOC outputs)
    // ========================================================================

    const qtcore_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    qtcore_mod.linkSystemLibrary("c++", .{});
    qtcore_mod.linkSystemLibrary("advapi32", .{});
    qtcore_mod.linkSystemLibrary("authz", .{});
    qtcore_mod.linkSystemLibrary("kernel32", .{});
    qtcore_mod.linkSystemLibrary("netapi32", .{});
    qtcore_mod.linkSystemLibrary("ole32", .{});
    qtcore_mod.linkSystemLibrary("shell32", .{});
    qtcore_mod.linkSystemLibrary("user32", .{});
    qtcore_mod.linkSystemLibrary("uuid", .{});
    qtcore_mod.linkSystemLibrary("version", .{});
    qtcore_mod.linkSystemLibrary("winmm", .{});
    qtcore_mod.linkSystemLibrary("ws2_32", .{});
    qtcore_mod.linkSystemLibrary("mpr", .{});
    qtcore_mod.linkSystemLibrary("userenv", .{});
    qtcore_mod.linkSystemLibrary("api-ms-win-core-synch-l1-2-0", .{});

    addQtCoreIncludes(qtcore_mod, b);
    // Generated MOC output directory (for #include "moc_xxx.cpp" in source files)
    qtcore_mod.addIncludePath(qtcore_moc.include_dir);

    // Full QtCore sources (common/cross-platform)
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/corelib"),
        .files = sources.qtcore_common_sources,
        .flags = qt_core_cxx_flags,
    });

    // QtCore Windows-specific sources
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/corelib"),
        .files = sources.qtcore_win_sources,
        .flags = qt_core_cxx_flags,
    });

    // double-conversion (embedded in QtCore)
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/double-conversion"),
        .files = sources.double_conversion_sources,
        .flags = &.{
            "-std=c++17",
            "-w",
            "-D_CRT_SECURE_NO_WARNINGS",
        },
    });

    // Embedded 3rd party hash algorithms
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty"),
        .files = sources.hash_3rdparty_sources,
        .flags = common_c_flags ++ &[_][]const u8{
            "-Wno-implicit-function-declaration",
        },
    });

    // MOC standalone compilation (only moc_qnamespace - others are #include'd from source files)
    for (qtcore_moc.standalone_files) |moc_file| {
        qtcore_mod.addCSourceFile(.{ .file = moc_file, .flags = qt_core_cxx_flags });
    }

    // Generated MIME database
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("generated"),
        .files = &.{"qmimeprovider_database.cpp"},
        .flags = qt_core_cxx_flags,
    });

    // Generated qconfig.cpp
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("generated/QtCore"),
        .files = &.{"qconfig.cpp"},
        .flags = qt_core_cxx_flags,
    });

    const qtcore_lib = b.addLibrary(.{
        .name = "Qt6Core",
        .linkage = .static,
        .root_module = qtcore_mod,
    });
    b.installArtifact(qtcore_lib);

    // ========================================================================
    // 7. RCC tool (executable) - requires full QtCore, built after QtCore
    // ========================================================================

    const rcc_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    rcc_mod.linkSystemLibrary("c++", .{});
    rcc_mod.linkSystemLibrary("advapi32", .{});
    rcc_mod.linkSystemLibrary("kernel32", .{});
    rcc_mod.linkSystemLibrary("netapi32", .{});
    rcc_mod.linkSystemLibrary("ole32", .{});
    rcc_mod.linkSystemLibrary("shell32", .{});
    rcc_mod.linkSystemLibrary("user32", .{});
    rcc_mod.linkSystemLibrary("uuid", .{});
    rcc_mod.linkSystemLibrary("version", .{});
    rcc_mod.linkSystemLibrary("winmm", .{});
    rcc_mod.linkSystemLibrary("ws2_32", .{});

    addQtCoreIncludes(rcc_mod, b);
    rcc_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/rcc"));

    const rcc_flags: []const []const u8 = &.{
        "-std=c++17",
        "-w",
        "-fdelayed-template-parsing",
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-DNOMINMAX",
        "-DQT_RCC",
        "-DQT_NO_FOREACH",
        "-DQT_USE_NODISCARD_FILE_OPEN",
        "-DQT_STATIC",
        "-DQT_NO_DEBUG",
        "-DQT_FEATURE_cpp_winrt=-1",
    };

    rcc_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/tools/rcc"),
        .files = sources.rcc_tool_sources,
        .flags = rcc_flags,
    });

    rcc_mod.linkLibrary(qtcore_lib);
    rcc_mod.linkLibrary(zlib_lib);
    rcc_mod.linkLibrary(pcre2_lib);

    const rcc_exe = b.addExecutable(.{
        .name = "rcc",
        .root_module = rcc_mod,
    });
    b.installArtifact(rcc_exe);

    // ========================================================================
    // 7b. UIC tool (executable) - links Bootstrap, generates ui_*.h from .ui files
    // ========================================================================

    const uic_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    uic_mod.linkSystemLibrary("c++", .{});
    uic_mod.linkSystemLibrary("advapi32", .{});
    uic_mod.linkSystemLibrary("kernel32", .{});
    uic_mod.linkSystemLibrary("netapi32", .{});
    uic_mod.linkSystemLibrary("ole32", .{});
    uic_mod.linkSystemLibrary("shell32", .{});
    uic_mod.linkSystemLibrary("user32", .{});
    uic_mod.linkSystemLibrary("uuid", .{});
    uic_mod.linkSystemLibrary("version", .{});
    uic_mod.linkSystemLibrary("winmm", .{});
    uic_mod.linkSystemLibrary("ws2_32", .{});

    // UIC include paths must come before QtCore includes to avoid utils.h shadowing
    uic_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/uic"));
    uic_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/uic/cpp"));
    uic_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/uic/python"));
    uic_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/tools/uic/shared"));
    addQtCoreIncludes(uic_mod, b);

    const uic_flags: []const []const u8 = &.{
        "-std=c++17",
        "-w",
        "-fdelayed-template-parsing",
        "-DWIN32",
        "-D_WINDOWS",
        "-DUNICODE",
        "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS",
        "-DNOMINMAX",
        "-DQT_UIC",
        "-DQT_NO_FOREACH",
        "-DQT_USE_NODISCARD_FILE_OPEN",
        "-DQT_NO_CAST_FROM_ASCII",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_STATIC",
        "-DQT_NO_DEBUG",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC",
        "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    uic_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/tools/uic"),
        .files = sources.uic_tool_sources,
        .flags = uic_flags,
    });

    uic_mod.linkLibrary(qtcore_lib);
    uic_mod.linkLibrary(zlib_lib);
    uic_mod.linkLibrary(pcre2_lib);

    const uic_exe = b.addExecutable(.{
        .name = "uic",
        .root_module = uic_mod,
    });
    b.installArtifact(uic_exe);

    // ========================================================================
    // 7c. Generate UIC outputs from .ui files
    // ========================================================================

    const uic_output = generateUicOutputs(b, uic_exe, &.{
        .{ .ui_file = b.path("Qt/6.8.3/qtbase/src/widgets/dialogs/qfiledialog.ui"), .output = "ui_qfiledialog.h" },
        .{ .ui_file = b.path("Qt/6.8.3/qtbase/src/printsupport/dialogs/qpagesetupwidget.ui"), .output = "ui_qpagesetupwidget.h" },
        .{ .ui_file = b.path("Qt/6.8.3/qtbase/src/printsupport/dialogs/qprintpropertieswidget.ui"), .output = "ui_qprintpropertieswidget.h" },
        .{ .ui_file = b.path("Qt/6.8.3/qtbase/src/printsupport/dialogs/qprintsettingsoutput.ui"), .output = "ui_qprintsettingsoutput.h" },
        .{ .ui_file = b.path("Qt/6.8.3/qtbase/src/printsupport/dialogs/qprintwidget.ui"), .output = "ui_qprintwidget.h" },
    });

    // ========================================================================
    // 7d. syncqt tool (executable) - standalone C++17, no Qt dependencies
    // ========================================================================

    const syncqt_mod = b.createModule(.{
        .target = target,
        .optimize = optimize,
        .link_libc = true,
    });

    syncqt_mod.linkSystemLibrary("c++", .{});

    syncqt_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/tools/syncqt"),
        .files = &.{"main.cpp"},
        .flags = &.{
            "-std=c++17",
            "-w",
            "-fexceptions",
            "-DWIN32",
            "-D_WINDOWS",
            "-DUNICODE",
            "-D_UNICODE",
            "-D_CRT_SECURE_NO_WARNINGS",
            "-DNOMINMAX",
            "-DQT_VERSION_STR=\"6.8.3\"",
            "-DQT_VERSION_MAJOR=6",
            "-DQT_VERSION_MINOR=8",
            "-DQT_VERSION_PATCH=3",
        },
    });

    const syncqt_exe = b.addExecutable(.{
        .name = "syncqt",
        .root_module = syncqt_mod,
    });
    b.installArtifact(syncqt_exe);

    // ========================================================================
    // 8. HarfBuzz (static library)
    // ========================================================================

    const harfbuzz_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    harfbuzz_mod.linkSystemLibrary("c++", .{});
    harfbuzz_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/harfbuzz-ng"),
        .files = extra.harfbuzz_sources,
        .flags = &.{ "-std=c++17", "-w", "-DHAVE_ATEXIT", "-DHAVE_CONFIG_H", "-DHB_EXTERN=", "-DHB_NDEBUG", "-DHB_NO_UNICODE_FUNCS", "-DQT_NO_VERSION_TAGGING", "-DHAVE_OT", "-DHAVE_FALLBACK", "-DHB_NO_WIN1256", "-fvisibility=hidden" },
    });
    harfbuzz_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/harfbuzz-ng/src"));
    harfbuzz_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/harfbuzz-ng/include/harfbuzz"));
    addQtCoreIncludes(harfbuzz_mod, b);
    const harfbuzz_lib = b.addLibrary(.{ .name = "qtHarfbuzz", .linkage = .static, .root_module = harfbuzz_mod });
    b.installArtifact(harfbuzz_lib);

    // ========================================================================
    // 9. FreeType (static library)
    // ========================================================================

    const freetype_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    freetype_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/freetype"),
        .files = extra.freetype_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-DFT2_BUILD_LIBRARY", "-DFT_CONFIG_OPTION_SYSTEM_ZLIB", "-DTT_CONFIG_OPTION_SUBPIXEL_HINTING", "-DFT_CONFIG_OPTION_USE_PNG", "-fvisibility=hidden" },
    });
    freetype_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/freetype/include"));
    freetype_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/zlib/src"));
    freetype_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/libpng"));
    addQtCoreIncludes(freetype_mod, b);
    const freetype_lib = b.addLibrary(.{ .name = "qtFreetype", .linkage = .static, .root_module = freetype_mod });
    b.installArtifact(freetype_lib);

    // ========================================================================
    // 10. libpng (static library)
    // ========================================================================

    const libpng_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    libpng_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/libpng"),
        .files = extra.libpng_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-DPNG_ARM_NEON_OPT=0", "-DPNG_POWERPC_VSX_OPT=0", "-DPNG_IMPEXP=", "-fvisibility=hidden" },
    });
    libpng_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/libpng"));
    libpng_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/zlib/src"));
    addQtCoreIncludes(libpng_mod, b);
    const libpng_lib = b.addLibrary(.{ .name = "qtLibpng", .linkage = .static, .root_module = libpng_mod });
    b.installArtifact(libpng_lib);

    // ========================================================================
    // 11. libjpeg (static library)
    // ========================================================================

    const libjpeg_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    libjpeg_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/libjpeg"),
        .files = extra.libjpeg_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-fvisibility=hidden" },
    });
    libjpeg_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/libjpeg/src"));
    const libjpeg_lib = b.addLibrary(.{ .name = "qtLibjpeg", .linkage = .static, .root_module = libjpeg_mod });
    b.installArtifact(libjpeg_lib);

    // ========================================================================
    // 12. Qt6Gui (static library)
    // ========================================================================

    const qt_gui_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_GUI_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DQT_QPA_DEFAULT_PLATFORM_NAME=\"windows\"",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtgui_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtgui_mod.linkSystemLibrary("c++", .{});
    qtgui_mod.linkSystemLibrary("advapi32", .{});
    qtgui_mod.linkSystemLibrary("gdi32", .{});
    qtgui_mod.linkSystemLibrary("ole32", .{});
    qtgui_mod.linkSystemLibrary("shell32", .{});
    qtgui_mod.linkSystemLibrary("user32", .{});
    qtgui_mod.linkSystemLibrary("uxtheme", .{});
    qtgui_mod.linkSystemLibrary("d3d11", .{});
    qtgui_mod.linkSystemLibrary("dxgi", .{});
    qtgui_mod.linkSystemLibrary("dxguid", .{});
    qtgui_mod.linkSystemLibrary("d3d12", .{});
    qtgui_mod.linkSystemLibrary("uuid", .{});
    qtgui_mod.linkSystemLibrary("dwrite", .{});
    qtgui_mod.linkSystemLibrary("opengl32", .{});

    // Generate MOC outputs for QtGui
    const qtgui_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtGui/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/qtbase/src/gui/kernel"),
        b.path("Qt/6.8.3/qtbase/src/gui/painting"),
        b.path("Qt/6.8.3/qtbase/src/gui/text"),
        b.path("Qt/6.8.3/qtbase/src/gui/image"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtgui_moc = generateMocOutputs(
        b, moc_exe,
        b.path("Qt/6.8.3/qtbase/src/gui"),
        moc_lists.qtgui_moc_headers,
        moc_lists.qtgui_moc_sources,
        &.{},
        moc_lists.qtgui_moc_empty,
        qtgui_moc_includes,
    );

    addQtCoreIncludes(qtgui_mod, b);
    addQtGuiIncludes(qtgui_mod, b);
    qtgui_mod.addIncludePath(qtgui_moc.include_dir);

    // QtGui common sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_common_sources, .flags = qt_gui_cxx_flags });
    // QtGui C sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_c_sources, .flags = common_c_flags });
    // QtGui Windows sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_win_sources, .flags = qt_gui_cxx_flags });
    // QtGui FreeType text engine sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_freetype_sources, .flags = qt_gui_cxx_flags });
    // QtGui OpenGL sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_opengl_sources, .flags = qt_gui_cxx_flags });
    // D3D12 Memory Allocator
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/3rdparty"), .files = &.{"D3D12MemoryAllocator/D3D12MemAlloc.cpp"}, .flags = qt_gui_cxx_flags });
    // md4c markdown parser
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/3rdparty/md4c"), .files = &.{"md4c.c"}, .flags = common_c_flags ++ &[_][]const u8{"-DMD4C_USE_UTF8"} });
    // SIMD sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_sse2_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-msse2"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_ssse3_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-mssse3"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_sse4_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-msse4.1"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/gui"), .files = extra.qtgui_avx2_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-mavx2"} });
    // RCC generated resources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("generated/rcc"), .files = &.{ "qrc_gui_shaders.cpp", "qrc_qpdf.cpp" }, .flags = qt_gui_cxx_flags });

    const qtgui_lib = b.addLibrary(.{ .name = "Qt6Gui", .linkage = .static, .root_module = qtgui_mod });
    b.installArtifact(qtgui_lib);

    // ========================================================================
    // 13. Qt6Widgets (static library)
    // ========================================================================

    const qt_widgets_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_WIDGETS_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtwidgets_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtwidgets_mod.linkSystemLibrary("c++", .{});
    qtwidgets_mod.linkSystemLibrary("dwmapi", .{});
    qtwidgets_mod.linkSystemLibrary("shell32", .{});
    qtwidgets_mod.linkSystemLibrary("uxtheme", .{});
    qtwidgets_mod.linkSystemLibrary("user32", .{});
    qtwidgets_mod.linkSystemLibrary("gdi32", .{});
    qtwidgets_mod.linkSystemLibrary("uuid", .{});

    // Generate MOC outputs for QtWidgets
    const qtwidgets_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtWidgets"),
        b.path("generated/QtWidgets/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/include/QtWidgets"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets/private"),
        b.path("Qt/6.8.3/qtbase/src/widgets/kernel"),
        b.path("Qt/6.8.3/qtbase/src/widgets/widgets"),
        b.path("Qt/6.8.3/qtbase/src/widgets/dialogs"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtwidgets_moc = generateMocOutputs(
        b, moc_exe,
        b.path("Qt/6.8.3/qtbase/src/widgets"),
        moc_lists.qtwidgets_moc_headers,
        moc_lists.qtwidgets_moc_sources,
        &.{},
        &.{},
        qtwidgets_moc_includes,
    );

    addQtCoreIncludes(qtwidgets_mod, b);
    addQtGuiIncludes(qtwidgets_mod, b);
    addQtWidgetsIncludes(qtwidgets_mod, b);
    qtwidgets_mod.addIncludePath(qtwidgets_moc.include_dir);
    qtwidgets_mod.addIncludePath(uic_output); // build-time UIC output

    qtwidgets_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/widgets"), .files = extra.qtwidgets_common_sources, .flags = qt_widgets_cxx_flags });
    qtwidgets_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/widgets"), .files = extra.qtwidgets_win_sources, .flags = qt_widgets_cxx_flags });
    // RCC generated resources for widgets
    qtwidgets_mod.addCSourceFiles(.{ .root = b.path("generated/rcc"), .files = &.{ "qrc_qmessagebox.cpp", "qrc_qstyle.cpp", "qrc_qstyle1.cpp", "qrc_qstyle_fusion.cpp" }, .flags = qt_widgets_cxx_flags });

    const qtwidgets_lib = b.addLibrary(.{ .name = "Qt6Widgets", .linkage = .static, .root_module = qtwidgets_mod });
    b.installArtifact(qtwidgets_lib);

    // ========================================================================
    // 14. Qt6Network (static library)
    // ========================================================================

    const qt_network_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_NETWORK_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtnetwork_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtnetwork_mod.linkSystemLibrary("c++", .{});
    qtnetwork_mod.linkSystemLibrary("advapi32", .{});
    qtnetwork_mod.linkSystemLibrary("dnsapi", .{});
    qtnetwork_mod.linkSystemLibrary("iphlpapi", .{});
    qtnetwork_mod.linkSystemLibrary("secur32", .{});
    qtnetwork_mod.linkSystemLibrary("winhttp", .{});
    qtnetwork_mod.linkSystemLibrary("ws2_32", .{});
    qtnetwork_mod.linkSystemLibrary("user32", .{});
    qtnetwork_mod.linkSystemLibrary("uuid", .{});

    // Generate MOC outputs for QtNetwork
    const qtnetwork_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtNetwork"),
        b.path("generated/QtNetwork/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtNetwork"),
        b.path("Qt/6.8.3/include/QtNetwork/6.8.3"),
        b.path("Qt/6.8.3/include/QtNetwork/6.8.3/QtNetwork"),
        b.path("Qt/6.8.3/include/QtNetwork/6.8.3/QtNetwork/private"),
        b.path("Qt/6.8.3/qtbase/src/network/kernel"),
        b.path("Qt/6.8.3/qtbase/src/network/access"),
        b.path("Qt/6.8.3/qtbase/src/network/socket"),
        b.path("Qt/6.8.3/qtbase/src/network/ssl"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtnetwork_moc = generateMocOutputs(
        b, moc_exe,
        b.path("Qt/6.8.3/qtbase/src/network"),
        moc_lists.qtnetwork_moc_headers,
        moc_lists.qtnetwork_moc_sources,
        &.{},
        &.{},
        qtnetwork_moc_includes,
    );

    addQtCoreIncludes(qtnetwork_mod, b);
    addQtNetworkIncludes(qtnetwork_mod, b);
    qtnetwork_mod.addIncludePath(qtnetwork_moc.include_dir);

    qtnetwork_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/network"), .files = extra.qtnetwork_common_sources, .flags = qt_network_cxx_flags });
    qtnetwork_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/network"), .files = extra.qtnetwork_win_sources, .flags = qt_network_cxx_flags });

    const qtnetwork_lib = b.addLibrary(.{ .name = "Qt6Network", .linkage = .static, .root_module = qtnetwork_mod });
    b.installArtifact(qtnetwork_lib);

    // ========================================================================
    // 15. Qt6Concurrent (static library)
    // ========================================================================

    const qtconcurrent_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtconcurrent_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtconcurrent_mod, b);
    qtconcurrent_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/concurrent"));
    qtconcurrent_mod.addIncludePath(b.path("Qt/6.8.3/include/QtConcurrent"));

    qtconcurrent_mod.addCSourceFiles(.{
        .root = b.path("Qt/6.8.3/qtbase/src/concurrent"),
        .files = extra.qtconcurrent_sources,
        .flags = qt_core_cxx_flags ++ &[_][]const u8{ "-DQT_BUILD_CONCURRENT_LIB" },
    });

    const qtconcurrent_lib = b.addLibrary(.{ .name = "Qt6Concurrent", .linkage = .static, .root_module = qtconcurrent_mod });
    b.installArtifact(qtconcurrent_lib);

    // ========================================================================
    // 16. qwindows platform plugin (static library)
    // ========================================================================

    const qwindows_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-DNOMINMAX",
        "-DQT_NO_FOREACH", "-DQT_NO_CAST_FROM_ASCII",
        "-DQT_STATIC", "-DQT_NO_DEBUG",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qwindows_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qwindows_mod.linkSystemLibrary("c++", .{});
    qwindows_mod.linkSystemLibrary("advapi32", .{});
    qwindows_mod.linkSystemLibrary("dwmapi", .{});
    qwindows_mod.linkSystemLibrary("gdi32", .{});
    qwindows_mod.linkSystemLibrary("imm32", .{});
    qwindows_mod.linkSystemLibrary("ole32", .{});
    qwindows_mod.linkSystemLibrary("oleaut32", .{});
    qwindows_mod.linkSystemLibrary("setupapi", .{});
    qwindows_mod.linkSystemLibrary("shell32", .{});
    qwindows_mod.linkSystemLibrary("shlwapi", .{});
    qwindows_mod.linkSystemLibrary("user32", .{});
    qwindows_mod.linkSystemLibrary("winmm", .{});
    qwindows_mod.linkSystemLibrary("winspool", .{});
    qwindows_mod.linkSystemLibrary("wtsapi32", .{});
    qwindows_mod.linkSystemLibrary("shcore", .{});
    qwindows_mod.linkSystemLibrary("comdlg32", .{});
    qwindows_mod.linkSystemLibrary("d3d9", .{});
    // runtimeobject only available with MSVC SDK
    qwindows_mod.linkSystemLibrary("uuid", .{});
    qwindows_mod.linkSystemLibrary("uxtheme", .{});

    // Generate MOC outputs for qwindows plugin
    const qwindows_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows"),
        b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows/uiautomation"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qwindows_moc = generateMocOutputs(
        b, moc_exe,
        b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows"),
        &.{}, // no regular headers (all standalone for qwindows)
        moc_lists.qwindows_moc_sources,
        moc_lists.qwindows_moc_standalone,
        &.{},
        qwindows_moc_includes,
    );

    addQtCoreIncludes(qwindows_mod, b);
    addQtGuiIncludes(qwindows_mod, b);
    qwindows_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows"));
    qwindows_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows/uiautomation"));
    qwindows_mod.addIncludePath(b.path("Qt/6.8.3/qtbase/src/3rdparty/wintab"));
    qwindows_mod.addIncludePath(qwindows_moc.include_dir);

    qwindows_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/plugins/platforms/windows"), .files = extra.qwindows_plugin_sources, .flags = qwindows_cxx_flags });

    // Compile standalone moc-generated files for qwindows plugin
    for (qwindows_moc.standalone_files) |moc_file| {
        qwindows_mod.addCSourceFile(.{ .file = moc_file, .flags = qwindows_cxx_flags });
    }

    const qwindows_lib = b.addLibrary(.{ .name = "qwindows", .linkage = .static, .root_module = qwindows_mod });
    b.installArtifact(qwindows_lib);

    // ========================================================================
    // 17. Qt6Xml (static library)
    // ========================================================================
    if (enable_xml) {

    const qt_xml_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_XML_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtxml_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtxml_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtxml_mod, b);
    addQtXmlIncludes(qtxml_mod, b);

    qtxml_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/xml"), .files = modules.qtxml_sources, .flags = qt_xml_cxx_flags });

    const qtxml_lib = b.addLibrary(.{ .name = "Qt6Xml", .linkage = .static, .root_module = qtxml_mod });
    b.installArtifact(qtxml_lib);
    }

    // ========================================================================
    // 18. Qt6Sql (static library)
    // ========================================================================
    if (enable_sql) {

    const qt_sql_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_SQL_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER", "-DQT_NO_CAST_FROM_ASCII",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtsql_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtsql_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtsql_mod, b);
    addQtSqlIncludes(qtsql_mod, b);

    // Generate MOC outputs for QtSql
    const qtsql_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtSql"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtSql"),
        b.path("Qt/6.8.3/include/QtSql/6.8.3"),
        b.path("Qt/6.8.3/include/QtSql/6.8.3/QtSql"),
        b.path("Qt/6.8.3/include/QtSql/6.8.3/QtSql/private"),
        b.path("Qt/6.8.3/qtbase/src/sql/kernel"),
        b.path("Qt/6.8.3/qtbase/src/sql/models"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtsql_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtbase/src/sql"), modules.qtsql_moc_headers, &.{}, &.{}, &.{}, qtsql_moc_includes);
    qtsql_mod.addIncludePath(qtsql_moc.include_dir);

    qtsql_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/sql"), .files = modules.qtsql_common_sources, .flags = qt_sql_cxx_flags });
    qtsql_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/sql"), .files = modules.qtsql_model_sources, .flags = qt_sql_cxx_flags });

    const qtsql_lib = b.addLibrary(.{ .name = "Qt6Sql", .linkage = .static, .root_module = qtsql_mod });
    b.installArtifact(qtsql_lib);
    }

    // ========================================================================
    // 19. Qt6OpenGL (static library)
    // ========================================================================
    if (enable_opengl) {

    const qt_opengl_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_OPENGL_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtopengl_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtopengl_mod.linkSystemLibrary("c++", .{});
    qtopengl_mod.linkSystemLibrary("opengl32", .{});
    addQtCoreIncludes(qtopengl_mod, b);
    addQtGuiIncludes(qtopengl_mod, b);
    addQtOpenGLIncludes(qtopengl_mod, b);
    // Generated tracepoints stub
    qtopengl_mod.addIncludePath(b.path("generated/QtOpenGL"));

    // Generate MOC outputs for QtOpenGL
    const qtopengl_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtGui/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/include/QtOpenGL"),
        b.path("Qt/6.8.3/include/QtOpenGL/6.8.3"),
        b.path("Qt/6.8.3/include/QtOpenGL/6.8.3/QtOpenGL"),
        b.path("Qt/6.8.3/include/QtOpenGL/6.8.3/QtOpenGL/private"),
        b.path("Qt/6.8.3/qtbase/src/opengl"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtopengl_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtbase/src/opengl"), modules.qtopengl_moc_headers, &.{}, &.{}, &.{}, qtopengl_moc_includes);
    qtopengl_mod.addIncludePath(qtopengl_moc.include_dir);

    qtopengl_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/opengl"), .files = modules.qtopengl_common_sources, .flags = qt_opengl_cxx_flags });
    qtopengl_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/opengl"), .files = modules.qtopengl_desktop_sources, .flags = qt_opengl_cxx_flags });

    const qtopengl_lib = b.addLibrary(.{ .name = "Qt6OpenGL", .linkage = .static, .root_module = qtopengl_mod });
    b.installArtifact(qtopengl_lib);
    }

    // ========================================================================
    // 20. Qt6PrintSupport (static library)
    // ========================================================================
    if (enable_printsupport) {

    const qt_printsupport_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_PRINTSUPPORT_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtprintsupport_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtprintsupport_mod.linkSystemLibrary("c++", .{});
    qtprintsupport_mod.linkSystemLibrary("gdi32", .{});
    qtprintsupport_mod.linkSystemLibrary("user32", .{});
    qtprintsupport_mod.linkSystemLibrary("comdlg32", .{});
    qtprintsupport_mod.linkSystemLibrary("winspool", .{});
    addQtCoreIncludes(qtprintsupport_mod, b);
    addQtGuiIncludes(qtprintsupport_mod, b);
    addQtWidgetsIncludes(qtprintsupport_mod, b);
    addQtPrintSupportIncludes(qtprintsupport_mod, b);
    qtprintsupport_mod.addIncludePath(uic_output); // build-time UIC output for print dialogs

    // Generate MOC outputs for QtPrintSupport
    const qtprintsupport_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtWidgets"),
        b.path("generated/QtPrintSupport"),
        b.path("generated/QtPrintSupport/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/include/QtWidgets"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets/private"),
        b.path("Qt/6.8.3/include/QtPrintSupport"),
        b.path("Qt/6.8.3/include/QtPrintSupport/6.8.3"),
        b.path("Qt/6.8.3/include/QtPrintSupport/6.8.3/QtPrintSupport"),
        b.path("Qt/6.8.3/include/QtPrintSupport/6.8.3/QtPrintSupport/private"),
        b.path("Qt/6.8.3/qtbase/src/printsupport/kernel"),
        b.path("Qt/6.8.3/qtbase/src/printsupport/dialogs"),
        b.path("Qt/6.8.3/qtbase/src/printsupport/widgets"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtprintsupport_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtbase/src/printsupport"), modules.qtprintsupport_moc_headers, modules.qtprintsupport_moc_sources, &.{}, &.{}, qtprintsupport_moc_includes);
    qtprintsupport_mod.addIncludePath(qtprintsupport_moc.include_dir);

    qtprintsupport_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/printsupport"), .files = modules.qtprintsupport_common_sources, .flags = qt_printsupport_cxx_flags });
    qtprintsupport_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/printsupport"), .files = modules.qtprintsupport_win_sources, .flags = qt_printsupport_cxx_flags });
    qtprintsupport_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/printsupport"), .files = modules.qtprintsupport_dialog_sources, .flags = qt_printsupport_cxx_flags });
    qtprintsupport_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtbase/src/printsupport"), .files = modules.qtprintsupport_widget_sources, .flags = qt_printsupport_cxx_flags });

    const qtprintsupport_lib = b.addLibrary(.{ .name = "Qt6PrintSupport", .linkage = .static, .root_module = qtprintsupport_mod });
    b.installArtifact(qtprintsupport_lib);
    }

    // ========================================================================
    // 21. Qt6Svg (static library)
    // ========================================================================
    if (enable_svg) {

    const qt_svg_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_SVG_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtsvg_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtsvg_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtsvg_mod, b);
    addQtGuiIncludes(qtsvg_mod, b);
    addQtSvgIncludes(qtsvg_mod, b);

    // Generate MOC outputs for QtSvg
    const qtsvg_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtSvg"),
        b.path("Qt/6.8.3/include/QtSvg/6.8.3"),
        b.path("Qt/6.8.3/include/QtSvg/6.8.3/QtSvg"),
        b.path("Qt/6.8.3/qtsvg/src/svg"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtsvg_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtsvg/src/svg"), modules.qtsvg_moc_headers, &.{}, &.{}, &.{}, qtsvg_moc_includes);
    qtsvg_mod.addIncludePath(qtsvg_moc.include_dir);

    qtsvg_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtsvg/src/svg"), .files = modules.qtsvg_sources, .flags = qt_svg_cxx_flags });

    const qtsvg_lib = b.addLibrary(.{ .name = "Qt6Svg", .linkage = .static, .root_module = qtsvg_mod });
    b.installArtifact(qtsvg_lib);

    // ========================================================================
    // 22. Qt6SvgWidgets (static library)
    // ========================================================================

    const qt_svgwidgets_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_SVGWIDGETS_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtsvgwidgets_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtsvgwidgets_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtsvgwidgets_mod, b);
    addQtGuiIncludes(qtsvgwidgets_mod, b);
    addQtWidgetsIncludes(qtsvgwidgets_mod, b);
    addQtSvgIncludes(qtsvgwidgets_mod, b);
    addQtSvgWidgetsIncludes(qtsvgwidgets_mod, b);

    // Generate MOC outputs for QtSvgWidgets
    const qtsvgwidgets_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtGui"),
        b.path("generated/QtWidgets"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtWidgets"),
        b.path("Qt/6.8.3/include/QtSvg"),
        b.path("Qt/6.8.3/include/QtSvgWidgets"),
        b.path("Qt/6.8.3/qtsvg/src/svgwidgets"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtsvgwidgets_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtsvg/src/svgwidgets"), modules.qtsvgwidgets_moc_headers, &.{}, &.{}, &.{}, qtsvgwidgets_moc_includes);
    qtsvgwidgets_mod.addIncludePath(qtsvgwidgets_moc.include_dir);

    qtsvgwidgets_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtsvg/src/svgwidgets"), .files = modules.qtsvgwidgets_sources, .flags = qt_svgwidgets_cxx_flags });

    const qtsvgwidgets_lib = b.addLibrary(.{ .name = "Qt6SvgWidgets", .linkage = .static, .root_module = qtsvgwidgets_mod });
    b.installArtifact(qtsvgwidgets_lib);
    }

    // ========================================================================
    // 23. Qt6WebChannel (static library)
    // ========================================================================
    if (enable_webchannel) {

    const qt_webchannel_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_WEBCHANNEL_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_NO_JSVALUE",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtwebchannel_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtwebchannel_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtwebchannel_mod, b);
    addQtWebChannelIncludes(qtwebchannel_mod, b);

    // Generate MOC outputs for QtWebChannel
    const qtwebchannel_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtWebChannel"),
        b.path("Qt/6.8.3/include/QtWebChannel/6.8.3"),
        b.path("Qt/6.8.3/include/QtWebChannel/6.8.3/QtWebChannel"),
        b.path("Qt/6.8.3/include/QtWebChannel/6.8.3/QtWebChannel/private"),
        b.path("Qt/6.8.3/qtwebchannel/src/webchannel"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtwebchannel_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtwebchannel/src/webchannel"), modules.qtwebchannel_moc_headers, &.{}, &.{}, &.{}, qtwebchannel_moc_includes);
    qtwebchannel_mod.addIncludePath(qtwebchannel_moc.include_dir);

    qtwebchannel_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtwebchannel/src/webchannel"), .files = modules.qtwebchannel_sources, .flags = qt_webchannel_cxx_flags });

    const qtwebchannel_lib = b.addLibrary(.{ .name = "Qt6WebChannel", .linkage = .static, .root_module = qtwebchannel_mod });
    b.installArtifact(qtwebchannel_lib);
    }

    // ========================================================================
    // 24. Qt6Charts (static library)
    // ========================================================================
    if (enable_charts) {

    const qt_charts_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_CHARTS_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtcharts_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtcharts_mod.linkSystemLibrary("c++", .{});
    qtcharts_mod.linkSystemLibrary("user32", .{});
    addQtCoreIncludes(qtcharts_mod, b);
    addQtGuiIncludes(qtcharts_mod, b);
    addQtWidgetsIncludes(qtcharts_mod, b);
    addQtChartsIncludes(qtcharts_mod, b);

    // Generate MOC outputs for QtCharts
    const qtcharts_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtWidgets"),
        b.path("generated/QtCharts"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtWidgets"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3"),
        b.path("Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets"),
        b.path("Qt/6.8.3/include/QtCharts"),
        b.path("Qt/6.8.3/include/QtCharts/6.8.3"),
        b.path("Qt/6.8.3/include/QtCharts/6.8.3/QtCharts"),
        b.path("Qt/6.8.3/include/QtCharts/6.8.3/QtCharts/private"),
        b.path("Qt/6.8.3/qtcharts/src/charts"),
        b.path("Qt/6.8.3/qtcharts/src/charts/areachart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/barcategoryaxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/categoryaxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/coloraxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/datetimeaxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/logvalueaxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/axis/valueaxis"),
        b.path("Qt/6.8.3/qtcharts/src/charts/barchart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/boxplotchart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/candlestickchart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/domain"),
        b.path("Qt/6.8.3/qtcharts/src/charts/layout"),
        b.path("Qt/6.8.3/qtcharts/src/charts/legend"),
        b.path("Qt/6.8.3/qtcharts/src/charts/linechart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/piechart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/scatterchart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/splinechart"),
        b.path("Qt/6.8.3/qtcharts/src/charts/xychart"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    // Charts MOC: all headers use -i flag (output is #include'd by source files)
    const qtcharts_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtcharts/src/charts"), charts.qtcharts_moc_headers ++ charts.qtcharts_moc_headers_private, charts.qtcharts_moc_sources, &.{}, &.{}, qtcharts_moc_includes);
    qtcharts_mod.addIncludePath(qtcharts_moc.include_dir);

    qtcharts_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtcharts/src/charts"), .files = charts.qtcharts_sources, .flags = qt_charts_cxx_flags });

    const qtcharts_lib = b.addLibrary(.{ .name = "Qt6Charts", .linkage = .static, .root_module = qtcharts_mod });
    b.installArtifact(qtcharts_lib);
    }

    // ========================================================================
    // 25. Qt6Multimedia (static library)
    // ========================================================================
    if (enable_multimedia) {

    const qt_multimedia_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_MULTIMEDIA_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtmultimedia_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtmultimedia_mod.linkSystemLibrary("c++", .{});
    qtmultimedia_mod.linkSystemLibrary("ole32", .{});
    qtmultimedia_mod.linkSystemLibrary("oleaut32", .{});
    qtmultimedia_mod.linkSystemLibrary("uuid", .{});
    qtmultimedia_mod.linkSystemLibrary("winmm", .{});
    qtmultimedia_mod.linkSystemLibrary("mf", .{});
    qtmultimedia_mod.linkSystemLibrary("mfplat", .{});
    qtmultimedia_mod.linkSystemLibrary("mfreadwrite", .{});
    qtmultimedia_mod.linkSystemLibrary("mfuuid", .{});
    qtmultimedia_mod.linkSystemLibrary("strmiids", .{});
    qtmultimedia_mod.linkSystemLibrary("wmcodecdspuuid", .{});
    addQtCoreIncludes(qtmultimedia_mod, b);
    addQtGuiIncludes(qtmultimedia_mod, b);
    addQtMultimediaIncludes(qtmultimedia_mod, b);

    // Generate MOC outputs for QtMultimedia
    const qtmultimedia_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtGui/private"),
        b.path("generated/QtMultimedia"),
        b.path("generated/QtMultimedia/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/include/QtNetwork"),
        b.path("Qt/6.8.3/include/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia/private"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/audio"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/camera"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/video"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/recording"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/playback"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/platform"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/windows"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtmultimedia_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), multimedia.qtmultimedia_moc_headers, multimedia.qtmultimedia_moc_sources, &.{}, &.{}, qtmultimedia_moc_includes);
    qtmultimedia_mod.addIncludePath(qtmultimedia_moc.include_dir);

    // Also generate MOC for Windows-specific headers
    const qtmultimedia_win_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), multimedia.qtmultimedia_win_moc_headers, &.{}, &.{}, &.{}, qtmultimedia_moc_includes);
    qtmultimedia_mod.addIncludePath(qtmultimedia_win_moc.include_dir);

    qtmultimedia_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), .files = multimedia.qtmultimedia_common_sources, .flags = qt_multimedia_cxx_flags });
    qtmultimedia_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), .files = multimedia.qtmultimedia_win_sources, .flags = qt_multimedia_cxx_flags });
    // SIMD sources
    qtmultimedia_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), .files = multimedia.qtmultimedia_simd_sse2_sources, .flags = qt_multimedia_cxx_flags ++ &[_][]const u8{"-msse2"} });
    qtmultimedia_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), .files = multimedia.qtmultimedia_simd_ssse3_sources, .flags = qt_multimedia_cxx_flags ++ &[_][]const u8{"-mssse3"} });
    qtmultimedia_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/multimedia"), .files = multimedia.qtmultimedia_simd_avx2_sources, .flags = qt_multimedia_cxx_flags ++ &[_][]const u8{"-mavx2"} });

    const qtmultimedia_lib = b.addLibrary(.{ .name = "Qt6Multimedia", .linkage = .static, .root_module = qtmultimedia_mod });
    b.installArtifact(qtmultimedia_lib);
    }

    // ========================================================================
    // 26. Qt6SpatialAudio (static library)
    // ========================================================================
    if (enable_spatialaudio) {

    const qt_spatialaudio_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_SPATIALAUDIO_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const qtspatialaudio_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtspatialaudio_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtspatialaudio_mod, b);
    addQtGuiIncludes(qtspatialaudio_mod, b);
    addQtMultimediaIncludes(qtspatialaudio_mod, b);
    addQtSpatialAudioIncludes(qtspatialaudio_mod, b);

    // Generate MOC outputs for QtSpatialAudio
    const qtspatialaudio_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtMultimedia"),
        b.path("generated/QtMultimedia/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia/private"),
        b.path("Qt/6.8.3/include/QtSpatialAudio"),
        b.path("Qt/6.8.3/include/QtSpatialAudio/6.8.3"),
        b.path("Qt/6.8.3/include/QtSpatialAudio/6.8.3/QtSpatialAudio"),
        b.path("Qt/6.8.3/qtmultimedia/src/spatialaudio"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtspatialaudio_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtmultimedia/src/spatialaudio"), multimedia.qtspatialaudio_moc_headers, multimedia.qtspatialaudio_moc_sources, &.{}, &.{}, qtspatialaudio_moc_includes);
    qtspatialaudio_mod.addIncludePath(qtspatialaudio_moc.include_dir);

    qtspatialaudio_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/spatialaudio"), .files = multimedia.qtspatialaudio_sources, .flags = qt_spatialaudio_cxx_flags });

    // Resonance Audio 3rdparty library (compiled into SpatialAudio)
    const resonance_audio_flags: []const []const u8 = &.{
        "-std=c++17", "-w",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-DNOMINMAX",
        "-D_USE_MATH_DEFINES",
        "-DEIGEN_MPL2_ONLY",
        "-DEIGEN_DONT_VECTORIZE",
        "-DEIGEN_DONT_ALIGN",
        "-DEIGEN_MAX_ALIGN_BYTES=0",
        "-DEIGEN_DONT_ALIGN_STATICALLY",
        "-DEIGEN_MAX_STATIC_ALIGN_BYTES=0",
        "-fvisibility=hidden",
        "-mno-avx512f",
    };
    qtspatialaudio_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/3rdparty/resonance-audio"), .files = multimedia.resonance_audio_sources, .flags = resonance_audio_flags });
    qtspatialaudio_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/resonance-audio"), .files = multimedia.resonance_audio_qt_sources, .flags = resonance_audio_flags });

    // Resonance Audio include paths
    qtspatialaudio_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/3rdparty/resonance-audio"));
    qtspatialaudio_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/3rdparty/resonance-audio/resonance_audio"));
    qtspatialaudio_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/3rdparty/eigen"));
    qtspatialaudio_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/3rdparty/pffft"));
    qtspatialaudio_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/resonance-audio"));

    const qtspatialaudio_lib = b.addLibrary(.{ .name = "Qt6SpatialAudio", .linkage = .static, .root_module = qtspatialaudio_mod });
    b.installArtifact(qtspatialaudio_lib);
    }

    // ========================================================================
    // 27. Qt6FFmpegMediaPlugin (static library - FFmpeg backend for Multimedia)
    // ========================================================================

    if (enable_multimedia) {
    const qt_ffmpeg_plugin_cxx_flags: []const []const u8 = &.{
        "-std=c++17", "-w", "-fdelayed-template-parsing",
        "-DWIN32", "-D_WINDOWS", "-DUNICODE", "-D_UNICODE",
        "-D_CRT_SECURE_NO_WARNINGS", "-D_CRT_NONSTDC_NO_WARNINGS",
        "-DNOMINMAX", "-D_ENABLE_EXTENDED_ALIGNED_STORAGE",
        "-DQT_NO_FOREACH", "-DQT_NO_USING_NAMESPACE",
        "-DQT_USE_NODISCARD_FILE_OPEN", "-DQT_STATIC",
        "-DQT_BUILD_MULTIMEDIA_LIB", "-DQT_NO_DEBUG",
        "-DQT_USE_QSTRINGBUILDER",
        "-DQT_FEATURE_cpp_winrt=-1",
        "-DPCRE2_STATIC", "-DPCRE2_CODE_UNIT_WIDTH=16",
    };

    const ffmpeg_dep = b.dependency("ffmpeg", .{
        .target = target,
        .optimize = optimize,
    });
    const ffmpeg_lib = ffmpeg_dep.artifact("ffmpeg");

    const qtffmpeg_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtffmpeg_mod.linkSystemLibrary("c++", .{});
    qtffmpeg_mod.linkSystemLibrary("ole32", .{});
    qtffmpeg_mod.linkSystemLibrary("oleaut32", .{});
    qtffmpeg_mod.linkSystemLibrary("uuid", .{});
    qtffmpeg_mod.linkSystemLibrary("mf", .{});
    qtffmpeg_mod.linkSystemLibrary("mfplat", .{});
    qtffmpeg_mod.linkSystemLibrary("mfreadwrite", .{});
    qtffmpeg_mod.linkSystemLibrary("mfuuid", .{});
    qtffmpeg_mod.linkSystemLibrary("strmiids", .{});
    qtffmpeg_mod.linkSystemLibrary("d3d11", .{});
    qtffmpeg_mod.linkSystemLibrary("dxgi", .{});
    qtffmpeg_mod.linkSystemLibrary("dxguid", .{});
    qtffmpeg_mod.linkSystemLibrary("dwmapi", .{});
    qtffmpeg_mod.linkSystemLibrary("dxva2", .{});
    qtffmpeg_mod.linkSystemLibrary("user32", .{});
    qtffmpeg_mod.linkSystemLibrary("gdi32", .{});

    addQtCoreIncludes(qtffmpeg_mod, b);
    addQtGuiIncludes(qtffmpeg_mod, b);
    addQtMultimediaIncludes(qtffmpeg_mod, b);
    // FFmpeg headers
    qtffmpeg_mod.linkLibrary(ffmpeg_lib);
    // Windows sibling plugin include
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/windows"));
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"));
    // QtFFmpegMediaPluginImpl forwarding headers
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/include/QtFFmpegMediaPluginImpl"));
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/include/QtFFmpegMediaPluginImpl/6.8.3"));
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/include/QtFFmpegMediaPluginImpl/6.8.3/QtFFmpegMediaPluginImpl"));
    qtffmpeg_mod.addIncludePath(b.path("Qt/6.8.3/include/QtFFmpegMediaPluginImpl/6.8.3/QtFFmpegMediaPluginImpl/private"));

    // Generate MOC outputs for FFmpeg plugin
    const qtffmpeg_moc_includes: []const std.Build.LazyPath = &.{
        b.path("generated/QtCore"),
        b.path("generated/QtCore/private"),
        b.path("generated/QtGui"),
        b.path("generated/QtGui/private"),
        b.path("generated/QtMultimedia"),
        b.path("generated/QtMultimedia/private"),
        b.path("Qt/6.8.3/include"),
        b.path("Qt/6.8.3/include/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore"),
        b.path("Qt/6.8.3/include/QtCore/6.8.3/QtCore/private"),
        b.path("Qt/6.8.3/include/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui"),
        b.path("Qt/6.8.3/include/QtGui/6.8.3/QtGui/private"),
        b.path("Qt/6.8.3/include/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia"),
        b.path("Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia/private"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/audio"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/video"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/platform"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/recording"),
        b.path("Qt/6.8.3/qtmultimedia/src/multimedia/playback"),
        b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"),
        b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/windows"),
        b.path("Qt/6.8.3/qtbase/mkspecs/win32-g++"),
    };
    const qtffmpeg_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"), multimedia.qtmultimedia_ffmpeg_common_moc_headers, multimedia.qtmultimedia_ffmpeg_moc_sources, &.{}, &.{}, qtffmpeg_moc_includes);
    qtffmpeg_mod.addIncludePath(qtffmpeg_moc.include_dir);

    // Windows-specific MOC
    const qtffmpeg_win_moc = generateMocOutputs(b, moc_exe, b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"), multimedia.qtmultimedia_ffmpeg_win_moc_headers, &.{}, &.{}, &.{}, qtffmpeg_moc_includes);
    qtffmpeg_mod.addIncludePath(qtffmpeg_win_moc.include_dir);

    qtffmpeg_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"), .files = multimedia.qtmultimedia_ffmpeg_common_sources, .flags = qt_ffmpeg_plugin_cxx_flags });
    qtffmpeg_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/ffmpeg"), .files = multimedia.qtmultimedia_ffmpeg_win_sources, .flags = qt_ffmpeg_plugin_cxx_flags });
    qtffmpeg_mod.addCSourceFiles(.{ .root = b.path("Qt/6.8.3/qtmultimedia/src/plugins/multimedia/windows"), .files = multimedia.qtmultimedia_ffmpeg_win_sibling_sources, .flags = qt_ffmpeg_plugin_cxx_flags });

    const qtffmpeg_lib = b.addLibrary(.{ .name = "Qt6FFmpegMediaPlugin", .linkage = .static, .root_module = qtffmpeg_mod });
    b.installArtifact(qtffmpeg_lib);
    }
}

// ============================================================================
// Helper: Generate MOC outputs by running moc.exe on headers
// ============================================================================

const MocOutput = struct {
    /// Directory containing all generated moc_*.cpp and *.moc files.
    /// Add this as an include path for the module.
    include_dir: std.Build.LazyPath,
    /// Standalone moc_*.cpp files that need compilation as separate TUs.
    standalone_files: []const std.Build.LazyPath,
};

fn generateMocOutputs(
    b: *std.Build,
    moc_exe_compile: *std.Build.Step.Compile,
    source_root: std.Build.LazyPath,
    moc_headers: []const []const u8,
    moc_sources: []const []const u8,
    standalone_headers: []const []const u8,
    empty_stubs: []const []const u8,
    moc_include_paths: []const std.Build.LazyPath,
) MocOutput {
    const wf = b.addWriteFiles();
    var standalone_list: std.ArrayListUnmanaged(std.Build.LazyPath) = .{};

    // Platform defines so Qt headers derive Q_OS_WIN correctly
    const platform_defines: []const []const u8 = &.{
        "-DWIN32", "-D_WIN32", "-DWIN64", "-D_WIN64",
        "-DUNICODE", "-D_UNICODE", "-DNOMINMAX",
        "-DQT_STATIC", "-DQT_NO_DEBUG",
    };

    // Process regular headers -> moc_*.cpp (will be #include'd by source files)
    for (moc_headers) |header_rel_path| {
        const stem = std.fs.path.stem(header_rel_path);
        const output_name = b.fmt("moc_{s}.cpp", .{stem});

        const run = b.addRunArtifact(moc_exe_compile);
        run.addArg("-i"); // suppress #include in output (source files already include the header)
        for (platform_defines) |def| {
            run.addArg(def);
        }
        for (moc_include_paths) |inc_path| {
            run.addPrefixedDirectoryArg("-I", inc_path);
        }
        run.addFileArg(source_root.path(b, header_rel_path));
        run.addArg("-o");
        const output = run.addOutputFileArg(output_name);
        _ = wf.addCopyFile(output, output_name);
    }

    // Process .cpp sources -> *.moc files (included within the source files)
    for (moc_sources) |source_rel_path| {
        const stem = std.fs.path.stem(source_rel_path);
        const output_name = b.fmt("{s}.moc", .{stem});

        const run = b.addRunArtifact(moc_exe_compile);
        run.addArg("-i");
        for (platform_defines) |def| {
            run.addArg(def);
        }
        for (moc_include_paths) |inc_path| {
            run.addPrefixedDirectoryArg("-I", inc_path);
        }
        run.addFileArg(source_root.path(b, source_rel_path));
        run.addArg("-o");
        const output = run.addOutputFileArg(output_name);
        _ = wf.addCopyFile(output, output_name);
    }

    // Process standalone headers -> moc_*.cpp (compiled as separate TUs, need #include)
    for (standalone_headers) |header_rel_path| {
        const stem = std.fs.path.stem(header_rel_path);
        const output_name = b.fmt("moc_{s}.cpp", .{stem});

        const run = b.addRunArtifact(moc_exe_compile);
        // No -i flag: standalone files need #include to compile independently
        for (platform_defines) |def| {
            run.addArg(def);
        }
        for (moc_include_paths) |inc_path| {
            run.addPrefixedDirectoryArg("-I", inc_path);
        }
        run.addFileArg(source_root.path(b, header_rel_path));
        run.addArg("-o");
        const output = run.addOutputFileArg(output_name);
        _ = wf.addCopyFile(output, output_name);
        standalone_list.append(b.allocator, output) catch @panic("OOM");
    }

    // Create empty stub files (e.g., moc_qopenglcontext.cpp when OpenGL is disabled)
    for (empty_stubs) |stub_name| {
        _ = wf.add(stub_name, "");
    }

    return .{
        .include_dir = wf.getDirectory(),
        .standalone_files = standalone_list.toOwnedSlice(b.allocator) catch @panic("OOM"),
    };
}

// ============================================================================
// Helper: Generate UIC outputs by running uic.exe on .ui files
// ============================================================================

const UicInput = struct {
    ui_file: std.Build.LazyPath,
    output: []const u8,
};

fn generateUicOutputs(
    b: *std.Build,
    uic_exe_compile: *std.Build.Step.Compile,
    ui_files: []const UicInput,
) std.Build.LazyPath {
    const wf = b.addWriteFiles();

    for (ui_files) |entry| {
        const run = b.addRunArtifact(uic_exe_compile);
        run.addFileArg(entry.ui_file);
        run.addArg("-o");
        const output = run.addOutputFileArg(entry.output);
        _ = wf.addCopyFile(output, entry.output);
    }

    return wf.getDirectory();
}

// ============================================================================
// Helper: Add all QtCore include paths
// ============================================================================

fn addQtCoreIncludes(mod: *std.Build.Module, b: *std.Build) void {
    // Generated config headers take precedence
    mod.addIncludePath(b.path("generated/QtCore"));
    mod.addIncludePath(b.path("generated/QtCore/private"));
    mod.addIncludePath(b.path("generated"));

    // QtCore source directories
    const corelib_inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/corelib",
        "Qt/6.8.3/qtbase/src/corelib/global",
        "Qt/6.8.3/qtbase/src/corelib/animation",
        "Qt/6.8.3/qtbase/src/corelib/compat",
        "Qt/6.8.3/qtbase/src/corelib/io",
        "Qt/6.8.3/qtbase/src/corelib/ipc",
        "Qt/6.8.3/qtbase/src/corelib/itemmodels",
        "Qt/6.8.3/qtbase/src/corelib/kernel",
        "Qt/6.8.3/qtbase/src/corelib/mimetypes",
        "Qt/6.8.3/qtbase/src/corelib/platform",
        "Qt/6.8.3/qtbase/src/corelib/platform/windows",
        "Qt/6.8.3/qtbase/src/corelib/plugin",
        "Qt/6.8.3/qtbase/src/corelib/serialization",
        "Qt/6.8.3/qtbase/src/corelib/text",
        "Qt/6.8.3/qtbase/src/corelib/thread",
        "Qt/6.8.3/qtbase/src/corelib/time",
        "Qt/6.8.3/qtbase/src/corelib/tools",
        "Qt/6.8.3/qtbase/src/corelib/tracing",
        // 3rd party include paths
        "Qt/6.8.3/qtbase/src/3rdparty/tinycbor/src",
        "Qt/6.8.3/qtbase/src/3rdparty/double-conversion",
        "Qt/6.8.3/qtbase/src/3rdparty/double-conversion/double-conversion",
        "Qt/6.8.3/qtbase/src/3rdparty/pcre2/src",
        "Qt/6.8.3/qtbase/src/3rdparty/zlib/src",
        "Qt/6.8.3/qtbase/src/3rdparty/sha1",
        "Qt/6.8.3/qtbase/src/3rdparty/md5",
        "Qt/6.8.3/qtbase/src/3rdparty/md4",
        "Qt/6.8.3/qtbase/src/3rdparty/blake2",
        "Qt/6.8.3/qtbase/src/3rdparty/sha3",
        "Qt/6.8.3/qtbase/src/3rdparty/rfc6234",
        "Qt/6.8.3/qtbase/src/3rdparty/siphash",
        "Qt/6.8.3/qtbase/src/3rdparty/easing",
        "Qt/6.8.3/qtbase/src/3rdparty/forkfd",
        // Qt includes (module-level) - uses syncqt-generated forwarding headers
        "Qt/6.8.3/include",
        "Qt/6.8.3/include/QtCore",
        "Qt/6.8.3/include/QtCore/6.8.3",
        "Qt/6.8.3/include/QtCore/6.8.3/QtCore",
        "Qt/6.8.3/include/QtCore/6.8.3/QtCore/private",
        // mkspecs
        "Qt/6.8.3/qtbase/mkspecs/win32-g++",
    };

    for (corelib_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtGuiIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtGui"));
    mod.addIncludePath(b.path("generated/QtGui/private"));
    const gui_inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/gui",
        "Qt/6.8.3/qtbase/src/gui/accessible",
        "Qt/6.8.3/qtbase/src/gui/animation",
        "Qt/6.8.3/qtbase/src/gui/image",
        "Qt/6.8.3/qtbase/src/gui/itemmodels",
        "Qt/6.8.3/qtbase/src/gui/kernel",
        "Qt/6.8.3/qtbase/src/gui/math3d",
        "Qt/6.8.3/qtbase/src/gui/opengl",
        "Qt/6.8.3/qtbase/src/gui/painting",
        "Qt/6.8.3/qtbase/src/gui/platform",
        "Qt/6.8.3/qtbase/src/gui/platform/windows",
        "Qt/6.8.3/qtbase/src/gui/rhi",
        "Qt/6.8.3/qtbase/src/gui/text",
        "Qt/6.8.3/qtbase/src/gui/text/freetype",
        "Qt/6.8.3/qtbase/src/gui/text/windows",
        "Qt/6.8.3/qtbase/src/gui/util",
        "Qt/6.8.3/qtbase/src/gui/vulkan",
        "Qt/6.8.3/qtbase/src/3rdparty/harfbuzz-ng/include/harfbuzz",
        "Qt/6.8.3/qtbase/src/3rdparty/freetype/include",
        "Qt/6.8.3/qtbase/src/3rdparty/freetype/include/freetype",
        "Qt/6.8.3/qtbase/src/3rdparty/libpng",
        "Qt/6.8.3/qtbase/src/3rdparty/libjpeg/src",
        "Qt/6.8.3/qtbase/src/3rdparty/md4c",
        "Qt/6.8.3/qtbase/src/3rdparty/D3D12MemoryAllocator",
        "Qt/6.8.3/qtbase/src/3rdparty/VulkanMemoryAllocator",
        "Qt/6.8.3/include/QtGui",
        "Qt/6.8.3/include/QtGui/6.8.3",
        "Qt/6.8.3/include/QtGui/6.8.3/QtGui",
        "Qt/6.8.3/include/QtGui/6.8.3/QtGui/private",
    };
    for (gui_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtWidgetsIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtWidgets"));
    mod.addIncludePath(b.path("generated/QtWidgets/private"));
    const widgets_inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/widgets",
        "Qt/6.8.3/qtbase/src/widgets/accessible",
        "Qt/6.8.3/qtbase/src/widgets/dialogs",
        "Qt/6.8.3/qtbase/src/widgets/effects",
        "Qt/6.8.3/qtbase/src/widgets/graphicsview",
        "Qt/6.8.3/qtbase/src/widgets/itemviews",
        "Qt/6.8.3/qtbase/src/widgets/kernel",
        "Qt/6.8.3/qtbase/src/widgets/styles",
        "Qt/6.8.3/qtbase/src/widgets/util",
        "Qt/6.8.3/qtbase/src/widgets/widgets",
        "Qt/6.8.3/include/QtWidgets",
        "Qt/6.8.3/include/QtWidgets/6.8.3",
        "Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets",
        "Qt/6.8.3/include/QtWidgets/6.8.3/QtWidgets/private",
    };
    for (widgets_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtNetworkIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtNetwork"));
    mod.addIncludePath(b.path("generated/QtNetwork/private"));
    const network_inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/network",
        "Qt/6.8.3/qtbase/src/network/access",
        "Qt/6.8.3/qtbase/src/network/kernel",
        "Qt/6.8.3/qtbase/src/network/socket",
        "Qt/6.8.3/qtbase/src/network/ssl",
        "Qt/6.8.3/include/QtNetwork",
        "Qt/6.8.3/include/QtNetwork/6.8.3",
        "Qt/6.8.3/include/QtNetwork/6.8.3/QtNetwork",
        "Qt/6.8.3/include/QtNetwork/6.8.3/QtNetwork/private",
    };
    for (network_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtXmlIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtXml"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/xml",
        "Qt/6.8.3/qtbase/src/xml/dom",
        "Qt/6.8.3/include/QtXml",
        "Qt/6.8.3/include/QtXml/6.8.3",
        "Qt/6.8.3/include/QtXml/6.8.3/QtXml",
        "Qt/6.8.3/include/QtXml/6.8.3/QtXml/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtSqlIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtSql"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/sql",
        "Qt/6.8.3/qtbase/src/sql/kernel",
        "Qt/6.8.3/qtbase/src/sql/models",
        "Qt/6.8.3/include/QtSql",
        "Qt/6.8.3/include/QtSql/6.8.3",
        "Qt/6.8.3/include/QtSql/6.8.3/QtSql",
        "Qt/6.8.3/include/QtSql/6.8.3/QtSql/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtOpenGLIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtOpenGL"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/opengl",
        "Qt/6.8.3/include/QtOpenGL",
        "Qt/6.8.3/include/QtOpenGL/6.8.3",
        "Qt/6.8.3/include/QtOpenGL/6.8.3/QtOpenGL",
        "Qt/6.8.3/include/QtOpenGL/6.8.3/QtOpenGL/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtPrintSupportIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtPrintSupport"));
    mod.addIncludePath(b.path("generated/QtPrintSupport/private"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtbase/src/printsupport",
        "Qt/6.8.3/qtbase/src/printsupport/kernel",
        "Qt/6.8.3/qtbase/src/printsupport/dialogs",
        "Qt/6.8.3/qtbase/src/printsupport/widgets",
        "Qt/6.8.3/qtbase/src/printsupport/platform/windows",
        "Qt/6.8.3/include/QtPrintSupport",
        "Qt/6.8.3/include/QtPrintSupport/6.8.3",
        "Qt/6.8.3/include/QtPrintSupport/6.8.3/QtPrintSupport",
        "Qt/6.8.3/include/QtPrintSupport/6.8.3/QtPrintSupport/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtSvgIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtSvg"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtsvg/src/svg",
        "Qt/6.8.3/include/QtSvg",
        "Qt/6.8.3/include/QtSvg/6.8.3",
        "Qt/6.8.3/include/QtSvg/6.8.3/QtSvg",
        "Qt/6.8.3/include/QtSvg/6.8.3/QtSvg/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtSvgWidgetsIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtSvgWidgets"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtsvg/src/svgwidgets",
        "Qt/6.8.3/include/QtSvgWidgets",
        "Qt/6.8.3/include/QtSvgWidgets/6.8.3",
        "Qt/6.8.3/include/QtSvgWidgets/6.8.3/QtSvgWidgets",
        "Qt/6.8.3/include/QtSvgWidgets/6.8.3/QtSvgWidgets/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtWebChannelIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtWebChannel"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtwebchannel/src/webchannel",
        "Qt/6.8.3/include/QtWebChannel",
        "Qt/6.8.3/include/QtWebChannel/6.8.3",
        "Qt/6.8.3/include/QtWebChannel/6.8.3/QtWebChannel",
        "Qt/6.8.3/include/QtWebChannel/6.8.3/QtWebChannel/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtChartsIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtCharts"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtcharts/src/charts",
        "Qt/6.8.3/qtcharts/src/charts/animations",
        "Qt/6.8.3/qtcharts/src/charts/areachart",
        "Qt/6.8.3/qtcharts/src/charts/axis",
        "Qt/6.8.3/qtcharts/src/charts/barchart",
        "Qt/6.8.3/qtcharts/src/charts/boxplotchart",
        "Qt/6.8.3/qtcharts/src/charts/candlestickchart",
        "Qt/6.8.3/qtcharts/src/charts/domain",
        "Qt/6.8.3/qtcharts/src/charts/layout",
        "Qt/6.8.3/qtcharts/src/charts/legend",
        "Qt/6.8.3/qtcharts/src/charts/linechart",
        "Qt/6.8.3/qtcharts/src/charts/piechart",
        "Qt/6.8.3/qtcharts/src/charts/scatterchart",
        "Qt/6.8.3/qtcharts/src/charts/splinechart",
        "Qt/6.8.3/qtcharts/src/charts/themes",
        "Qt/6.8.3/qtcharts/src/charts/xychart",
        "Qt/6.8.3/include/QtCharts",
        "Qt/6.8.3/include/QtCharts/6.8.3",
        "Qt/6.8.3/include/QtCharts/6.8.3/QtCharts",
        "Qt/6.8.3/include/QtCharts/6.8.3/QtCharts/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtMultimediaIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtMultimedia"));
    mod.addIncludePath(b.path("generated/QtMultimedia/private"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtmultimedia/src/multimedia",
        "Qt/6.8.3/qtmultimedia/src/multimedia/audio",
        "Qt/6.8.3/qtmultimedia/src/multimedia/camera",
        "Qt/6.8.3/qtmultimedia/src/multimedia/platform",
        "Qt/6.8.3/qtmultimedia/src/multimedia/playback",
        "Qt/6.8.3/qtmultimedia/src/multimedia/recording",
        "Qt/6.8.3/qtmultimedia/src/multimedia/video",
        "Qt/6.8.3/qtmultimedia/src/multimedia/windows",
        "Qt/6.8.3/include/QtMultimedia",
        "Qt/6.8.3/include/QtMultimedia/6.8.3",
        "Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia",
        "Qt/6.8.3/include/QtMultimedia/6.8.3/QtMultimedia/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtSpatialAudioIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtSpatialAudio"));
    const inc_paths = [_][]const u8{
        "Qt/6.8.3/qtmultimedia/src/spatialaudio",
        "Qt/6.8.3/include/QtSpatialAudio",
        "Qt/6.8.3/include/QtSpatialAudio/6.8.3",
        "Qt/6.8.3/include/QtSpatialAudio/6.8.3/QtSpatialAudio",
        "Qt/6.8.3/include/QtSpatialAudio/6.8.3/QtSpatialAudio/private",
    };
    for (inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}
