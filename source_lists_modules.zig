// Source file lists for Qt 6.8.3 additional modules
// Generated from Qt source tree analysis
// Target: Windows x86_64

// ============================================================================
// QtXml (relative to qtbase/src/xml/)
// ============================================================================

pub const qtxml_sources: []const []const u8 = &.{
    "dom/qdom.cpp",
    "dom/qdomhelpers.cpp",
};

pub const qtxml_moc_headers: []const []const u8 = &.{
    // No Q_OBJECT/Q_GADGET headers in QtXml
};

// ============================================================================
// QtSql (relative to qtbase/src/sql/)
// ============================================================================

/// kernel + compat sources
pub const qtsql_common_sources: []const []const u8 = &.{
    "compat/removed_api.cpp",
    "kernel/qsqlcachedresult.cpp",
    "kernel/qsqldatabase.cpp",
    "kernel/qsqldriver.cpp",
    "kernel/qsqldriverplugin.cpp",
    "kernel/qsqlerror.cpp",
    "kernel/qsqlfield.cpp",
    "kernel/qsqlindex.cpp",
    "kernel/qsqlquery.cpp",
    "kernel/qsqlrecord.cpp",
    "kernel/qsqlresult.cpp",
};

/// models sources
pub const qtsql_model_sources: []const []const u8 = &.{
    "models/qsqlquerymodel.cpp",
    "models/qsqlrelationaldelegate.cpp",
    "models/qsqlrelationaltablemodel.cpp",
    "models/qsqltablemodel.cpp",
};

pub const qtsql_moc_headers: []const []const u8 = &.{
    "kernel/qsqldatabase.h",
    "kernel/qsqldriver.h",
    "kernel/qsqldriverplugin.h",
    "kernel/qsqlfield.h",
    "kernel/qsqlindex.h",
    "kernel/qsqlquery.h",
    "models/qsqlquerymodel.h",
    "models/qsqlrelationaltablemodel.h",
    "models/qsqltablemodel.h",
};

// ============================================================================
// QtOpenGL (relative to qtbase/src/opengl/)
// ============================================================================

/// Common sources (root-level, excluding version functions, vulkan, egl, ES, compat)
pub const qtopengl_common_sources: []const []const u8 = &.{
    "qopengl2pexvertexarray.cpp",
    "qopenglbuffer.cpp",
    "qopenglcustomshaderstage.cpp",
    "qopengldebug.cpp",
    "qopenglengineshadermanager.cpp",
    "qopenglframebufferobject.cpp",
    "qopenglgradientcache.cpp",
    "qopenglpaintdevice.cpp",
    "qopenglpaintengine.cpp",
    "qopenglpixeltransferoptions.cpp",
    "qopenglshaderprogram.cpp",
    "qopengltexture.cpp",
    "qopengltextureblitter.cpp",
    "qopengltexturecache.cpp",
    "qopengltextureglyphcache.cpp",
    "qopengltexturehelper.cpp",
    "qopengltextureuploader.cpp",
    "qopenglversionfunctions.cpp",
    "qopenglversionfunctionsfactory.cpp",
    "qopenglversionprofile.cpp",
    "qopenglvertexarrayobject.cpp",
    "qopenglwindow.cpp",
};

/// Desktop GL version-specific functions + timer query
pub const qtopengl_desktop_sources: []const []const u8 = &.{
    "qopenglfunctions_1_0.cpp",
    "qopenglfunctions_1_1.cpp",
    "qopenglfunctions_1_2.cpp",
    "qopenglfunctions_1_3.cpp",
    "qopenglfunctions_1_4.cpp",
    "qopenglfunctions_1_5.cpp",
    "qopenglfunctions_2_0.cpp",
    "qopenglfunctions_2_1.cpp",
    "qopenglfunctions_3_0.cpp",
    "qopenglfunctions_3_1.cpp",
    "qopenglfunctions_3_2_compatibility.cpp",
    "qopenglfunctions_3_2_core.cpp",
    "qopenglfunctions_3_3_compatibility.cpp",
    "qopenglfunctions_3_3_core.cpp",
    "qopenglfunctions_4_0_compatibility.cpp",
    "qopenglfunctions_4_0_core.cpp",
    "qopenglfunctions_4_1_compatibility.cpp",
    "qopenglfunctions_4_1_core.cpp",
    "qopenglfunctions_4_2_compatibility.cpp",
    "qopenglfunctions_4_2_core.cpp",
    "qopenglfunctions_4_3_compatibility.cpp",
    "qopenglfunctions_4_3_core.cpp",
    "qopenglfunctions_4_4_compatibility.cpp",
    "qopenglfunctions_4_4_core.cpp",
    "qopenglfunctions_4_5_compatibility.cpp",
    "qopenglfunctions_4_5_core.cpp",
    "qopengltimerquery.cpp",
};

