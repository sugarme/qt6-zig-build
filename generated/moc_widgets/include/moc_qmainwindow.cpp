/****************************************************************************
** Meta object code from reading C++ file 'qmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qmainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QMainWindowE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QMainWindowE = QtMocHelpers::stringData(
    "QMainWindow",
    "iconSizeChanged",
    "",
    "iconSize",
    "toolButtonStyleChanged",
    "Qt::ToolButtonStyle",
    "toolButtonStyle",
    "tabifiedDockWidgetActivated",
    "QDockWidget*",
    "dockWidget",
    "setAnimated",
    "enabled",
    "setDockNestingEnabled",
    "setUnifiedTitleAndToolBarOnMac",
    "set",
    "animated",
    "documentMode",
    "tabShape",
    "QTabWidget::TabShape",
    "dockNestingEnabled",
    "dockOptions",
    "DockOptions",
    "unifiedTitleAndToolBarOnMac",
    "DockOption",
    "AnimatedDocks",
    "AllowNestedDocks",
    "AllowTabbedDocks",
    "ForceTabbedDocks",
    "VerticalTabs",
    "GroupedDragging"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QMainWindowE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       8,   68, // properties
       2,  108, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,   11 /* Public */,
       4,    1,   53,    2, 0x06,   13 /* Public */,
       7,    1,   56,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   59,    2, 0x0a,   17 /* Public */,
      12,    1,   62,    2, 0x0a,   19 /* Public */,
      13,    1,   65,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::QSize, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 5, 0x0001510b, uint(-1), 0,
      15, QMetaType::Bool, 0x00015103, uint(-1), 0,
      16, QMetaType::Bool, 0x00015103, uint(-1), 0,
      17, 0x80000000 | 18, 0x0001510b, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      23,   23, 0x0,    6,  118,
      21,   23, 0x1,    6,  130,

 // enum data: key, value
      24, uint(QMainWindow::AnimatedDocks),
      25, uint(QMainWindow::AllowNestedDocks),
      26, uint(QMainWindow::AllowTabbedDocks),
      27, uint(QMainWindow::ForceTabbedDocks),
      28, uint(QMainWindow::VerticalTabs),
      29, uint(QMainWindow::GroupedDragging),
      24, uint(QMainWindow::AnimatedDocks),
      25, uint(QMainWindow::AllowNestedDocks),
      26, uint(QMainWindow::AllowTabbedDocks),
      27, uint(QMainWindow::ForceTabbedDocks),
      28, uint(QMainWindow::VerticalTabs),
      29, uint(QMainWindow::GroupedDragging),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN11QMainWindowE[] = {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11QMainWindowE.offsetsAndSizes,
    qt_meta_data_ZN11QMainWindowE,
    qt_static_metacall,
    qt_meta_extradata_ZN11QMainWindowE,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QMainWindowE_t,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'toolButtonStyle'
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::true_type>,
        // property 'animated'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'documentMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabShape'
        QtPrivate::TypeAndForceComplete<QTabWidget::TabShape, std::true_type>,
        // property 'dockNestingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dockOptions'
        QtPrivate::TypeAndForceComplete<DockOptions, std::true_type>,
        // property 'unifiedTitleAndToolBarOnMac'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'DockOption'
        QtPrivate::TypeAndForceComplete<QMainWindow::DockOption, std::true_type>,
        // enum 'DockOptions'
        QtPrivate::TypeAndForceComplete<QMainWindow::DockOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMainWindow, std::true_type>,
        // method 'iconSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'toolButtonStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::ToolButtonStyle, std::false_type>,
        // method 'tabifiedDockWidgetActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDockWidget *, std::false_type>,
        // method 'setAnimated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDockNestingEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUnifiedTitleAndToolBarOnMac'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QMainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->iconSizeChanged((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 1: _t->toolButtonStyleChanged((*reinterpret_cast< std::add_pointer_t<Qt::ToolButtonStyle>>(_a[1]))); break;
        case 2: _t->tabifiedDockWidgetActivated((*reinterpret_cast< std::add_pointer_t<QDockWidget*>>(_a[1]))); break;
        case 3: _t->setAnimated((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setDockNestingEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setUnifiedTitleAndToolBarOnMac((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMainWindow::*)(const QSize & );
            if (_q_method_type _q_method = &QMainWindow::iconSizeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QMainWindow::*)(Qt::ToolButtonStyle );
            if (_q_method_type _q_method = &QMainWindow::toolButtonStyleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QMainWindow::*)(QDockWidget * );
            if (_q_method_type _q_method = &QMainWindow::tabifiedDockWidgetActivated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isAnimated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->documentMode(); break;
        case 4: *reinterpret_cast< QTabWidget::TabShape*>(_v) = _t->tabShape(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isDockNestingEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(_t->dockOptions()); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->unifiedTitleAndToolBarOnMac(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: _t->setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: _t->setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 5: _t->setDockNestingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDockOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 7: _t->setUnifiedTitleAndToolBarOnMac(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QMainWindowE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QMainWindow::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMainWindow::tabifiedDockWidgetActivated(QDockWidget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
