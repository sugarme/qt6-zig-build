/****************************************************************************
** Meta object code from reading C++ file 'qgraphicswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/graphicsview/qgraphicswidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicswidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15QGraphicsWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15QGraphicsWidgetE = QtMocHelpers::stringData(
    "QGraphicsWidget",
    "geometryChanged",
    "",
    "layoutChanged",
    "close",
    "palette",
    "font",
    "layoutDirection",
    "Qt::LayoutDirection",
    "size",
    "minimumSize",
    "preferredSize",
    "maximumSize",
    "sizePolicy",
    "focusPolicy",
    "Qt::FocusPolicy",
    "windowFlags",
    "Qt::WindowFlags",
    "windowTitle",
    "geometry",
    "autoFillBackground",
    "layout",
    "QGraphicsLayout*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15QGraphicsWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      14,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,   15 /* Public */,
       3,    0,   33,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   34,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::QPalette, 0x00015103, uint(-1), 0,
       6, QMetaType::QFont, 0x00015103, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510f, uint(-1), 0,
       9, QMetaType::QSizeF, 0x00015003, uint(0), 0,
      10, QMetaType::QSizeF, 0x00015103, uint(-1), 0,
      11, QMetaType::QSizeF, 0x00015103, uint(-1), 0,
      12, QMetaType::QSizeF, 0x00015103, uint(-1), 0,
      13, QMetaType::QSizePolicy, 0x00015103, uint(-1), 0,
      14, 0x80000000 | 15, 0x0001510b, uint(-1), 0,
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, QMetaType::QString, 0x00015103, uint(-1), 0,
      19, QMetaType::QRectF, 0x00015103, uint(0), 0,
      20, QMetaType::Bool, 0x00015103, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_ZN15QGraphicsWidgetE.offsetsAndSizes,
    qt_meta_data_ZN15QGraphicsWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15QGraphicsWidgetE_t,
        // property 'palette'
        QtPrivate::TypeAndForceComplete<QPalette, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'layoutDirection'
        QtPrivate::TypeAndForceComplete<Qt::LayoutDirection, std::true_type>,
        // property 'size'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'minimumSize'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'preferredSize'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'maximumSize'
        QtPrivate::TypeAndForceComplete<QSizeF, std::true_type>,
        // property 'sizePolicy'
        QtPrivate::TypeAndForceComplete<QSizePolicy, std::true_type>,
        // property 'focusPolicy'
        QtPrivate::TypeAndForceComplete<Qt::FocusPolicy, std::true_type>,
        // property 'windowFlags'
        QtPrivate::TypeAndForceComplete<Qt::WindowFlags, std::true_type>,
        // property 'windowTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'geometry'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'autoFillBackground'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'layout'
        QtPrivate::TypeAndForceComplete<QGraphicsLayout*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsWidget, std::true_type>,
        // method 'geometryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'layoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'close'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QGraphicsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->layoutChanged(); break;
        case 2: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QGraphicsWidget::*)();
            if (_q_method_type _q_method = &QGraphicsWidget::geometryChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsWidget::*)();
            if (_q_method_type _q_method = &QGraphicsWidget::layoutChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette*>(_v) = _t->palette(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast< QSizeF*>(_v) = _t->minimumSize(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->preferredSize(); break;
        case 6: *reinterpret_cast< QSizeF*>(_v) = _t->maximumSize(); break;
        case 7: *reinterpret_cast< QSizePolicy*>(_v) = _t->sizePolicy(); break;
        case 8: *reinterpret_cast< Qt::FocusPolicy*>(_v) = _t->focusPolicy(); break;
        case 9: *reinterpret_cast< Qt::WindowFlags*>(_v) = _t->windowFlags(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 11: *reinterpret_cast< QRectF*>(_v) = _t->geometry(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->autoFillBackground(); break;
        case 13: *reinterpret_cast< QGraphicsLayout**>(_v) = _t->layout(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 3: _t->resize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 4: _t->setMinimumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 5: _t->setPreferredSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 6: _t->setMaximumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 7: _t->setSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 8: _t->setFocusPolicy(*reinterpret_cast< Qt::FocusPolicy*>(_v)); break;
        case 9: _t->setWindowFlags(*reinterpret_cast< Qt::WindowFlags*>(_v)); break;
        case 10: _t->setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 12: _t->setAutoFillBackground(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setLayout(*reinterpret_cast< QGraphicsLayout**>(_v)); break;
        default: break;
        }
    }
if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 2: _t->unsetLayoutDirection(); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15QGraphicsWidgetE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
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
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsWidget::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGraphicsWidget::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
