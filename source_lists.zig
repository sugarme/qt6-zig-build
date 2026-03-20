// Source file lists for Qt 6.8.3 static build with Zig
// Generated from Qt CMakeLists.txt analysis
// Target: Windows x86_64

// ============================================================================
// zlib 1.3.1 sources
// ============================================================================

pub const zlib_sources: []const []const u8 = &.{
    "src/adler32.c",
    "src/compress.c",
    "src/crc32.c",
    "src/deflate.c",
    "src/gzclose.c",
    "src/gzlib.c",
    "src/gzread.c",
    "src/gzwrite.c",
    "src/infback.c",
    "src/inffast.c",
    "src/inflate.c",
    "src/inftrees.c",
    "src/trees.c",
    "src/uncompr.c",
    "src/zutil.c",
};

// ============================================================================
// PCRE2 10.45 sources
// ============================================================================

pub const pcre2_sources: []const []const u8 = &.{
    "src/pcre2_auto_possess.c",
    "src/pcre2_chartables.c",
    "src/pcre2_chkdint.c",
    "src/pcre2_compile.c",
    "src/pcre2_compile_class.c",
    "src/pcre2_config.c",
    "src/pcre2_context.c",
    "src/pcre2_dfa_match.c",
    "src/pcre2_error.c",
    "src/pcre2_extuni.c",
    "src/pcre2_find_bracket.c",
    "src/pcre2_jit_compile.c",
    "src/pcre2_maketables.c",
    "src/pcre2_match.c",
    "src/pcre2_match_data.c",
    "src/pcre2_newline.c",
    "src/pcre2_ord2utf.c",
    "src/pcre2_pattern_info.c",
    "src/pcre2_script_run.c",
    "src/pcre2_serialize.c",
    "src/pcre2_string_utils.c",
    "src/pcre2_study.c",
    "src/pcre2_substitute.c",
    "src/pcre2_substring.c",
    "src/pcre2_tables.c",
    "src/pcre2_ucd.c",
    "src/pcre2_valid_utf.c",
    "src/pcre2_xclass.c",
};

// ============================================================================
// double-conversion 3.3.0 sources
// ============================================================================

pub const double_conversion_sources: []const []const u8 = &.{
    "double-conversion/bignum.cc",
    "double-conversion/bignum-dtoa.cc",
    "double-conversion/cached-powers.cc",
    "double-conversion/double-to-string.cc",
    "double-conversion/fast-dtoa.cc",
    "double-conversion/fixed-dtoa.cc",
    "double-conversion/string-to-double.cc",
    "double-conversion/strtod.cc",
};

// ============================================================================
// 3rd party hash algorithm sources (compiled into QtCore)
// ============================================================================

pub const hash_3rdparty_sources: []const []const u8 = &.{
    "rfc6234/sha224-256.c",
    "rfc6234/sha384-512.c",
};

// ============================================================================
// Bootstrap QtCore sources (minimal, no MOC needed)
// ============================================================================