pub const qtopengl_moc_headers: []const []const u8 = &.{
    "qopengldebug.h",
    "qopenglengineshadermanager_p.h",
    "qopenglshaderprogram.h",
    "qopengltexture.h",
    "qopengltimerquery.h",
    "qopenglvertexarrayobject.h",
    "qopenglwindow.h",
};

// ============================================================================
// QtPrintSupport (relative to qtbase/src/printsupport/)
// ============================================================================

/// Kernel sources (common, excluding preview-related)
pub const qtprintsupport_common_sources: []const []const u8 = &.{
    "kernel/qpaintengine_alpha.cpp",
    "kernel/qplatformprintdevice.cpp",
    "kernel/qplatformprintersupport.cpp",
    "kernel/qplatformprintplugin.cpp",
    "kernel/qprint.cpp",
    "kernel/qprintdevice.cpp",
    "kernel/qprintengine.cpp",
    "kernel/qprintengine_pdf.cpp",
    "kernel/qprinter.cpp",
    "kernel/qprinterinfo.cpp",
};

/// Windows platform sources
pub const qtprintsupport_win_sources: []const []const u8 = &.{
    "platform/windows/qprintengine_win.cpp",
    "platform/windows/qwindowsprintdevice.cpp",
    // qwindowsprinterinfo.cpp excluded: references removed QPrinter::PaperSize API
    "platform/windows/qwindowsprintersupport.cpp",
};

/// Dialog sources (Windows-targeted subset)
pub const qtprintsupport_dialog_sources: []const []const u8 = &.{
    "dialogs/qabstractprintdialog.cpp",
    "dialogs/qpagesetupdialog.cpp",
    "dialogs/qpagesetupdialog_win.cpp",
    "dialogs/qprintdialog_win.cpp",
    "dialogs/qprintpreviewdialog.cpp",
};

/// Widget/preview sources
pub const qtprintsupport_widget_sources: []const []const u8 = &.{
    "kernel/qpaintengine_preview.cpp",
    "widgets/qprintpreviewwidget.cpp",
};

pub const qtprintsupport_moc_headers: []const []const u8 = &.{
    "dialogs/qabstractprintdialog.h",
    "dialogs/qpagesetupdialog.h",
    "dialogs/qprintdialog.h",
    "dialogs/qprintpreviewdialog.h",
    "kernel/qplatformprintplugin.h",
    "widgets/qprintpreviewwidget.h",
};

/// .cpp sources that produce .moc files (inline MOC)
pub const qtprintsupport_moc_sources: []const []const u8 = &.{
    "platform/windows/qwindowsprintersupport.cpp",
    "dialogs/qprintpreviewdialog.cpp",
    "widgets/qprintpreviewwidget.cpp",
};

// ============================================================================
// QtSvg (relative to qtsvg/src/svg/)
// ============================================================================

pub const qtsvg_sources: []const []const u8 = &.{
    "qsvgdebug.cpp",
    "qsvgfilter.cpp",
    "qsvgfont.cpp",
    "qsvggenerator.cpp",
    "qsvggraphics.cpp",
    "qsvghandler.cpp",
    "qsvgnode.cpp",
    "qsvgrenderer.cpp",
    "qsvgstructure.cpp",
    "qsvgstyle.cpp",
    "qsvgtinydocument.cpp",
    "qsvgvisitor.cpp",
};

pub const qtsvg_moc_headers: []const []const u8 = &.{
    "qsvgrenderer.h",
};

// ============================================================================
// QtSvgWidgets (relative to qtsvg/src/svgwidgets/)
// ============================================================================

pub const qtsvgwidgets_sources: []const []const u8 = &.{
    "qgraphicssvgitem.cpp",
    "qsvgwidget.cpp",
};

pub const qtsvgwidgets_moc_headers: []const []const u8 = &.{
    "qgraphicssvgitem.h",
    "qsvgwidget.h",
};

// ============================================================================
// QtWebChannel (relative to qtwebchannel/src/webchannel/)
// ============================================================================

pub const qtwebchannel_sources: []const []const u8 = &.{
    "qmetaobjectpublisher.cpp",
    "qwebchannel.cpp",
    "qwebchannelabstracttransport.cpp",
};

pub const qtwebchannel_moc_headers: []const []const u8 = &.{
    "qmetaobjectpublisher_p.h",
    "qwebchannel.h",
    "qwebchannelabstracttransport.h",
};

// QtGui OpenGL sources are in source_lists_extra.zig (qtgui_opengl_sources)
