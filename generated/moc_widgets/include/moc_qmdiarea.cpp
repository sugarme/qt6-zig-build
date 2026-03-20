/****************************************************************************
** Meta object code from reading C++ file 'qmdiarea.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qmdiarea.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmdiarea.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QMdiAreaE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8QMdiAreaE = QtMocHelpers::stringData(
    "QMdiArea",
    "subWindowActivated",
    "",
    "QMdiSubWindow*",
    "setActiveSubWindow",
    "window",
    "tileSubWindows",
    "cascadeSubWindows",
    "closeActiveSubWindow",
    "closeAllSubWindows",
    "activateNextSubWindow",
    "activatePreviousSubWindow",
    "setupViewport",
    "QWidget*",
    "viewport",
    "_q_deactivateAllWindows",
    "_q_processWindowStateChanged",
    "Qt::WindowStates",
    "_q_currentTabChanged",
    "_q_closeTab",
    "_q_moveTab",
    "background",
    "activationOrder",
    "WindowOrder",
    "viewMode",
    "ViewMode",
    "documentMode",
    "tabsClosable",
    "tabsMovable",
    "tabShape",
    "QTabWidget::TabShape",
    "tabPosition",
    "QTabWidget::TabPosition",
    "CreationOrder",
    "StackingOrder",
    "ActivationHistoryOrder",
    "SubWindowView",
    "TabbedView"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8QMdiAreaE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       8,  130, // properties
       2,  170, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,  101,    2, 0x0a,   13 /* Public */,
       6,    0,  104,    2, 0x0a,   15 /* Public */,
       7,    0,  105,    2, 0x0a,   16 /* Public */,
       8,    0,  106,    2, 0x0a,   17 /* Public */,
       9,    0,  107,    2, 0x0a,   18 /* Public */,
      10,    0,  108,    2, 0x0a,   19 /* Public */,
      11,    0,  109,    2, 0x0a,   20 /* Public */,
      12,    1,  110,    2, 0x09,   21 /* Protected */,
      15,    0,  113,    2, 0x08,   23 /* Private */,
      16,    2,  114,    2, 0x08,   24 /* Private */,
      18,    1,  119,    2, 0x08,   27 /* Private */,
      19,    1,  122,    2, 0x08,   29 /* Private */,
      20,    2,  125,    2, 0x08,   31 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags, notifyId, revision
      21, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      22, 0x80000000 | 23, 0x0001510b, uint(-1), 0,
      24, 0x80000000 | 25, 0x0001510b, uint(-1), 0,
      26, QMetaType::Bool, 0x00015103, uint(-1), 0,
      27, QMetaType::Bool, 0x00015103, uint(-1), 0,
      28, QMetaType::Bool, 0x00015103, uint(-1), 0,
      29, 0x80000000 | 30, 0x0001510b, uint(-1), 0,
      31, 0x80000000 | 32, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      23,   23, 0x0,    3,  180,
      25,   25, 0x0,    2,  186,

 // enum data: key, value
      33, uint(QMdiArea::CreationOrder),
      34, uint(QMdiArea::StackingOrder),
      35, uint(QMdiArea::ActivationHistoryOrder),
      36, uint(QMdiArea::SubWindowView),
      37, uint(QMdiArea::TabbedView),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN8QMdiAreaE[] = {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QMdiArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ZN8QMdiAreaE.offsetsAndSizes,
    qt_meta_data_ZN8QMdiAreaE,
    qt_static_metacall,
    qt_meta_extradata_ZN8QMdiAreaE,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8QMdiAreaE_t,
        // property 'background'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'activationOrder'
        QtPrivate::TypeAndForceComplete<WindowOrder, std::true_type>,
        // property 'viewMode'
        QtPrivate::TypeAndForceComplete<ViewMode, std::true_type>,
        // property 'documentMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabsClosable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabsMovable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tabShape'
        QtPrivate::TypeAndForceComplete<QTabWidget::TabShape, std::true_type>,
        // property 'tabPosition'
        QtPrivate::TypeAndForceComplete<QTabWidget::TabPosition, std::true_type>,
        // enum 'WindowOrder'
        QtPrivate::TypeAndForceComplete<QMdiArea::WindowOrder, std::true_type>,
        // enum 'ViewMode'
        QtPrivate::TypeAndForceComplete<QMdiArea::ViewMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMdiArea, std::true_type>,
        // method 'subWindowActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMdiSubWindow *, std::false_type>,
        // method 'setActiveSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMdiSubWindow *, std::false_type>,
        // method 'tileSubWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cascadeSubWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeActiveSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeAllSubWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activateNextSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activatePreviousSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupViewport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method '_q_deactivateAllWindows'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_processWindowStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::WindowStates, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::WindowStates, std::false_type>,
        // method '_q_currentTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_closeTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_moveTab'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QMdiArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QMdiArea *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->subWindowActivated((*reinterpret_cast< std::add_pointer_t<QMdiSubWindow*>>(_a[1]))); break;
        case 1: _t->setActiveSubWindow((*reinterpret_cast< std::add_pointer_t<QMdiSubWindow*>>(_a[1]))); break;
        case 2: _t->tileSubWindows(); break;
        case 3: _t->cascadeSubWindows(); break;
        case 4: _t->closeActiveSubWindow(); break;
        case 5: _t->closeAllSubWindows(); break;
        case 6: _t->activateNextSubWindow(); break;
        case 7: _t->activatePreviousSubWindow(); break;
        case 8: _t->setupViewport((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 9: _t->d_func()->_q_deactivateAllWindows(); break;
        case 10: _t->d_func()->_q_processWindowStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::WindowStates>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::WindowStates>>(_a[2]))); break;
        case 11: _t->d_func()->_q_currentTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->d_func()->_q_closeTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->d_func()->_q_moveTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMdiArea::*)(QMdiSubWindow * );
            if (_q_method_type _q_method = &QMdiArea::subWindowActivated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->background(); break;
        case 1: *reinterpret_cast< WindowOrder*>(_v) = _t->activationOrder(); break;
        case 2: *reinterpret_cast< ViewMode*>(_v) = _t->viewMode(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->documentMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->tabsClosable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->tabsMovable(); break;
        case 6: *reinterpret_cast< QTabWidget::TabShape*>(_v) = _t->tabShape(); break;
        case 7: *reinterpret_cast< QTabWidget::TabPosition*>(_v) = _t->tabPosition(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setActivationOrder(*reinterpret_cast< WindowOrder*>(_v)); break;
        case 2: _t->setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 3: _t->setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTabsClosable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setTabsMovable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 7: _t->setTabPosition(*reinterpret_cast< QTabWidget::TabPosition*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMdiArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdiArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8QMdiAreaE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QMdiArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
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
void QMdiArea::subWindowActivated(QMdiSubWindow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
