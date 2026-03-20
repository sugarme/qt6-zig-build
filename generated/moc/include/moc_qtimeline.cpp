/****************************************************************************
** Meta object code from reading C++ file 'qtimeline.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/tools/qtimeline.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtimeline.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QTimeLineE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QTimeLineE = QtMocHelpers::stringData(
    "QTimeLine",
    "valueChanged",
    "",
    "x",
    "frameChanged",
    "stateChanged",
    "QTimeLine::State",
    "newState",
    "finished",
    "start",
    "resume",
    "stop",
    "setPaused",
    "paused",
    "setCurrentTime",
    "msec",
    "toggleDirection",
    "duration",
    "updateInterval",
    "currentTime",
    "direction",
    "Direction",
    "loopCount",
    "easingCurve",
    "QEasingCurve"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QTimeLineE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    7 /* Public */,
       4,    1,   77,    2, 0x06,    9 /* Public */,
       5,    1,   80,    2, 0x06,   11 /* Public */,
       8,    0,   83,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   84,    2, 0x0a,   14 /* Public */,
      10,    0,   85,    2, 0x0a,   15 /* Public */,
      11,    0,   86,    2, 0x0a,   16 /* Public */,
      12,    1,   87,    2, 0x0a,   17 /* Public */,
      14,    1,   90,    2, 0x0a,   19 /* Public */,
      16,    0,   93,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      17, QMetaType::Int, 0x02015103, uint(-1), 0,
      18, QMetaType::Int, 0x02015103, uint(-1), 0,
      19, QMetaType::Int, 0x02015103, uint(-1), 0,
      20, 0x80000000 | 21, 0x0201510b, uint(-1), 0,
      22, QMetaType::Int, 0x02015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0201510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTimeLine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN9QTimeLineE.offsetsAndSizes,
    qt_meta_data_ZN9QTimeLineE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QTimeLineE_t,
        // property 'duration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'updateInterval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'direction'
        QtPrivate::TypeAndForceComplete<Direction, std::true_type>,
        // property 'loopCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'easingCurve'
        QtPrivate::TypeAndForceComplete<QEasingCurve, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTimeLine, std::true_type>,
        // method 'valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'frameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTimeLine::State, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'toggleDirection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QTimeLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTimeLine *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])), QPrivateSignal()); break;
        case 1: _t->frameChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])), QPrivateSignal()); break;
        case 2: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QTimeLine::State>>(_a[1])), QPrivateSignal()); break;
        case 3: _t->finished(QPrivateSignal()); break;
        case 4: _t->start(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        case 7: _t->setPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->toggleDirection(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTimeLine::*)(qreal , QPrivateSignal);
            if (_q_method_type _q_method = &QTimeLine::valueChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QTimeLine::*)(int , QPrivateSignal);
            if (_q_method_type _q_method = &QTimeLine::frameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QTimeLine::*)(QTimeLine::State , QPrivateSignal);
            if (_q_method_type _q_method = &QTimeLine::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QTimeLine::*)(QPrivateSignal);
            if (_q_method_type _q_method = &QTimeLine::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->updateInterval(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 5: *reinterpret_cast< QEasingCurve*>(_v) = _t->easingCurve(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUpdateInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 4: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setEasingCurve(*reinterpret_cast< QEasingCurve*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::BindableProperty) {
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableDuration(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableUpdateInterval(); break;
        case 2: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableCurrentTime(); break;
        case 3: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableDirection(); break;
        case 4: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableLoopCount(); break;
        case 5: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableEasingCurve(); break;
        default: break;
        }
    }
}

const QMetaObject *QTimeLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTimeLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QTimeLineE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTimeLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
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
void QTimeLine::valueChanged(qreal _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTimeLine::frameChanged(int _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTimeLine::stateChanged(QTimeLine::State _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTimeLine::finished(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