pub const bootstrap_core_sources: []const []const u8 = &.{
    // global
    "global/qassert.cpp",
    "global/qfloat16.cpp",
    "global/qlogging.cpp",
    "global/qmalloc.cpp",
    "global/qnumeric.cpp",
    "global/qoperatingsystemversion.cpp",
    "global/qrandom.cpp",
    "global/qtenvironmentvariables.cpp",
    // io
    "io/qabstractfileengine.cpp",
    "io/qbuffer.cpp",
    "io/qdebug.cpp",
    "io/qdir.cpp",
    "io/qdirlisting.cpp",
    "io/qfile.cpp",
    "io/qfiledevice.cpp",
    "io/qfileinfo.cpp",
    "io/qfilesystemengine.cpp",
    "io/qfilesystementry.cpp",
    "io/qfsfileengine.cpp",
    "io/qfsfileengine_iterator.cpp",
    "io/qiodevice.cpp",
    "io/qipaddress.cpp",
    "io/qloggingcategory.cpp",
    "io/qloggingregistry.cpp",
    "io/qresource.cpp",
    "io/qstandardpaths.cpp",
    "io/qtemporarydir.cpp",
    "io/qtemporaryfile.cpp",
    "io/qurl.cpp",
    "io/qurlidna.cpp",
    "io/qurlquery.cpp",
    "io/qurlrecode.cpp",
    // kernel (no qcoreevent - needs QObject/moc)
    "kernel/qcoreapplication.cpp",
    "kernel/qmetatype.cpp",
    "kernel/qsystemerror.cpp",
    "kernel/qvariant.cpp",
    // plugin
    "plugin/quuid.cpp",
    // serialization (no qdatastream in bootstrap - QT_NO_DATASTREAM)
    "serialization/qcborcommon.cpp",
    "serialization/qcborstreamwriter.cpp",
    "serialization/qcborvalue.cpp",
    "serialization/qjsonarray.cpp",
    "serialization/qjsoncbor.cpp",
    "serialization/qjsondocument.cpp",
    "serialization/qjsonobject.cpp",
    "serialization/qjsonparser.cpp",
    "serialization/qjsonvalue.cpp",
    "serialization/qjsonwriter.cpp",
    "serialization/qtextstream.cpp",
    // text
    "text/qbytearray.cpp",
    "text/qbytearraylist.cpp",
    "text/qbytearraymatcher.cpp",
    "text/qlatin1stringmatcher.cpp",
    "text/qlocale.cpp",
    "text/qlocale_tools.cpp",
    "text/qregularexpression.cpp",
    "text/qstring.cpp",
    "text/qstringbuilder.cpp",
    "text/qstringconverter.cpp",
    "text/qstringlist.cpp",
    "text/qvsnprintf.cpp",
    // time
    "time/qcalendar.cpp",
    "time/qdatetime.cpp",
    "time/qgregoriancalendar.cpp",
    "time/qlocaltime.cpp",
    "time/qromancalendar.cpp",
    "time/qtimezone.cpp",
    // tools
    "tools/qarraydata.cpp",
    "tools/qcommandlineoption.cpp",
    "tools/qcommandlineparser.cpp",
    "tools/qcryptographichash.cpp",
    "tools/qhash.cpp",
    "tools/qringbuffer.cpp",
    "tools/qversionnumber.cpp",
};

// Bootstrap Windows-specific sources
pub const bootstrap_win_sources: []const []const u8 = &.{
    "io/qfilesystemengine_win.cpp",
    "io/qfilesystemiterator_win.cpp",
    "io/qfsfileengine_win.cpp",
    "io/qstandardpaths_win.cpp",
    "kernel/qcoreapplication_win.cpp",
    "kernel/qfunctions_win.cpp",
    "kernel/qwinregistry.cpp",
    "plugin/qsystemlibrary.cpp",
    "text/qlocale_win.cpp",
};

// ============================================================================
// Full QtCore common (cross-platform) sources
// ============================================================================

