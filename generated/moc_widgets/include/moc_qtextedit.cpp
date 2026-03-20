/****************************************************************************
** Meta object code from reading C++ file 'qtextedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qtextedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9QTextEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QTextEditE = QtMocHelpers::stringData(
    "QTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "currentCharFormatChanged",
    "QTextCharFormat",
    "format",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "setFontPointSize",
    "s",
    "setFontFamily",
    "fontFamily",
    "setFontWeight",
    "w",
    "setFontUnderline",
    "setFontItalic",
    "setTextColor",
    "c",
    "setTextBackgroundColor",
    "setCurrentFont",
    "f",
    "setAlignment",
    "Qt::Alignment",
    "a",
    "setPlainText",
    "text",
    "setHtml",
    "setMarkdown",
    "markdown",
    "setText",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "insertHtml",
    "append",
    "scrollToAnchor",
    "name",
    "zoomIn",
    "range",
    "zoomOut",
    "loadResource",
    "QVariant",
    "type",
    "inputMethodQuery",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "autoFormatting",
    "AutoFormatting",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "lineWrapColumnOrWidth",
    "readOnly",
    "html",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "acceptRichText",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "document",
    "QTextDocument*",
    "placeholderText",
    "NoWrap",
    "WidgetWidth",
    "FixedPixelWidth",
    "FixedColumnWidth",
    "AutoFormattingFlag",
    "AutoNone",
    "AutoBulletList",
    "AutoAll"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QTextEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
      17,  327, // properties
       2,  412, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  236,    2, 0x06,   20 /* Public */,
       3,    1,  237,    2, 0x06,   21 /* Public */,
       5,    1,  240,    2, 0x06,   23 /* Public */,
       6,    1,  243,    2, 0x06,   25 /* Public */,
       9,    1,  246,    2, 0x06,   27 /* Public */,
      10,    0,  249,    2, 0x06,   29 /* Public */,
      11,    0,  250,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  251,    2, 0x0a,   31 /* Public */,
      14,    1,  254,    2, 0x0a,   33 /* Public */,
      16,    1,  257,    2, 0x0a,   35 /* Public */,
      18,    1,  260,    2, 0x0a,   37 /* Public */,
      19,    1,  263,    2, 0x0a,   39 /* Public */,
      20,    1,  266,    2, 0x0a,   41 /* Public */,
      22,    1,  269,    2, 0x0a,   43 /* Public */,
      23,    1,  272,    2, 0x0a,   45 /* Public */,
      25,    1,  275,    2, 0x0a,   47 /* Public */,
      28,    1,  278,    2, 0x0a,   49 /* Public */,
      30,    1,  281,    2, 0x0a,   51 /* Public */,
      31,    1,  284,    2, 0x0a,   53 /* Public */,
      33,    1,  287,    2, 0x0a,   55 /* Public */,
      34,    0,  290,    2, 0x0a,   57 /* Public */,
      35,    0,  291,    2, 0x0a,   58 /* Public */,
      36,    0,  292,    2, 0x0a,   59 /* Public */,
      37,    0,  293,    2, 0x0a,   60 /* Public */,
      38,    0,  294,    2, 0x0a,   61 /* Public */,
      39,    0,  295,    2, 0x0a,   62 /* Public */,
      40,    0,  296,    2, 0x0a,   63 /* Public */,
      41,    1,  297,    2, 0x0a,   64 /* Public */,
      42,    1,  300,    2, 0x0a,   66 /* Public */,
      43,    1,  303,    2, 0x0a,   68 /* Public */,
      44,    1,  306,    2, 0x0a,   70 /* Public */,
      46,    1,  309,    2, 0x0a,   72 /* Public */,
      46,    0,  312,    2, 0x2a,   74 /* Public | MethodCloned */,
      48,    1,  313,    2, 0x0a,   75 /* Public */,
      48,    0,  316,    2, 0x2a,   77 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      49,    2,  317,    2, 0x02,   78 /* Public */,
      52,    2,  322,    2, 0x102,   81 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QColor,   21,
    QMetaType::Void, QMetaType::QColor,   21,
    QMetaType::Void, QMetaType::QFont,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 50, QMetaType::Int, QMetaType::QUrl,   51,   45,
    0x80000000 | 50, 0x80000000 | 53, 0x80000000 | 50,   54,   55,

 // properties: name, type, flags, notifyId, revision
      56, 0x80000000 | 57, 0x0001510b, uint(-1), 0,
      58, QMetaType::Bool, 0x00015103, uint(-1), 0,
      59, QMetaType::QString, 0x00015103, uint(-1), 0,
      60, QMetaType::Bool, 0x00015103, uint(-1), 0,
      61, 0x80000000 | 62, 0x0001510b, uint(-1), 0,
      63, QMetaType::Int, 0x00015103, uint(-1), 0,
      64, QMetaType::Bool, 0x00015103, uint(-1), 0,
      32, QMetaType::QString, 0x00015103, uint(0), 0,
      65, QMetaType::QString, 0x00115103, uint(0), 0,
      66, QMetaType::QString, 0x00014103, uint(-1), 0,
      67, QMetaType::Bool, 0x00015103, uint(-1), 0,
      68, QMetaType::QReal, 0x00015103, uint(-1), 0,
      69, QMetaType::Bool, 0x00015103, uint(-1), 0,
      70, QMetaType::Int, 0x00015103, uint(-1), 0,
      71, 0x80000000 | 72, 0x0001510b, uint(-1), 0,
      73, 0x80000000 | 74, 0x0001410b, uint(-1), 0,
      75, QMetaType::QString, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      62,   62, 0x0,    4,  422,
      57,   80, 0x1,    3,  430,

 // enum data: key, value
      76, uint(QTextEdit::NoWrap),
      77, uint(QTextEdit::WidgetWidth),
      78, uint(QTextEdit::FixedPixelWidth),
      79, uint(QTextEdit::FixedColumnWidth),
      81, uint(QTextEdit::AutoNone),
      82, uint(QTextEdit::AutoBulletList),
      83, uint(QTextEdit::AutoAll),

       0        // eod
};

