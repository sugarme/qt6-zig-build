/****************************************************************************
** Meta object code from reading C++ file 'qcompleter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/util/qcompleter.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcompleter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QCompleterE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QCompleterE = QtMocHelpers::stringData(
    "QCompleter",
    "activated",
    "",
    "text",
    "QModelIndex",
    "index",
    "highlighted",
    "setCompletionPrefix",
    "prefix",
    "complete",
    "rect",
    "setWrapAround",
    "wrap",
    "_q_complete",
    "_q_completionSelected",
    "QItemSelection",
    "_q_autoResizePopup",
    "_q_fileSystemModelDirectoryLoaded",
    "completionPrefix",
    "modelSorting",
    "ModelSorting",
    "filterMode",
    "Qt::MatchFlags",
    "completionMode",
    "CompletionMode",
    "completionColumn",
    "completionRole",
    "maxVisibleItems",
    "caseSensitivity",
    "Qt::CaseSensitivity",
    "wrapAround",
    "PopupCompletion",
    "UnfilteredPopupCompletion",
    "InlineCompletion",
    "UnsortedModel",
    "CaseSensitivelySortedModel",
    "CaseInsensitivelySortedModel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QCompleterE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,  118, // properties
       2,  163, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   12 /* Public */,
       1,    1,   89,    2, 0x06,   14 /* Public */,
       6,    1,   92,    2, 0x06,   16 /* Public */,
       6,    1,   95,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   98,    2, 0x0a,   20 /* Public */,
       9,    1,  101,    2, 0x0a,   22 /* Public */,
       9,    0,  104,    2, 0x2a,   24 /* Public | MethodCloned */,
      11,    1,  105,    2, 0x0a,   25 /* Public */,
      13,    1,  108,    2, 0x08,   27 /* Private */,
      14,    1,  111,    2, 0x08,   29 /* Private */,
      16,    0,  114,    2, 0x08,   31 /* Private */,
      17,    1,  115,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QRect,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags, notifyId, revision
      18, QMetaType::QString, 0x00015103, uint(-1), 0,
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,
      25, QMetaType::Int, 0x00015103, uint(-1), 0,
      26, QMetaType::Int, 0x00015103, uint(-1), 0,
      27, QMetaType::Int, 0x00015103, uint(-1), 0,
      28, 0x80000000 | 29, 0x0001510b, uint(-1), 0,
      30, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      24,   24, 0x0,    3,  173,
      20,   20, 0x0,    3,  179,

 // enum data: key, value
      31, uint(QCompleter::PopupCompletion),
      32, uint(QCompleter::UnfilteredPopupCompletion),
      33, uint(QCompleter::InlineCompletion),
      34, uint(QCompleter::UnsortedModel),
      35, uint(QCompleter::CaseSensitivelySortedModel),
      36, uint(QCompleter::CaseInsensitivelySortedModel),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCompleter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10QCompleterE.offsetsAndSizes,
    qt_meta_data_ZN10QCompleterE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QCompleterE_t,
        // property 'completionPrefix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'modelSorting'
        QtPrivate::TypeAndForceComplete<ModelSorting, std::true_type>,
        // property 'filterMode'
        QtPrivate::TypeAndForceComplete<Qt::MatchFlags, std::true_type>,
        // property 'completionMode'
        QtPrivate::TypeAndForceComplete<CompletionMode, std::true_type>,
        // property 'completionColumn'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'completionRole'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxVisibleItems'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'caseSensitivity'
        QtPrivate::TypeAndForceComplete<Qt::CaseSensitivity, std::true_type>,
        // property 'wrapAround'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'CompletionMode'
        QtPrivate::TypeAndForceComplete<QCompleter::CompletionMode, std::true_type>,
        // enum 'ModelSorting'
        QtPrivate::TypeAndForceComplete<QCompleter::ModelSorting, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCompleter, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'highlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'highlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'setCompletionPrefix'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'complete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'complete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setWrapAround'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_complete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method '_q_completionSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method '_q_autoResizePopup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_fileSystemModelDirectoryLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QCompleter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->highlighted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->setCompletionPrefix((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->complete((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 6: _t->complete(); break;
        case 7: _t->setWrapAround((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->d_func()->_q_complete((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->d_func()->_q_completionSelected((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 10: _t->d_func()->_q_autoResizePopup(); break;
        case 11: _t->d_func()->_q_fileSystemModelDirectoryLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QCompleter::*)(const QString & );
            if (_q_method_type _q_method = &QCompleter::activated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QCompleter::*)(const QModelIndex & );
            if (_q_method_type _q_method = &QCompleter::activated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QCompleter::*)(const QString & );
            if (_q_method_type _q_method = &QCompleter::highlighted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QCompleter::*)(const QModelIndex & );
            if (_q_method_type _q_method = &QCompleter::highlighted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->completionPrefix(); break;
        case 1: *reinterpret_cast< ModelSorting*>(_v) = _t->modelSorting(); break;
        case 2: *reinterpret_cast< Qt::MatchFlags*>(_v) = _t->filterMode(); break;
        case 3: *reinterpret_cast< CompletionMode*>(_v) = _t->completionMode(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->completionColumn(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->completionRole(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->maxVisibleItems(); break;
        case 7: *reinterpret_cast< Qt::CaseSensitivity*>(_v) = _t->caseSensitivity(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->wrapAround(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCompletionPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setModelSorting(*reinterpret_cast< ModelSorting*>(_v)); break;
        case 2: _t->setFilterMode(*reinterpret_cast< Qt::MatchFlags*>(_v)); break;
        case 3: _t->setCompletionMode(*reinterpret_cast< CompletionMode*>(_v)); break;
        case 4: _t->setCompletionColumn(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCompletionRole(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMaxVisibleItems(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setCaseSensitivity(*reinterpret_cast< Qt::CaseSensitivity*>(_v)); break;
        case 8: _t->setWrapAround(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QCompleterE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QCompleter::activated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCompleter::activated(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCompleter::highlighted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCompleter::highlighted(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
