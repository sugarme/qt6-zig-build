/****************************************************************************
** Meta object code from reading C++ file 'qplaintextedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qplaintextedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaintextedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QPlainTextEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QPlainTextEditE = QtMocHelpers::stringData(
    "QPlainTextEdit",
    "textChanged",
    "",
    "undoAvailable",
    "b",
    "redoAvailable",
    "copyAvailable",
    "selectionChanged",
    "cursorPositionChanged",
    "updateRequest",
    "rect",
    "dy",
    "blockCountChanged",
    "newBlockCount",
    "modificationChanged",
    "setPlainText",
    "text",
    "cut",
    "copy",
    "paste",
    "undo",
    "redo",
    "clear",
    "selectAll",
    "insertPlainText",
    "appendPlainText",
    "appendHtml",
    "html",
    "centerCursor",
    "zoomIn",
    "range",
    "zoomOut",
    "inputMethodQuery",
    "QVariant",
    "Qt::InputMethodQuery",
    "query",
    "argument",
    "tabChangesFocus",
    "documentTitle",
    "undoRedoEnabled",
    "lineWrapMode",
    "LineWrapMode",
    "readOnly",
    "plainText",
    "overwriteMode",
    "tabStopDistance",
    "cursorWidth",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "blockCount",
    "maximumBlockCount",
    "backgroundVisible",
    "centerOnScroll",
    "placeholderText",
    "NoWrap",
    "WidgetWidth"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QPlainTextEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      15,  226, // properties
       1,  301, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,   17 /* Public */,
       3,    1,  171,    2, 0x06,   18 /* Public */,
       5,    1,  174,    2, 0x06,   20 /* Public */,
       6,    1,  177,    2, 0x06,   22 /* Public */,
       7,    0,  180,    2, 0x06,   24 /* Public */,
       8,    0,  181,    2, 0x06,   25 /* Public */,
       9,    2,  182,    2, 0x06,   26 /* Public */,
      12,    1,  187,    2, 0x06,   29 /* Public */,
      14,    1,  190,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  193,    2, 0x0a,   33 /* Public */,
      17,    0,  196,    2, 0x0a,   35 /* Public */,
      18,    0,  197,    2, 0x0a,   36 /* Public */,
      19,    0,  198,    2, 0x0a,   37 /* Public */,
      20,    0,  199,    2, 0x0a,   38 /* Public */,
      21,    0,  200,    2, 0x0a,   39 /* Public */,
      22,    0,  201,    2, 0x0a,   40 /* Public */,
      23,    0,  202,    2, 0x0a,   41 /* Public */,
      24,    1,  203,    2, 0x0a,   42 /* Public */,
      25,    1,  206,    2, 0x0a,   44 /* Public */,
      26,    1,  209,    2, 0x0a,   46 /* Public */,
      28,    0,  212,    2, 0x0a,   48 /* Public */,
      29,    1,  213,    2, 0x0a,   49 /* Public */,
      29,    0,  216,    2, 0x2a,   51 /* Public | MethodCloned */,
      31,    1,  217,    2, 0x0a,   52 /* Public */,
      31,    0,  220,    2, 0x2a,   54 /* Public | MethodCloned */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      32,    2,  221,    2, 0x102,   55 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   30,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 33, 0x80000000 | 34, 0x80000000 | 33,   35,   36,

 // properties: name, type, flags, notifyId, revision
      37, QMetaType::Bool, 0x00015103, uint(-1), 0,
      38, QMetaType::QString, 0x00015103, uint(-1), 0,
      39, QMetaType::Bool, 0x00015103, uint(-1), 0,
      40, 0x80000000 | 41, 0x0001510b, uint(-1), 0,
      42, QMetaType::Bool, 0x00015103, uint(-1), 0,
      43, QMetaType::QString, 0x00115103, uint(0), 0,
      44, QMetaType::Bool, 0x00015103, uint(-1), 0,
      45, QMetaType::QReal, 0x00015103, uint(-1), 0,
      46, QMetaType::Int, 0x00015103, uint(-1), 0,
      47, 0x80000000 | 48, 0x0001510b, uint(-1), 0,
      49, QMetaType::Int, 0x00015001, uint(-1), 0,
      50, QMetaType::Int, 0x00015103, uint(-1), 0,
      51, QMetaType::Bool, 0x00015103, uint(-1), 0,
      52, QMetaType::Bool, 0x00015103, uint(-1), 0,
      53, QMetaType::QString, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      41,   41, 0x0,    2,  306,

 // enum data: key, value
      54, uint(QPlainTextEdit::NoWrap),
      55, uint(QPlainTextEdit::WidgetWidth),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlainTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ZN14QPlainTextEditE.offsetsAndSizes,
    qt_meta_data_ZN14QPlainTextEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14QPlainTextEditE_t,
        // property 'tabChangesFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'undoRedoEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lineWrapMode'
        QtPrivate::TypeAndForceComplete<LineWrapMode, std::true_type>,
        // property 'readOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'plainText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overwriteMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabStopDistance'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'blockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximumBlockCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'backgroundVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'centerOnScroll'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'placeholderText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'LineWrapMode'
        QtPrivate::TypeAndForceComplete<QPlainTextEdit::LineWrapMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlainTextEdit, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'redoAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cursorPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'blockCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'modificationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPlainText'
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
        // method 'appendPlainText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendHtml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'centerCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
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
        // method 'inputMethodQuery'
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::InputMethodQuery, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
    >,
    nullptr
} };

void QPlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QPlainTextEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->undoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->redoAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->selectionChanged(); break;
        case 5: _t->cursorPositionChanged(); break;
        case 6: _t->updateRequest((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->blockCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->cut(); break;
        case 11: _t->copy(); break;
        case 12: _t->paste(); break;
        case 13: _t->undo(); break;
        case 14: _t->redo(); break;
        case 15: _t->clear(); break;
        case 16: _t->selectAll(); break;
        case 17: _t->insertPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->appendPlainText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->appendHtml((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->centerCursor(); break;
        case 21: _t->zoomIn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->zoomIn(); break;
        case 23: _t->zoomOut((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->zoomOut(); break;
        case 25: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< std::add_pointer_t<Qt::InputMethodQuery>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QPlainTextEdit::*)();
            if (_q_method_type _q_method = &QPlainTextEdit::textChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(bool );
            if (_q_method_type _q_method = &QPlainTextEdit::undoAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(bool );
            if (_q_method_type _q_method = &QPlainTextEdit::redoAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(bool );
            if (_q_method_type _q_method = &QPlainTextEdit::copyAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)();
            if (_q_method_type _q_method = &QPlainTextEdit::selectionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)();
            if (_q_method_type _q_method = &QPlainTextEdit::cursorPositionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(const QRect & , int );
            if (_q_method_type _q_method = &QPlainTextEdit::updateRequest; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(int );
            if (_q_method_type _q_method = &QPlainTextEdit::blockCountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QPlainTextEdit::*)(bool );
            if (_q_method_type _q_method = &QPlainTextEdit::modificationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->tabChangesFocus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->documentTitle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isUndoRedoEnabled(); break;
        case 3: *reinterpret_cast< LineWrapMode*>(_v) = _t->lineWrapMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->toPlainText(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->overwriteMode(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->tabStopDistance(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        case 9: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->blockCount(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->maximumBlockCount(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->backgroundVisible(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->centerOnScroll(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->placeholderText(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTabChangesFocus(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDocumentTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUndoRedoEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLineWrapMode(*reinterpret_cast< LineWrapMode*>(_v)); break;
        case 4: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setPlainText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setTabStopDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 11: _t->setMaximumBlockCount(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setBackgroundVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setCenterOnScroll(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setPlaceholderText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QPlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QPlainTextEditE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QPlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QPlainTextEdit::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPlainTextEdit::undoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlainTextEdit::redoAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlainTextEdit::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QPlainTextEdit::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QPlainTextEdit::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QPlainTextEdit::updateRequest(const QRect & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QPlainTextEdit::blockCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QPlainTextEdit::modificationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
namespace {
struct qt_meta_tag_ZN24QPlainTextDocumentLayoutE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN24QPlainTextDocumentLayoutE = QtMocHelpers::stringData(
    "QPlainTextDocumentLayout",
    "cursorWidth"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN24QPlainTextDocumentLayoutE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlainTextDocumentLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTextDocumentLayout::staticMetaObject>(),
    qt_meta_stringdata_ZN24QPlainTextDocumentLayoutE.offsetsAndSizes,
    qt_meta_data_ZN24QPlainTextDocumentLayoutE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN24QPlainTextDocumentLayoutE_t,
        // property 'cursorWidth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlainTextDocumentLayout, std::true_type>
    >,
    nullptr
} };

void QPlainTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QPlainTextDocumentLayout *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->cursorWidth(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCursorWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QPlainTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN24QPlainTextDocumentLayoutE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTextDocumentLayout::qt_metacast(_clname);
}

int QPlainTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextDocumentLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