pub const qtcore_common_sources: []const []const u8 = &.{
    // global
    "global/qassert.cpp",
    "global/qcompare.cpp",
    "global/qendian.cpp",
    "global/qexceptionhandling.cpp",
    "global/qfloat16.cpp",
    "global/qglobal.cpp",
    "global/qhooks.cpp",
    "global/qlibraryinfo.cpp",
    "global/qlogging.cpp",
    "global/qmalloc.cpp",
    "global/qnumeric.cpp",
    "global/qoperatingsystemversion.cpp",
    "global/qrandom.cpp",
    "global/qsysinfo.cpp",
    "global/qtypes.cpp",
    "global/qtenvironmentvariables.cpp",
    "global/archdetect.cpp",
    "global/qsimd.cpp",
    // animation
    "animation/qabstractanimation.cpp",
    "animation/qanimationgroup.cpp",
    "animation/qpauseanimation.cpp",
    "animation/qpropertyanimation.cpp",
    "animation/qparallelanimationgroup.cpp",
    "animation/qsequentialanimationgroup.cpp",
    "animation/qvariantanimation.cpp",
    // compat
    "compat/removed_api.cpp",
    // io
    "io/qabstractfileengine.cpp",
    "io/qbuffer.cpp",
    "io/qdataurl.cpp",
    "io/qdebug.cpp",
    "io/qdir.cpp",
    "io/qdirlisting.cpp",
    "io/qdiriterator.cpp",
    "io/qfile.cpp",
    "io/qfiledevice.cpp",
    "io/qfileinfo.cpp",
    "io/qfileselector.cpp",
    "io/qfilesystemengine.cpp",
    "io/qfilesystementry.cpp",
    "io/qfsfileengine.cpp",
    "io/qfsfileengine_iterator.cpp",
    "io/qiodevice.cpp",
    "io/qipaddress.cpp",
    "io/qlockfile.cpp",
    "io/qloggingcategory.cpp",
    "io/qloggingregistry.cpp",
    "io/qnoncontiguousbytedevice.cpp",
    "io/qresource.cpp",
    "io/qresource_iterator.cpp",
    "io/qsavefile.cpp",
    "io/qstandardpaths.cpp",
    "io/qstorageinfo.cpp",
    "io/qtemporarydir.cpp",
    "io/qtemporaryfile.cpp",
    "io/qurl.cpp",
    "io/qurlidna.cpp",
    "io/qurlquery.cpp",
    "io/qurlrecode.cpp",
    "io/qzip.cpp",
    // io - features
    "io/qfilesystemwatcher.cpp",
    "io/qfilesystemwatcher_polling.cpp",
    "io/qprocess.cpp",
    "io/qsettings.cpp",
    // ipc
    "ipc/qsharedmemory.cpp",
    "ipc/qsystemsemaphore.cpp",
    "ipc/qtipccommon.cpp",
    // itemmodels
    "itemmodels/qabstractitemmodel.cpp",
    "itemmodels/qitemselectionmodel.cpp",
    "itemmodels/qabstractproxymodel.cpp",
    "itemmodels/qidentityproxymodel.cpp",
    "itemmodels/qsortfilterproxymodel.cpp",
    "itemmodels/qtransposeproxymodel.cpp",
    "itemmodels/qconcatenatetablesproxymodel.cpp",
    "itemmodels/qstringlistmodel.cpp",
    // kernel
    "kernel/qabstracteventdispatcher.cpp",
    "kernel/qabstractnativeeventfilter.cpp",
    "kernel/qassociativeiterable.cpp",
    "kernel/qbasictimer.cpp",
    "kernel/qchronotimer.cpp",
    "kernel/qcoreapplication.cpp",
    "kernel/qcoreevent.cpp",
    "kernel/qdeadlinetimer.cpp",
    "kernel/qelapsedtimer.cpp",
    "kernel/qeventloop.cpp",
    "kernel/qiterable.cpp",
    "kernel/qmath.cpp",
    "kernel/qmetacontainer.cpp",
    "kernel/qmetaobject.cpp",
    "kernel/qmetaobjectbuilder.cpp",
    "kernel/qmetatype.cpp",
    "kernel/qmimedata.cpp",
    "kernel/qtimer.cpp",
    "kernel/qobject.cpp",
    "kernel/qobjectcleanuphandler.cpp",
    "kernel/qproperty.cpp",
    "kernel/qsequentialiterable.cpp",
    "kernel/qsignalmapper.cpp",
    "kernel/qsingleshottimer.cpp",
    "kernel/qsocketnotifier.cpp",
    "kernel/qsystemerror.cpp",
    "kernel/qtestsupport_core.cpp",
    "kernel/qtranslator.cpp",
    "kernel/qvariant.cpp",
    "kernel/qpermissions.cpp",
    // mimetypes
    "mimetypes/qmimedatabase.cpp",
    "mimetypes/qmimetype.cpp",
    "mimetypes/qmimeglobpattern.cpp",
    "mimetypes/qmimemagicrule.cpp",
    "mimetypes/qmimemagicrulematcher.cpp",
    "mimetypes/qmimeprovider.cpp",
    "mimetypes/qmimetypeparser.cpp",
    // plugin
    "plugin/qfactoryinterface.cpp",
    "plugin/qfactoryloader.cpp",
    "plugin/qpluginloader.cpp",
    "plugin/quuid.cpp",
    "plugin/qlibrary.cpp",
    "plugin/qcoffpeparser.cpp",
    "plugin/qsystemlibrary.cpp",
    // serialization
    "serialization/qcborcommon.cpp",
    "serialization/qcborvalue.cpp",
    "serialization/qcborstreamreader.cpp",
    "serialization/qcborstreamwriter.cpp",
    "serialization/qcbordiagnostic.cpp",
    "serialization/qdatastream.cpp",
    "serialization/qjsonarray.cpp",
    "serialization/qjsondocument.cpp",
    "serialization/qjsonobject.cpp",
    "serialization/qjsonvalue.cpp",
    "serialization/qjsonparser.cpp",
    "serialization/qjsonwriter.cpp",
    "serialization/qjsoncbor.cpp",
    "serialization/qtextstream.cpp",
    "serialization/qxmlstream.cpp",
    "serialization/qxmlstreamgrammar.cpp",
    "serialization/qxmlutils.cpp",
    // text
    "text/qanystringview.cpp",
    "text/qbytearray.cpp",
    "text/qbytearraylist.cpp",
    "text/qbytearraymatcher.cpp",
    "text/qcollator.cpp",
    "text/qlatin1stringmatcher.cpp",
    "text/qlocale.cpp",
    "text/qlocale_tools.cpp",
    "text/qregularexpression.cpp",
    "text/qstring.cpp",
    "text/qstringbuilder.cpp",
    "text/qstringconverter.cpp",
    "text/qstringlist.cpp",
    "text/qstringtokenizer.cpp",
    "text/qstringview.cpp",
    "text/qtextboundaryfinder.cpp",
    "text/qunicodetools.cpp",
    "text/qvsnprintf.cpp",
    // thread
    "thread/qatomic.cpp",
    "thread/qmutex.cpp",
    "thread/qreadwritelock.cpp",
    "thread/qrunnable.cpp",
    "thread/qsemaphore.cpp",
    "thread/qthread.cpp",
    "thread/qthreadpool.cpp",
    "thread/qthreadstorage.cpp",
    "thread/qexception.cpp",
    "thread/qfutureinterface.cpp",
    "thread/qfuturewatcher.cpp",
    "thread/qresultstore.cpp",
    // time
    "time/qcalendar.cpp",
    "time/qdatetime.cpp",
    "time/qgregoriancalendar.cpp",
    "time/qjuliancalendar.cpp",
    "time/qmilankoviccalendar.cpp",
    "time/qromancalendar.cpp",
    "time/qhijricalendar.cpp",
    "time/qislamiccivilcalendar.cpp",
    "time/qjalalicalendar.cpp",
    "time/qlocaltime.cpp",
    "time/qtimezone.cpp",
    "time/qtimezoneprivate.cpp",
    "time/qdatetimeparser.cpp",
    // tools
    "tools/qarraydata.cpp",
    "tools/qbitarray.cpp",
    "tools/qcommandlineoption.cpp",
    "tools/qcommandlineparser.cpp",
    "tools/qcontiguouscache.cpp",
    "tools/qcryptographichash.cpp",
    "tools/qeasingcurve.cpp",
    "tools/qfreelist.cpp",
    "tools/qfunctionaltools_impl.cpp",
    "tools/qhash.cpp",
    "tools/qline.cpp",
    "tools/qmargins.cpp",
    "tools/qpoint.cpp",
    "tools/qrect.cpp",
    "tools/qrefcount.cpp",
    "tools/qringbuffer.cpp",
    "tools/qshareddata.cpp",
    "tools/qsharedpointer.cpp",
    "tools/qsize.cpp",
    "tools/qtimeline.cpp",
    "tools/qtyperevision.cpp",
    "tools/quniquehandle_types.cpp",
    "tools/qversionnumber.cpp",
    // tracing - disabled
    // platform
    "platform/windows/qfactorycacheregistration.cpp",
};

