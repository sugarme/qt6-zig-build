/****************************************************************************
** Meta object code from reading C++ file 'qscroller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/util/qscroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QScrollerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QScrollerE = QtMocHelpers::stringData(
    "QScroller",
    "stateChanged",
    "",
    "QScroller::State",
    "newstate",
    "scrollerPropertiesChanged",
    "QScrollerProperties",
    "setScrollerProperties",
    "prop",
    "scrollTo",
    "pos",
    "scrollTime",
    "ensureVisible",
    "rect",
    "xmargin",
    "ymargin",
    "resendPrepareEvent",
    "state",
    "State",
    "scrollerProperties",
    "Inactive",
    "Pressed",
    "Dragging",
    "Scrolling"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QScrollerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   96, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    4 /* Public */,
       5,    1,   65,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   68,    2, 0x0a,    8 /* Public */,
       9,    1,   71,    2, 0x0a,   10 /* Public */,
       9,    2,   74,    2, 0x0a,   12 /* Public */,
      12,    3,   79,    2, 0x0a,   15 /* Public */,
      12,    4,   86,    2, 0x0a,   19 /* Public */,
      16,    0,   95,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void, QMetaType::QPointF,   10,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,   13,   14,   15,   11,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      17, 0x80000000 | 18, 0x00015009, uint(0), 0,
      19, 0x80000000 | 6, 0x0001510b, uint(1), 0,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    4,  111,

 // enum data: key, value
      20, uint(QScroller::Inactive),
      21, uint(QScroller::Pressed),
      22, uint(QScroller::Dragging),
      23, uint(QScroller::Scrolling),

       0        // eod
};

Q_CONSTINIT const QMetaObject QScroller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN9QScrollerE.offsetsAndSizes,
    qt_meta_data_ZN9QScrollerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QScrollerE_t,
        // property 'state'
        QtPrivate::TypeAndForceComplete<State, std::true_type>,
        // property 'scrollerProperties'
        QtPrivate::TypeAndForceComplete<QScrollerProperties, std::true_type>,
        // enum 'State'
        QtPrivate::TypeAndForceComplete<QScroller::State, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QScroller, std::true_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QScroller::State, std::false_type>,
        // method 'scrollerPropertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QScrollerProperties &, std::false_type>,
        // method 'setScrollerProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QScrollerProperties &, std::false_type>,
        // method 'scrollTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'scrollTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ensureVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'ensureVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resendPrepareEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QScroller *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QScroller::State>>(_a[1]))); break;
        case 1: _t->scrollerPropertiesChanged((*reinterpret_cast< std::add_pointer_t<QScrollerProperties>>(_a[1]))); break;
        case 2: _t->setScrollerProperties((*reinterpret_cast< std::add_pointer_t<QScrollerProperties>>(_a[1]))); break;
        case 3: _t->scrollTo((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 4: _t->scrollTo((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->ensureVisible((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[3]))); break;
        case 6: _t->ensureVisible((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qreal>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->resendPrepareEvent(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QScroller::*)(QScroller::State );
            if (_q_method_type _q_method = &QScroller::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QScroller::*)(const QScrollerProperties & );
            if (_q_method_type _q_method = &QScroller::scrollerPropertiesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QScrollerProperties*>(_v) = _t->scrollerProperties(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setScrollerProperties(*reinterpret_cast< QScrollerProperties*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QScrollerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QScroller::stateChanged(QScroller::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScroller::scrollerPropertiesChanged(const QScrollerProperties & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
