const std = @import("std");
const sources = @import("source_lists.zig");
const extra = @import("source_lists_extra.zig");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

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
        .root = b.path("qtbase/src/3rdparty/zlib"),
        .files = sources.zlib_sources,
        .flags = common_c_flags,
    });

    zlib_mod.addIncludePath(b.path("qtbase/src/3rdparty/zlib/src"));
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
        .root = b.path("qtbase/src/3rdparty/pcre2"),
        .files = sources.pcre2_sources,
        .flags = common_c_flags ++ &[_][]const u8{
            "-DHAVE_CONFIG_H",
            "-DPCRE2_CODE_UNIT_WIDTH=16",
            "-DPCRE2_STATIC",
            "-DPCRE2_DISABLE_JIT",
        },
    });

    pcre2_mod.addIncludePath(b.path("qtbase/src/3rdparty/pcre2/src"));

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
        .root = b.path("qtbase/src/3rdparty/double-conversion"),
        .files = sources.double_conversion_sources,
        .flags = &.{
            "-std=c++17",
            "-w",
            "-D_CRT_SECURE_NO_WARNINGS",
        },
    });

    dblconv_mod.addIncludePath(b.path("qtbase/src/3rdparty/double-conversion"));
    dblconv_mod.addIncludePath(b.path("qtbase/src/3rdparty/double-conversion/double-conversion"));

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
        .root = b.path("qtbase/src/corelib"),
        .files = sources.bootstrap_core_sources,
        .flags = bootstrap_flags,
    });

    // Bootstrap Windows-specific sources
    bootstrap_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/corelib"),
        .files = sources.bootstrap_win_sources,
        .flags = bootstrap_flags,
    });

    // Bootstrap also compiles embedded PCRE2 sources
    bootstrap_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/pcre2"),
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
    // 5. Full QtCore (static library - with MOC outputs)
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
    // MOC output directory (for #include "moc_xxx.cpp" in source files)
    qtcore_mod.addIncludePath(b.path("generated/moc/include"));

    // Full QtCore sources (common/cross-platform)
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/corelib"),
        .files = sources.qtcore_common_sources,
        .flags = qt_core_cxx_flags,
    });

    // QtCore Windows-specific sources
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/corelib"),
        .files = sources.qtcore_win_sources,
        .flags = qt_core_cxx_flags,
    });

    // double-conversion (embedded in QtCore)
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/double-conversion"),
        .files = sources.double_conversion_sources,
        .flags = &.{
            "-std=c++17",
            "-w",
            "-D_CRT_SECURE_NO_WARNINGS",
        },
    });

    // Embedded 3rd party hash algorithms
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty"),
        .files = sources.hash_3rdparty_sources,
        .flags = common_c_flags ++ &[_][]const u8{
            "-Wno-implicit-function-declaration",
        },
    });

    // MOC standalone compilation (only moc_qnamespace - others are #include'd from source files)
    qtcore_mod.addCSourceFiles(.{
        .root = b.path("generated/moc"),
        .files = &.{"moc_qnamespace.cpp"},
        .flags = qt_core_cxx_flags,
    });

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
    // 6. MOC tool (executable - links Bootstrap)
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
    moc_mod.addIncludePath(b.path("qtbase/src/tools/moc"));
    moc_mod.addIncludePath(b.path("qtbase/src/tools/shared"));
    moc_mod.addIncludePath(b.path("qtbase/src/3rdparty/tinycbor/src"));

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
        .root = b.path("qtbase/src/tools/moc"),
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
    rcc_mod.addIncludePath(b.path("qtbase/src/tools/rcc"));

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
        .root = b.path("qtbase/src/tools/rcc"),
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
    // 8. HarfBuzz (static library)
    // ========================================================================

    const harfbuzz_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    harfbuzz_mod.linkSystemLibrary("c++", .{});
    harfbuzz_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/harfbuzz-ng"),
        .files = extra.harfbuzz_sources,
        .flags = &.{ "-std=c++17", "-w", "-DHAVE_ATEXIT", "-DHAVE_CONFIG_H", "-DHB_EXTERN=", "-DHB_NDEBUG", "-DHB_NO_UNICODE_FUNCS", "-DQT_NO_VERSION_TAGGING", "-DHAVE_OT", "-DHAVE_FALLBACK", "-DHB_NO_WIN1256", "-fvisibility=hidden" },
    });
    harfbuzz_mod.addIncludePath(b.path("qtbase/src/3rdparty/harfbuzz-ng/src"));
    harfbuzz_mod.addIncludePath(b.path("qtbase/src/3rdparty/harfbuzz-ng/include/harfbuzz"));
    addQtCoreIncludes(harfbuzz_mod, b);
    const harfbuzz_lib = b.addLibrary(.{ .name = "qtHarfbuzz", .linkage = .static, .root_module = harfbuzz_mod });
    b.installArtifact(harfbuzz_lib);

    // ========================================================================
    // 9. FreeType (static library)
    // ========================================================================

    const freetype_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    freetype_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/freetype"),
        .files = extra.freetype_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-DFT2_BUILD_LIBRARY", "-DFT_CONFIG_OPTION_SYSTEM_ZLIB", "-DTT_CONFIG_OPTION_SUBPIXEL_HINTING", "-DFT_CONFIG_OPTION_USE_PNG", "-fvisibility=hidden" },
    });
    freetype_mod.addIncludePath(b.path("qtbase/src/3rdparty/freetype/include"));
    freetype_mod.addIncludePath(b.path("qtbase/src/3rdparty/zlib/src"));
    freetype_mod.addIncludePath(b.path("qtbase/src/3rdparty/libpng"));
    addQtCoreIncludes(freetype_mod, b);
    const freetype_lib = b.addLibrary(.{ .name = "qtFreetype", .linkage = .static, .root_module = freetype_mod });
    b.installArtifact(freetype_lib);

    // ========================================================================
    // 10. libpng (static library)
    // ========================================================================

    const libpng_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    libpng_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/libpng"),
        .files = extra.libpng_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-DPNG_ARM_NEON_OPT=0", "-DPNG_POWERPC_VSX_OPT=0", "-DPNG_IMPEXP=", "-fvisibility=hidden" },
    });
    libpng_mod.addIncludePath(b.path("qtbase/src/3rdparty/libpng"));
    libpng_mod.addIncludePath(b.path("qtbase/src/3rdparty/zlib/src"));
    addQtCoreIncludes(libpng_mod, b);
    const libpng_lib = b.addLibrary(.{ .name = "qtLibpng", .linkage = .static, .root_module = libpng_mod });
    b.installArtifact(libpng_lib);

    // ========================================================================
    // 11. libjpeg (static library)
    // ========================================================================

    const libjpeg_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    libjpeg_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/3rdparty/libjpeg"),
        .files = extra.libjpeg_sources,
        .flags = common_c_flags ++ &[_][]const u8{ "-fvisibility=hidden" },
    });
    libjpeg_mod.addIncludePath(b.path("qtbase/src/3rdparty/libjpeg/src"));
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

    addQtCoreIncludes(qtgui_mod, b);
    addQtGuiIncludes(qtgui_mod, b);
    qtgui_mod.addIncludePath(b.path("generated/moc_gui/include"));

    // QtGui common sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_common_sources, .flags = qt_gui_cxx_flags });
    // QtGui C sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_c_sources, .flags = common_c_flags });
    // QtGui Windows sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_win_sources, .flags = qt_gui_cxx_flags });
    // D3D12 Memory Allocator
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/3rdparty"), .files = &.{"D3D12MemoryAllocator/D3D12MemAlloc.cpp"}, .flags = qt_gui_cxx_flags });
    // md4c markdown parser
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/3rdparty/md4c"), .files = &.{"md4c.c"}, .flags = common_c_flags ++ &[_][]const u8{"-DMD4C_USE_UTF8"} });
    // SIMD sources
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_sse2_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-msse2"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_ssse3_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-mssse3"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_sse4_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-msse4.1"} });
    qtgui_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/gui"), .files = extra.qtgui_avx2_sources, .flags = qt_gui_cxx_flags ++ &[_][]const u8{"-mavx2"} });
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

    addQtCoreIncludes(qtwidgets_mod, b);
    addQtGuiIncludes(qtwidgets_mod, b);
    addQtWidgetsIncludes(qtwidgets_mod, b);
    qtwidgets_mod.addIncludePath(b.path("generated/moc_widgets/include"));

    qtwidgets_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/widgets"), .files = extra.qtwidgets_common_sources, .flags = qt_widgets_cxx_flags });
    qtwidgets_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/widgets"), .files = extra.qtwidgets_win_sources, .flags = qt_widgets_cxx_flags });
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

    addQtCoreIncludes(qtnetwork_mod, b);
    addQtNetworkIncludes(qtnetwork_mod, b);
    qtnetwork_mod.addIncludePath(b.path("generated/moc_network/include"));

    qtnetwork_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/network"), .files = extra.qtnetwork_common_sources, .flags = qt_network_cxx_flags });
    qtnetwork_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/network"), .files = extra.qtnetwork_win_sources, .flags = qt_network_cxx_flags });

    const qtnetwork_lib = b.addLibrary(.{ .name = "Qt6Network", .linkage = .static, .root_module = qtnetwork_mod });
    b.installArtifact(qtnetwork_lib);

    // ========================================================================
    // 15. Qt6Concurrent (static library)
    // ========================================================================

    const qtconcurrent_mod = b.createModule(.{ .target = target, .optimize = optimize, .link_libc = true });
    qtconcurrent_mod.linkSystemLibrary("c++", .{});
    addQtCoreIncludes(qtconcurrent_mod, b);
    qtconcurrent_mod.addIncludePath(b.path("qtbase/src/concurrent"));
    qtconcurrent_mod.addIncludePath(b.path("qt_include/QtConcurrent"));

    qtconcurrent_mod.addCSourceFiles(.{
        .root = b.path("qtbase/src/concurrent"),
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

    addQtCoreIncludes(qwindows_mod, b);
    addQtGuiIncludes(qwindows_mod, b);
    qwindows_mod.addIncludePath(b.path("qtbase/src/plugins/platforms/windows"));
    qwindows_mod.addIncludePath(b.path("qtbase/src/plugins/platforms/windows/uiautomation"));
    qwindows_mod.addIncludePath(b.path("qtbase/src/3rdparty/wintab"));
    qwindows_mod.addIncludePath(b.path("generated/moc_qwindows/include"));

    qwindows_mod.addCSourceFiles(.{ .root = b.path("qtbase/src/plugins/platforms/windows"), .files = extra.qwindows_plugin_sources, .flags = qwindows_cxx_flags });

    const qwindows_lib = b.addLibrary(.{ .name = "qwindows", .linkage = .static, .root_module = qwindows_mod });
    b.installArtifact(qwindows_lib);
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
        "qtbase/src/corelib",
        "qtbase/src/corelib/global",
        "qtbase/src/corelib/animation",
        "qtbase/src/corelib/compat",
        "qtbase/src/corelib/io",
        "qtbase/src/corelib/ipc",
        "qtbase/src/corelib/itemmodels",
        "qtbase/src/corelib/kernel",
        "qtbase/src/corelib/mimetypes",
        "qtbase/src/corelib/platform",
        "qtbase/src/corelib/platform/windows",
        "qtbase/src/corelib/plugin",
        "qtbase/src/corelib/serialization",
        "qtbase/src/corelib/text",
        "qtbase/src/corelib/thread",
        "qtbase/src/corelib/time",
        "qtbase/src/corelib/tools",
        "qtbase/src/corelib/tracing",
        // 3rd party include paths
        "qtbase/src/3rdparty/tinycbor/src",
        "qtbase/src/3rdparty/double-conversion",
        "qtbase/src/3rdparty/double-conversion/double-conversion",
        "qtbase/src/3rdparty/pcre2/src",
        "qtbase/src/3rdparty/zlib/src",
        "qtbase/src/3rdparty/sha1",
        "qtbase/src/3rdparty/md5",
        "qtbase/src/3rdparty/md4",
        "qtbase/src/3rdparty/blake2",
        "qtbase/src/3rdparty/sha3",
        "qtbase/src/3rdparty/rfc6234",
        "qtbase/src/3rdparty/siphash",
        "qtbase/src/3rdparty/easing",
        "qtbase/src/3rdparty/forkfd",
        // Qt includes (module-level) - uses syncqt-generated forwarding headers
        "qt_include",
        "qt_include/QtCore",
        "qt_include/QtCore/6.8.3",
        "qt_include/QtCore/6.8.3/QtCore",
        "qt_include/QtCore/6.8.3/QtCore/private",
        // mkspecs
        "qtbase/mkspecs/win32-g++",
    };

    for (corelib_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtGuiIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtGui"));
    mod.addIncludePath(b.path("generated/QtGui/private"));
    const gui_inc_paths = [_][]const u8{
        "qtbase/src/gui",
        "qtbase/src/gui/accessible",
        "qtbase/src/gui/animation",
        "qtbase/src/gui/image",
        "qtbase/src/gui/itemmodels",
        "qtbase/src/gui/kernel",
        "qtbase/src/gui/math3d",
        "qtbase/src/gui/opengl",
        "qtbase/src/gui/painting",
        "qtbase/src/gui/platform",
        "qtbase/src/gui/platform/windows",
        "qtbase/src/gui/rhi",
        "qtbase/src/gui/text",
        "qtbase/src/gui/text/freetype",
        "qtbase/src/gui/text/windows",
        "qtbase/src/gui/util",
        "qtbase/src/gui/vulkan",
        "qtbase/src/3rdparty/harfbuzz-ng/include/harfbuzz",
        "qtbase/src/3rdparty/freetype/include",
        "qtbase/src/3rdparty/freetype/include/freetype",
        "qtbase/src/3rdparty/libpng",
        "qtbase/src/3rdparty/libjpeg/src",
        "qtbase/src/3rdparty/md4c",
        "qtbase/src/3rdparty/D3D12MemoryAllocator",
        "qtbase/src/3rdparty/VulkanMemoryAllocator",
        "qt_include/QtGui",
        "qt_include/QtGui/6.8.3",
        "qt_include/QtGui/6.8.3/QtGui",
        "qt_include/QtGui/6.8.3/QtGui/private",
    };
    for (gui_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtWidgetsIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtWidgets"));
    mod.addIncludePath(b.path("generated/QtWidgets/private"));
    const widgets_inc_paths = [_][]const u8{
        "qtbase/src/widgets",
        "qtbase/src/widgets/accessible",
        "qtbase/src/widgets/dialogs",
        "qtbase/src/widgets/effects",
        "qtbase/src/widgets/graphicsview",
        "qtbase/src/widgets/itemviews",
        "qtbase/src/widgets/kernel",
        "qtbase/src/widgets/styles",
        "qtbase/src/widgets/util",
        "qtbase/src/widgets/widgets",
        "qt_include/QtWidgets",
        "qt_include/QtWidgets/6.8.3",
        "qt_include/QtWidgets/6.8.3/QtWidgets",
        "qt_include/QtWidgets/6.8.3/QtWidgets/private",
    };
    for (widgets_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}

fn addQtNetworkIncludes(mod: *std.Build.Module, b: *std.Build) void {
    mod.addIncludePath(b.path("generated/QtNetwork"));
    mod.addIncludePath(b.path("generated/QtNetwork/private"));
    const network_inc_paths = [_][]const u8{
        "qtbase/src/network",
        "qtbase/src/network/access",
        "qtbase/src/network/kernel",
        "qtbase/src/network/socket",
        "qtbase/src/network/ssl",
        "qt_include/QtNetwork",
        "qt_include/QtNetwork/6.8.3",
        "qt_include/QtNetwork/6.8.3/QtNetwork",
        "qt_include/QtNetwork/6.8.3/QtNetwork/private",
    };
    for (network_inc_paths) |dir| {
        mod.addIncludePath(b.path(dir));
    }
}
