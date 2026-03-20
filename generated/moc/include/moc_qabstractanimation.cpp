/****************************************************************************
** Meta object code from reading C++ file 'qabstractanimation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/animation/qabstractanimation.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractanimation.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18QAbstractAnimationE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18QAbstractAnimationE = QtMocHelpers::stringData(
    "QAbstractAnimation",
    "finished",
    "",
    "stateChanged",
    "QAbstractAnimation::State",
    "newState",
    "oldState",
    "currentLoopChanged",
    "currentLoop",
    "directionChanged",
    "QAbstractAnimation::Direction",
    "start",
    "QAbstractAnimation::DeletionPolicy",
    "policy",
    "pause",
    "resume",
    "setPaused",
    "stop",
    "setCurrentTime",
    "msecs",
    "state",
    "State",
    "loopCount",
    "currentTime",
    "direction",
    "Direction",
    "duration",
    "Forward",
    "Backward",
    "Stopped",
    "Paused",
    "Running"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18QAbstractAnimationE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       6,  105, // properties
       2,  135, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    9 /* Public */,
       3,    2,   81,    2, 0x06,   10 /* Public */,
       7,    1,   86,    2, 0x06,   13 /* Public */,
       9,    1,   89,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   92,    2, 0x0a,   17 /* Public */,
      11,    0,   95,    2, 0x2a,   19 /* Public | MethodCloned */,
      14,    0,   96,    2, 0x0a,   20 /* Public */,
      15,    0,   97,    2, 0x0a,   21 /* Public */,
      16,    1,   98,    2, 0x0a,   22 /* Public */,
      17,    0,  101,    2, 0x0a,   24 /* Public */,
      18,    1,  102,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

 // properties: name, type, flags, notifyId, revision
      20, 0x80000000 | 21, 0x02015009, uint(1), 0,
      22, QMetaType::Int, 0x02015103, uint(-1), 0,
      23, QMetaType::Int, 0x02015103, uint(-1), 0,
       8, QMetaType::Int, 0x02015001, uint(2), 0,
      24, 0x80000000 | 25, 0x0201510b, uint(3), 0,
      26, QMetaType::Int, 0x00015001, uint(-1), 0,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,    2,  145,
      21,   21, 0x0,    3,  149,

 // enum data: key, value
      27, uint(QAbstractAnimation::Forward),
      28, uint(QAbstractAnimation::Backward),
      29, uint(QAbstractAnimation::Stopped),
      30, uint(QAbstractAnimation::Paused),
      31, uint(QAbstractAnimation::Running),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractAnimation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN18QAbstractAnimationE.offsetsAndSizes,
    qt_meta_data_ZN18QAbstractAnimationE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18QAbstractAnimationE_t,
        // property 'state'
        QtPrivate::TypeAndForceComplete<State, std::true_type>,
        // property 'loopCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentLoop'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'direction'
        QtPrivate::TypeAndForceComplete<Direction, std::true_type>,
        // property 'duration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'Direction'
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::Direction, std::true_type>,
        // enum 'State'
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::State, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractAnimation, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::State, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::State, std::false_type>,
        // method 'currentLoopChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'directionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::Direction, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractAnimation::DeletionPolicy, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pause'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QAbstractAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QAbstractAnimation *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractAnimation::State>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAbstractAnimation::State>>(_a[2]))); break;
        case 2: _t->currentLoopChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->directionChanged((*reinterpret_cast< std::add_pointer_t<QAbstractAnimation::Direction>>(_a[1]))); break;
        case 4: _t->start((*reinterpret_cast< std::add_pointer_t<QAbstractAnimation::DeletionPolicy>>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->pause(); break;
        case 7: _t->resume(); break;
        case 8: _t->setPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QAbstractAnimation::*)();
            if (_q_method_type _q_method = &QAbstractAnimation::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractAnimation::*)(QAbstractAnimation::State , QAbstractAnimation::State );
            if (_q_method_type _q_method = &QAbstractAnimation::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractAnimation::*)(int );
            if (_q_method_type _q_method = &QAbstractAnimation::currentLoopChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractAnimation::*)(QAbstractAnimation::Direction );
            if (_q_method_type _q_method = &QAbstractAnimation::directionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentLoop(); break;
        case 4: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::BindableProperty) {
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableState(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableLoopCount(); break;
        case 2: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableCurrentTime(); break;
        case 3: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableCurrentLoop(); break;
        case 4: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableDirection(); break;
        default: break;
        }
    }
}

const QMetaObject *QAbstractAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18QAbstractAnimationE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QAbstractAnimation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAbstractAnimation::stateChanged(QAbstractAnimation::State _t1, QAbstractAnimation::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractAnimation::currentLoopChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractAnimation::directionChanged(QAbstractAnimation::Direction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
namespace {
struct qt_meta_tag_ZN16QAnimationDriverE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16QAnimationDriverE = QtMocHelpers::stringData(
    "QAnimationDriver",
    "started",
    "",
    "stopped"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16QAnimationDriverE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    0,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QAnimationDriver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN16QAnimationDriverE.offsetsAndSizes,
    qt_meta_data_ZN16QAnimationDriverE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16QAnimationDriverE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAnimationDriver, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAnimationDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QAnimationDriver *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QAnimationDriver::*)();
            if (_q_method_type _q_method = &QAnimationDriver::started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QAnimationDriver::*)();
            if (_q_method_type _q_method = &QAnimationDriver::stopped; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QAnimationDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAnimationDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16QAnimationDriverE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAnimationDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QAnimationDriver::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAnimationDriver::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