// ============================================================================
// Full QtCore Windows-specific sources
// ============================================================================

pub const qtcore_win_sources: []const []const u8 = &.{
    // global
    "global/qoperatingsystemversion_win.cpp",
    // io
    "io/qfilesystemengine_win.cpp",
    "io/qfilesystemiterator_win.cpp",
    "io/qfsfileengine_win.cpp",
    "io/qlockfile_win.cpp",
    "io/qstandardpaths_win.cpp",
    "io/qstorageinfo_win.cpp",
    "io/qfilesystemwatcher_win.cpp",
    "io/qprocess_win.cpp",
    "io/qsettings_win.cpp",
    "io/qwindowspipereader.cpp",
    "io/qwindowspipewriter.cpp",
    // ipc
    "ipc/qsharedmemory_win.cpp",
    "ipc/qsystemsemaphore_win.cpp",
    // plugin
    "plugin/qlibrary_win.cpp",
    // kernel
    "kernel/qcoreapplication_win.cpp",
    "kernel/qeventdispatcher_win.cpp",
    "kernel/qfunctions_win.cpp",
    "kernel/qwineventnotifier.cpp",
    "kernel/qwinregistry.cpp",
    // text
    "text/qcollator_win.cpp",
    "text/qlocale_win.cpp",
    // thread
    "thread/qthread_win.cpp",
    "thread/qwaitcondition_win.cpp",
    // time
    "time/qtimezoneprivate_win.cpp",
};

