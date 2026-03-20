/****************************************************************************
** Meta object code from reading C++ file 'qgesture.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/kernel/qgesture.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgesture.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8QGestureE = QtMocHelpers::stringData(
    "QGesture",
    "state",
    "Qt::GestureState",
    "gestureType",
    "Qt::GestureType",
    "gestureCancelPolicy",
    "QGesture::GestureCancelPolicy",
    "hotSpot",
    "hasHotSpot"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8QGestureE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, 0x80000000 | 2, 0x00015009, uint(-1), 0,
       3, 0x80000000 | 4, 0x00015009, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, QMetaType::QPointF, 0x00015107, uint(-1), 0,
       8, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8QGestureE.offsetsAndSizes,
    qt_meta_data_ZN8QGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8QGestureE_t,
        // property 'state'
        QtPrivate::TypeAndForceComplete<Qt::GestureState, std::true_type>,
        // property 'gestureType'
        QtPrivate::TypeAndForceComplete<Qt::GestureType, std::true_type>,
        // property 'gestureCancelPolicy'
        QtPrivate::TypeAndForceComplete<QGesture::GestureCancelPolicy, std::true_type>,
        // property 'hotSpot'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'hasHotSpot'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGesture, std::true_type>
    >,
    nullptr
} };

void QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGesture *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture::GestureCancelPolicy >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureState >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureType >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::GestureState*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Qt::GestureType*>(_v) = _t->gestureType(); break;
        case 2: *reinterpret_cast< QGesture::GestureCancelPolicy*>(_v) = _t->gestureCancelPolicy(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->hotSpot(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasHotSpot(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setGestureCancelPolicy(*reinterpret_cast< QGesture::GestureCancelPolicy*>(_v)); break;
        case 3: _t->setHotSpot(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    }
if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 3: _t->unsetHotSpot(); break;
        default: break;
        }
    }
}

const QMetaObject *QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8QGestureE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11QPanGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QPanGestureE = QtMocHelpers::stringData(
    "QPanGesture",
    "lastOffset",
    "offset",
    "delta",
    "acceleration",
    "horizontalVelocity",
    "verticalVelocity"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QPanGestureE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QPointF, 0x00015103, uint(-1), 0,
       2, QMetaType::QPointF, 0x00015103, uint(-1), 0,
       3, QMetaType::QPointF, 0x00005001, uint(-1), 0,
       4, QMetaType::QReal, 0x00015103, uint(-1), 0,
       5, QMetaType::QReal, 0x00015103, uint(-1), 0,
       6, QMetaType::QReal, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPanGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QGesture::staticMetaObject>(),
    qt_meta_stringdata_ZN11QPanGestureE.offsetsAndSizes,
    qt_meta_data_ZN11QPanGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QPanGestureE_t,
        // property 'lastOffset'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'offset'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'delta'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'acceleration'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalVelocity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'verticalVelocity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPanGesture, std::true_type>
    >,
    nullptr
} };

void QPanGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QPanGesture *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->lastOffset(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->offset(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->delta(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->acceleration(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->QPanGesture::d_func()->horizontalVelocity(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->QPanGesture::d_func()->verticalVelocity(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLastOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->QPanGesture::d_func()->setHorizontalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->QPanGesture::d_func()->setVerticalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QPanGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPanGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QPanGestureE.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int QPanGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13QPinchGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QPinchGestureE = QtMocHelpers::stringData(
    "QPinchGesture",
    "totalChangeFlags",
    "ChangeFlags",
    "changeFlags",
    "totalScaleFactor",
    "lastScaleFactor",
    "scaleFactor",
    "totalRotationAngle",
    "lastRotationAngle",
    "rotationAngle",
    "startCenterPoint",
    "lastCenterPoint",
    "centerPoint",
    "ChangeFlag",
    "ScaleFactorChanged",
    "RotationAngleChanged",
    "CenterPointChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QPinchGestureE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       2,   69, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       3, 0x80000000 | 2, 0x0001510b, uint(-1), 0,
       4, QMetaType::QReal, 0x00015103, uint(-1), 0,
       5, QMetaType::QReal, 0x00015103, uint(-1), 0,
       6, QMetaType::QReal, 0x00015103, uint(-1), 0,
       7, QMetaType::QReal, 0x00015103, uint(-1), 0,
       8, QMetaType::QReal, 0x00015103, uint(-1), 0,
       9, QMetaType::QReal, 0x00015103, uint(-1), 0,
      10, QMetaType::QPointF, 0x00015103, uint(-1), 0,
      11, QMetaType::QPointF, 0x00015103, uint(-1), 0,
      12, QMetaType::QPointF, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   79,
       2,   13, 0x1,    3,   85,

 // enum data: key, value
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPinchGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QGesture::staticMetaObject>(),
    qt_meta_stringdata_ZN13QPinchGestureE.offsetsAndSizes,
    qt_meta_data_ZN13QPinchGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QPinchGestureE_t,
        // property 'totalChangeFlags'
        QtPrivate::TypeAndForceComplete<ChangeFlags, std::true_type>,
        // property 'changeFlags'
        QtPrivate::TypeAndForceComplete<ChangeFlags, std::true_type>,
        // property 'totalScaleFactor'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'lastScaleFactor'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'scaleFactor'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'totalRotationAngle'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'lastRotationAngle'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'rotationAngle'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'startCenterPoint'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'lastCenterPoint'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'centerPoint'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // enum 'ChangeFlag'
        QtPrivate::TypeAndForceComplete<QPinchGesture::ChangeFlag, std::true_type>,
        // enum 'ChangeFlags'
        QtPrivate::TypeAndForceComplete<QPinchGesture::ChangeFlags, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPinchGesture, std::true_type>
    >,
    nullptr
} };

void QPinchGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QPinchGesture *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->totalChangeFlags()); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->changeFlags()); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->totalScaleFactor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->lastScaleFactor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->scaleFactor(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->totalRotationAngle(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->lastRotationAngle(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->rotationAngle(); break;
        case 8: *reinterpret_cast< QPointF*>(_v) = _t->startCenterPoint(); break;
        case 9: *reinterpret_cast< QPointF*>(_v) = _t->lastCenterPoint(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = _t->centerPoint(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTotalChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setTotalScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLastScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setTotalRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setLastRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setStartCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 9: _t->setLastCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 10: _t->setCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QPinchGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPinchGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QPinchGestureE.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int QPinchGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN13QSwipeGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QSwipeGestureE = QtMocHelpers::stringData(
    "QSwipeGesture",
    "horizontalDirection",
    "SwipeDirection",
    "verticalDirection",
    "swipeAngle",
    "velocity",
    "NoDirection",
    "Left",
    "Right",
    "Up",
    "Down"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QSwipeGestureE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, 0x80000000 | 2, 0x00005009, uint(-1), 0,
       3, 0x80000000 | 2, 0x00005009, uint(-1), 0,
       4, QMetaType::QReal, 0x00015103, uint(-1), 0,
       5, QMetaType::QReal, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,    5,   39,

 // enum data: key, value
       6, uint(QSwipeGesture::NoDirection),
       7, uint(QSwipeGesture::Left),
       8, uint(QSwipeGesture::Right),
       9, uint(QSwipeGesture::Up),
      10, uint(QSwipeGesture::Down),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSwipeGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QGesture::staticMetaObject>(),
    qt_meta_stringdata_ZN13QSwipeGestureE.offsetsAndSizes,
    qt_meta_data_ZN13QSwipeGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QSwipeGestureE_t,
        // property 'horizontalDirection'
        QtPrivate::TypeAndForceComplete<SwipeDirection, std::true_type>,
        // property 'verticalDirection'
        QtPrivate::TypeAndForceComplete<SwipeDirection, std::true_type>,
        // property 'swipeAngle'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'velocity'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // enum 'SwipeDirection'
        QtPrivate::TypeAndForceComplete<QSwipeGesture::SwipeDirection, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSwipeGesture, std::true_type>
    >,
    nullptr
} };

void QSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QSwipeGesture *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SwipeDirection*>(_v) = _t->horizontalDirection(); break;
        case 1: *reinterpret_cast< SwipeDirection*>(_v) = _t->verticalDirection(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->swipeAngle(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->QSwipeGesture::d_func()->velocity(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSwipeAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->QSwipeGesture::d_func()->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QSwipeGestureE.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int QSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN11QTapGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QTapGestureE = QtMocHelpers::stringData(
    "QTapGesture",
    "position"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QTapGestureE[] = {

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
       1, QMetaType::QPointF, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTapGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QGesture::staticMetaObject>(),
    qt_meta_stringdata_ZN11QTapGestureE.offsetsAndSizes,
    qt_meta_data_ZN11QTapGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QTapGestureE_t,
        // property 'position'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTapGesture, std::true_type>
    >,
    nullptr
} };

void QTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTapGesture *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QTapGestureE.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int QTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
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
namespace {
struct qt_meta_tag_ZN18QTapAndHoldGestureE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18QTapAndHoldGestureE = QtMocHelpers::stringData(
    "QTapAndHoldGesture",
    "position"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18QTapAndHoldGestureE[] = {

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
       1, QMetaType::QPointF, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTapAndHoldGesture::staticMetaObject = { {
    QMetaObject::SuperData::link<QGesture::staticMetaObject>(),
    qt_meta_stringdata_ZN18QTapAndHoldGestureE.offsetsAndSizes,
    qt_meta_data_ZN18QTapAndHoldGestureE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18QTapAndHoldGestureE_t,
        // property 'position'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTapAndHoldGesture, std::true_type>
    >,
    nullptr
} };

void QTapAndHoldGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTapAndHoldGesture *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTapAndHoldGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapAndHoldGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18QTapAndHoldGestureE.stringdata0))
        return static_cast<void*>(this);
    return QGesture::qt_metacast(_clname);
}

int QTapAndHoldGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
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
