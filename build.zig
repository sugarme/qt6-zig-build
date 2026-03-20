const std = @import("std");
const sources = @import("source_lists.zig");

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
