/****************************************************************************
** Meta object code from reading C++ file 'qdatawidgetmapper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/itemviews/qdatawidgetmapper.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatawidgetmapper.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QDataWidgetMapperE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17QDataWidgetMapperE = QtMocHelpers::stringData(
    "QDataWidgetMapper",
    "currentIndexChanged",
    "",
    "index",
    "revert",
    "submit",
    "toFirst",
    "toLast",
    "toNext",
    "toPrevious",
    "setCurrentIndex",
    "setCurrentModelIndex",
    "QModelIndex",
    "currentIndex",
    "orientation",
    "Qt::Orientation",
    "submitPolicy",
    "SubmitPolicy",
    "AutoSubmit",
    "ManualSubmit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17QDataWidgetMapperE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   83, // properties
       1,   98, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   71,    2, 0x0a,    7 /* Public */,
       5,    0,   72,    2, 0x0a,    8 /* Public */,
       6,    0,   73,    2, 0x0a,    9 /* Public */,
       7,    0,   74,    2, 0x0a,   10 /* Public */,
       8,    0,   75,    2, 0x0a,   11 /* Public */,
       9,    0,   76,    2, 0x0a,   12 /* Public */,
      10,    1,   77,    2, 0x0a,   13 /* Public */,
      11,    1,   80,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 12,    3,

 // properties: name, type, flags, notifyId, revision
      13, QMetaType::Int, 0x00015103, uint(0), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    2,  103,

 // enum data: key, value
      18, uint(QDataWidgetMapper::AutoSubmit),
      19, uint(QDataWidgetMapper::ManualSubmit),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDataWidgetMapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN17QDataWidgetMapperE.offsetsAndSizes,
    qt_meta_data_ZN17QDataWidgetMapperE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17QDataWidgetMapperE_t,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'submitPolicy'
        QtPrivate::TypeAndForceComplete<SubmitPolicy, std::true_type>,
        // enum 'SubmitPolicy'
        QtPrivate::TypeAndForceComplete<QDataWidgetMapper::SubmitPolicy, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDataWidgetMapper, std::true_type>,
        // method 'currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'revert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'submit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'toFirst'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toLast'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toPrevious'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentModelIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void QDataWidgetMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDataWidgetMapper *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->revert(); break;
        case 2: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->toFirst(); break;
        case 4: _t->toLast(); break;
        case 5: _t->toNext(); break;
        case 6: _t->toPrevious(); break;
        case 7: _t->setCurrentIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setCurrentModelIndex((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDataWidgetMapper::*)(int );
            if (_q_method_type _q_method = &QDataWidgetMapper::currentIndexChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 2: *reinterpret_cast< SubmitPolicy*>(_v) = _t->submitPolicy(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: _t->setSubmitPolicy(*reinterpret_cast< SubmitPolicy*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QDataWidgetMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDataWidgetMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17QDataWidgetMapperE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDataWidgetMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QDataWidgetMapper::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
