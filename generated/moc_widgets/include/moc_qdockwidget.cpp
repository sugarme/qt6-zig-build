/****************************************************************************
** Meta object code from reading C++ file 'qdockwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qdockwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdockwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QDockWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QDockWidgetE = QtMocHelpers::stringData(
    "QDockWidget",
    "featuresChanged",
    "",
    "QDockWidget::DockWidgetFeatures",
    "features",
    "topLevelChanged",
    "topLevel",
    "allowedAreasChanged",
    "Qt::DockWidgetAreas",
    "allowedAreas",
    "visibilityChanged",
    "visible",
    "dockLocationChanged",
    "Qt::DockWidgetArea",
    "area",
    "floating",
    "DockWidgetFeatures",
    "windowTitle",
    "DockWidgetFeature",
    "DockWidgetClosable",
    "DockWidgetMovable",
    "DockWidgetFloatable",
    "DockWidgetVerticalTitleBar",
    "DockWidgetFeatureMask",
    "NoDockWidgetFeatures",
    "Reserved"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QDockWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   59, // properties
       1,   79, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    6 /* Public */,
       5,    1,   47,    2, 0x06,    8 /* Public */,
       7,    1,   50,    2, 0x06,   10 /* Public */,
      10,    1,   53,    2, 0x06,   12 /* Public */,
      12,    1,   56,    2, 0x06,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // properties: name, type, flags, notifyId, revision
      15, QMetaType::Bool, 0x00015103, uint(1), 0,
       4, 0x80000000 | 16, 0x0001510b, uint(0), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(2), 0,
      17, QMetaType::QString, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      16,   18, 0x1,    7,   84,

 // enum data: key, value
      19, uint(QDockWidget::DockWidgetClosable),
      20, uint(QDockWidget::DockWidgetMovable),
      21, uint(QDockWidget::DockWidgetFloatable),
      22, uint(QDockWidget::DockWidgetVerticalTitleBar),
      23, uint(QDockWidget::DockWidgetFeatureMask),
      24, uint(QDockWidget::NoDockWidgetFeatures),
      25, uint(QDockWidget::Reserved),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDockWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11QDockWidgetE.offsetsAndSizes,
    qt_meta_data_ZN11QDockWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QDockWidgetE_t,
        // property 'floating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'features'
        QtPrivate::TypeAndForceComplete<DockWidgetFeatures, std::true_type>,
        // property 'allowedAreas'
        QtPrivate::TypeAndForceComplete<Qt::DockWidgetAreas, std::true_type>,
        // property 'windowTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'DockWidgetFeatures'
        QtPrivate::TypeAndForceComplete<QDockWidget::DockWidgetFeatures, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDockWidget, std::true_type>,
        // method 'featuresChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDockWidget::DockWidgetFeatures, std::false_type>,
        // method 'topLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'allowedAreasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::DockWidgetAreas, std::false_type>,
        // method 'visibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'dockLocationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::DockWidgetArea, std::false_type>
    >,
    nullptr
} };

void QDockWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDockWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->featuresChanged((*reinterpret_cast< std::add_pointer_t<QDockWidget::DockWidgetFeatures>>(_a[1]))); break;
        case 1: _t->topLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->allowedAreasChanged((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetAreas>>(_a[1]))); break;
        case 3: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->dockLocationChanged((*reinterpret_cast< std::add_pointer_t<Qt::DockWidgetArea>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDockWidget::*)(QDockWidget::DockWidgetFeatures );
            if (_q_method_type _q_method = &QDockWidget::featuresChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QDockWidget::*)(bool );
            if (_q_method_type _q_method = &QDockWidget::topLevelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QDockWidget::*)(Qt::DockWidgetAreas );
            if (_q_method_type _q_method = &QDockWidget::allowedAreasChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QDockWidget::*)(bool );
            if (_q_method_type _q_method = &QDockWidget::visibilityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QDockWidget::*)(Qt::DockWidgetArea );
            if (_q_method_type _q_method = &QDockWidget::dockLocationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isFloating(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->features()); break;
        case 2: *reinterpret_cast< Qt::DockWidgetAreas*>(_v) = _t->allowedAreas(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFloating(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFeatures(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setAllowedAreas(*reinterpret_cast< Qt::DockWidgetAreas*>(_v)); break;
        case 3: _t->setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QDockWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDockWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QDockWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDockWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QDockWidget::featuresChanged(QDockWidget::DockWidgetFeatures _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDockWidget::topLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDockWidget::allowedAreasChanged(Qt::DockWidgetAreas _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDockWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDockWidget::dockLocationChanged(Qt::DockWidgetArea _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