// ============================================================================
// MOC tool sources
// ============================================================================

pub const moc_tool_sources: []const []const u8 = &.{
    "collectjson.cpp",
    "generator.cpp",
    "main.cpp",
    "moc.cpp",
    "parser.cpp",
    "preprocessor.cpp",
    "token.cpp",
};

// ============================================================================
// RCC tool sources
// ============================================================================

pub const rcc_tool_sources: []const []const u8 = &.{
    "main.cpp",
    "rcc.cpp",
};

// ============================================================================
// MOC-generated sources for QtCore
// ============================================================================

pub const moc_generated_sources: []const []const u8 = &.{
    "moc_qnamespace.cpp",
    "include/moc_qabstractanimation.cpp",
    "include/moc_qabstractanimation_p.cpp",
    "include/moc_qabstracteventdispatcher.cpp",
    "include/moc_qabstractitemmodel.cpp",
    "include/moc_qabstractproxymodel.cpp",
    "include/moc_qanimationgroup.cpp",
    "include/moc_qbuffer.cpp",
    "include/moc_qcalendar.cpp",
    "include/moc_qcborcommon.cpp",
    "include/moc_qcborstreamreader.cpp",
    "include/moc_qcborvalue.cpp",
    "include/moc_qchronotimer.cpp",
    "include/moc_qconcatenatetablesproxymodel.cpp",
    "include/moc_qcoreapplication.cpp",
    "include/moc_qcoreevent.cpp",
    "include/moc_qcryptographichash.cpp",
    "include/moc_qeasingcurve.cpp",
    "include/moc_qeventdispatcher_win_p.cpp",
    "include/moc_qeventloop.cpp",
    "include/moc_qfactoryloader_p.cpp",
    "include/moc_qfile.cpp",
    "include/moc_qfiledevice.cpp",
    "include/moc_qfileselector.cpp",
    "include/moc_qfilesystemwatcher.cpp",
    "include/moc_qfilesystemwatcher_p.cpp",
    "include/moc_qfilesystemwatcher_polling_p.cpp",
    "include/moc_qfilesystemwatcher_win_p.cpp",
    "include/moc_qfuturewatcher.cpp",
    "include/moc_qidentityproxymodel.cpp",
    "include/moc_qiodevice.cpp",
    "include/moc_qitemselectionmodel.cpp",
    "include/moc_qlibrary.cpp",
    "include/moc_qlocale.cpp",
    "include/moc_qmimedata.cpp",
    "include/moc_qmimetype.cpp",
    "include/moc_qnoncontiguousbytedevice_p.cpp",
    "include/moc_qobjectcleanuphandler.cpp",
    "include/moc_qparallelanimationgroup.cpp",
    "include/moc_qpauseanimation.cpp",
    "include/moc_qpermissions.cpp",
    "include/moc_qpluginloader.cpp",
    "include/moc_qprocess.cpp",
    "include/moc_qpropertyanimation.cpp",
    "include/moc_qsavefile.cpp",
    "include/moc_qsequentialanimationgroup.cpp",
    "include/moc_qsettings.cpp",
    "include/moc_qsharedmemory.cpp",
    "include/moc_qsignalmapper.cpp",
    "include/moc_qsingleshottimer_p.cpp",
    "include/moc_qsocketnotifier.cpp",
    "include/moc_qsortfilterproxymodel.cpp",
    "include/moc_qstandardpaths.cpp",
    "include/moc_qstringlistmodel.cpp",
    "include/moc_qsystemsemaphore.cpp",
    "include/moc_qtemporaryfile.cpp",
    "include/moc_qtextstream_p.cpp",
    "include/moc_qthread.cpp",
    "include/moc_qthreadpool.cpp",
    "include/moc_qtimeline.cpp",
    "include/moc_qtimer.cpp",
    "include/moc_qtipccommon.cpp",
    "include/moc_qtranslator.cpp",
    "include/moc_qtransposeproxymodel.cpp",
    "include/moc_qvariantanimation.cpp",
    "include/moc_qwindowspipereader_p.cpp",
    "include/moc_qwindowspipewriter_p.cpp",
    "include/moc_qwineventnotifier.cpp",
};