Q_CONSTINIT const QMetaObject QTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ZN9QTextEditE.offsetsAndSizes,
    qt_meta_data_ZN9QTextEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QTextEditE_t,
        // property 'autoFormatting'
        QtPrivate::TypeAndForceComplete<AutoFormatting, std::true_type>,
        // property 'tabChangesFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'undoRedoEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lineWrapMode'
        QtPrivate::TypeAndForceComplete<LineWrapMode, std::true_type>,
        // property 'lineWrapColumnOrWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'markdown'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'html'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'plainText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabStopDistance'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'acceptRichText'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'document'
        QtPrivate::TypeAndForceComplete<QTextDocument*, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'LineWrapMode'
        QtPrivate::TypeAndForceComplete<QTextEdit::LineWrapMode, std::true_type>,
        // enum 'AutoFormatting'
        QtPrivate::TypeAndForceComplete<QTextEdit::AutoFormatting, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTextEdit, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'currentCharFormatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTextCharFormat &, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFontPointSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'setFontFamily'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setFontWeight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setFontUnderline'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFontItalic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTextColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setTextBackgroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setCurrentFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'setAlignment'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::false_type>,
        // method 'setPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMarkdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'cut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paste'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'insertHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'append'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'scrollToAnchor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadResource'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void QTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTextEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->currentCharFormatChanged((*reinterpret_cast< std::add_pointer_t<QTextCharFormat>>(_a[1]))); break;
        case 4: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->selectionChanged(); break;
        case 6: _t->cursorPositionChanged(); break;
        case 7: _t->setFontPointSize((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->setFontFamily((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setFontWeight((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setFontUnderline((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->setFontItalic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setTextColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 13: _t->setTextBackgroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 14: _t->setCurrentFont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 15: _t->setAlignment((*reinterpret_cast< std::add_pointer_t<Qt::Alignment>>(_a[1]))); break;
        case 16: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->setHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setMarkdown((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->cut(); break;
        case 21: _t->copy(); break;
        case 22: _t->paste(); break;
        case 23: _t->undo(); break;
        case 24: _t->redo(); break;
        case 25: _t->clear(); break;
        case 26: _t->selectAll(); break;
        case 27: _t->insertPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->insertHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->append((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->scrollToAnchor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 32: _t->zoomIn(); break;
        case 33: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 34: _t->zoomOut(); break;
        case 35: { QVariant _r = _t->loadResource((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 36: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTextEdit::*)();
            if (_q_method_type _q_method = &QTextEdit::textChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)(bool );
            if (_q_method_type _q_method = &QTextEdit::undoAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)(bool );
            if (_q_method_type _q_method = &QTextEdit::redoAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)(const QTextCharFormat & );
            if (_q_method_type _q_method = &QTextEdit::currentCharFormatChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)(bool );
            if (_q_method_type _q_method = &QTextEdit::copyAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)();
            if (_q_method_type _q_method = &QTextEdit::selectionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QTextEdit::*)();
            if (_q_method_type _q_method = &QTextEdit::cursorPositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->autoFormatting()); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->tabChangesFocus(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->documentTitle(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isUndoRedoEnabled(); break;
        case 4: *reinterpret_cast< LineWrapMode*>(_v) = _t->lineWrapMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->lineWrapColumnOrWidth(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->toMarkdown(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->toHtml(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->toPlainText(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->overwriteMode(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->tabStopDistance(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->acceptRichText(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 14: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 15: *reinterpret_cast< QTextDocument**>(_v) = _t->document(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoFormatting(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 5: _t->setLineWrapColumnOrWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMarkdown(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setTabStopDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 12: _t->setAcceptRichText(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 15: _t->setDocument(*reinterpret_cast< QTextDocument**>(_v)); break;
        case 16: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QTextEditE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTextEdit::currentCharFormatChanged(const QTextCharFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
