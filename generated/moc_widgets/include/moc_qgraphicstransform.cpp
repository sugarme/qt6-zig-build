/****************************************************************************
** Meta object code from reading C++ file 'qgraphicstransform.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/graphicsview/qgraphicstransform.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicstransform.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18QGraphicsTransformE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18QGraphicsTransformE = QtMocHelpers::stringData(
    "QGraphicsTransform",
    "update",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18QGraphicsTransformE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsTransform::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN18QGraphicsTransformE.offsetsAndSizes,
    qt_meta_data_ZN18QGraphicsTransformE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18QGraphicsTransformE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsTransform, std::true_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsTransform *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QGraphicsTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18QGraphicsTransformE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGraphicsTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN14QGraphicsScaleE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QGraphicsScaleE = QtMocHelpers::stringData(
    "QGraphicsScale",
    "originChanged",
    "",
    "xScaleChanged",
    "yScaleChanged",
    "zScaleChanged",
    "scaleChanged",
    "origin",
    "xScale",
    "yScale",
    "zScale"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QGraphicsScaleE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    5 /* Public */,
       3,    0,   45,    2, 0x06,    6 /* Public */,
       4,    0,   46,    2, 0x06,    7 /* Public */,
       5,    0,   47,    2, 0x06,    8 /* Public */,
       6,    0,   48,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       7, QMetaType::QVector3D, 0x00015103, uint(0), 0,
       8, QMetaType::QReal, 0x00015103, uint(1), 0,
       9, QMetaType::QReal, 0x00015103, uint(2), 0,
      10, QMetaType::QReal, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsScale::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTransform::staticMetaObject>(),
    qt_meta_stringdata_ZN14QGraphicsScaleE.offsetsAndSizes,
    qt_meta_data_ZN14QGraphicsScaleE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14QGraphicsScaleE_t,
        // property 'origin'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // property 'xScale'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'yScale'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'zScale'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsScale, std::true_type>,
        // method 'originChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xScaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yScaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zScaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scaleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsScale *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->xScaleChanged(); break;
        case 2: _t->yScaleChanged(); break;
        case 3: _t->zScaleChanged(); break;
        case 4: _t->scaleChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QGraphicsScale::*)();
            if (_q_method_type _q_method = &QGraphicsScale::originChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScale::*)();
            if (_q_method_type _q_method = &QGraphicsScale::xScaleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScale::*)();
            if (_q_method_type _q_method = &QGraphicsScale::yScaleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScale::*)();
            if (_q_method_type _q_method = &QGraphicsScale::zScaleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScale::*)();
            if (_q_method_type _q_method = &QGraphicsScale::scaleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xScale(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yScale(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->zScale(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setXScale(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYScale(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setZScale(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QGraphicsScaleE.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTransform::qt_metacast(_clname);
}

int QGraphicsScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsScale::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGraphicsScale::xScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGraphicsScale::yScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGraphicsScale::zScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGraphicsScale::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
namespace {
struct qt_meta_tag_ZN17QGraphicsRotationE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17QGraphicsRotationE = QtMocHelpers::stringData(
    "QGraphicsRotation",
    "originChanged",
    "",
    "angleChanged",
    "axisChanged",
    "origin",
    "angle",
    "axis"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17QGraphicsRotationE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    4 /* Public */,
       3,    0,   33,    2, 0x06,    5 /* Public */,
       4,    0,   34,    2, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::QVector3D, 0x00015103, uint(0), 0,
       6, QMetaType::QReal, 0x00015103, uint(1), 0,
       7, QMetaType::QVector3D, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsRotation::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsTransform::staticMetaObject>(),
    qt_meta_stringdata_ZN17QGraphicsRotationE.offsetsAndSizes,
    qt_meta_data_ZN17QGraphicsRotationE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17QGraphicsRotationE_t,
        // property 'origin'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // property 'angle'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'axis'
        QtPrivate::TypeAndForceComplete<QVector3D, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsRotation, std::true_type>,
        // method 'originChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'angleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'axisChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsRotation *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->angleChanged(); break;
        case 2: _t->axisChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QGraphicsRotation::*)();
            if (_q_method_type _q_method = &QGraphicsRotation::originChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsRotation::*)();
            if (_q_method_type _q_method = &QGraphicsRotation::angleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsRotation::*)();
            if (_q_method_type _q_method = &QGraphicsRotation::axisChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->axis(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAxis(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17QGraphicsRotationE.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTransform::qt_metacast(_clname);
}

int QGraphicsRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTransform::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
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
void QGraphicsRotation::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGraphicsRotation::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGraphicsRotation::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
