/****************************************************************************
** Meta object code from reading C++ file 'qtoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qtoolbar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QToolBarE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8QToolBarE = QtMocHelpers::stringData(
    "QToolBar",
    "actionTriggered",
    "",
    "QAction*",
    "action",
    "movableChanged",
    "movable",
    "allowedAreasChanged",
    "Qt::ToolBarAreas",
    "allowedAreas",
    "orientationChanged",
    "Qt::Orientation",
    "orientation",
    "iconSizeChanged",
    "iconSize",
    "toolButtonStyleChanged",
    "Qt::ToolButtonStyle",
    "toolButtonStyle",
    "topLevelChanged",
    "topLevel",
    "visibilityChanged",
    "visible",
    "setIconSize",
    "setToolButtonStyle",
    "_q_toggleView",
    "_q_updateIconSize",
    "_q_updateToolButtonStyle",
    "floating",
    "floatable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8QToolBarE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  131, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    8 /* Public */,
       5,    1,   95,    2, 0x06,   10 /* Public */,
       7,    1,   98,    2, 0x06,   12 /* Public */,
      10,    1,  101,    2, 0x06,   14 /* Public */,
      13,    1,  104,    2, 0x06,   16 /* Public */,
      15,    1,  107,    2, 0x06,   18 /* Public */,
      18,    1,  110,    2, 0x06,   20 /* Public */,
      20,    1,  113,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      22,    1,  116,    2, 0x0a,   24 /* Public */,
      23,    1,  119,    2, 0x0a,   26 /* Public */,
      24,    1,  122,    2, 0x08,   28 /* Private */,
      25,    1,  125,    2, 0x08,   30 /* Private */,
      26,    1,  128,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QSize,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QSize,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::Bool, 0x00015103, uint(1), 0,
       9, 0x80000000 | 8, 0x0001510b, uint(2), 0,
      12, 0x80000000 | 11, 0x0001510b, uint(3), 0,
      14, QMetaType::QSize, 0x00015103, uint(4), 0,
      17, 0x80000000 | 16, 0x0001510b, uint(5), 0,
      27, QMetaType::Bool, 0x00015001, uint(-1), 0,
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QToolBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN8QToolBarE.offsetsAndSizes,
    qt_meta_data_ZN8QToolBarE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8QToolBarE_t,
        // property 'movable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allowedAreas'
        QtPrivate::TypeAndForceComplete<Qt::ToolBarAreas, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'toolButtonStyle'
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::true_type>,
        // property 'floating'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'floatable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QToolBar, std::true_type>,
        // method 'actionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'movableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'allowedAreasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ToolBarAreas, std::false_type>,
        // method 'orientationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>,
        // method 'iconSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'toolButtonStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::false_type>,
        // method 'topLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'visibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setIconSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'setToolButtonStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::false_type>,
        // method '_q_toggleView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_updateIconSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method '_q_updateToolButtonStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::false_type>
    >,
    nullptr
} };

void QToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QToolBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->actionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 1: _t->movableChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->allowedAreasChanged((*reinterpret_cast< std::add_pointer_t<Qt::ToolBarAreas>>(_a[1]))); break;
        case 3: _t->orientationChanged((*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        case 4: _t->iconSizeChanged((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 5: _t->toolButtonStyleChanged((*reinterpret_cast< std::add_pointer_t<Qt::ToolButtonStyle>>(_a[1]))); break;
        case 6: _t->topLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setIconSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 9: _t->setToolButtonStyle((*reinterpret_cast< std::add_pointer_t<Qt::ToolButtonStyle>>(_a[1]))); break;
        case 10: _t->d_func()->_q_toggleView((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->d_func()->_q_updateIconSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 12: _t->d_func()->_q_updateToolButtonStyle((*reinterpret_cast< std::add_pointer_t<Qt::ToolButtonStyle>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QToolBar::*)(QAction * );
            if (_q_method_type _q_method = &QToolBar::actionTriggered; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(bool );
            if (_q_method_type _q_method = &QToolBar::movableChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(Qt::ToolBarAreas );
            if (_q_method_type _q_method = &QToolBar::allowedAreasChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(Qt::Orientation );
            if (_q_method_type _q_method = &QToolBar::orientationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(const QSize & );
            if (_q_method_type _q_method = &QToolBar::iconSizeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(Qt::ToolButtonStyle );
            if (_q_method_type _q_method = &QToolBar::toolButtonStyleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(bool );
            if (_q_method_type _q_method = &QToolBar::topLevelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QToolBar::*)(bool );
            if (_q_method_type _q_method = &QToolBar::visibilityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMovable(); break;
        case 1: *reinterpret_cast< Qt::ToolBarAreas*>(_v) = _t->allowedAreas(); break;
        case 2: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 4: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isFloating(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFloatable(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMovable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAllowedAreas(*reinterpret_cast< Qt::ToolBarAreas*>(_v)); break;
        case 2: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 3: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 4: _t->setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 6: _t->setFloatable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8QToolBarE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QToolBar::actionTriggered(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QToolBar::movableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QToolBar::allowedAreasChanged(Qt::ToolBarAreas _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QToolBar::orientationChanged(Qt::Orientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QToolBar::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QToolBar::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QToolBar::topLevelChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QToolBar::visibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
