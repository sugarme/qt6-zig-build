/****************************************************************************
** Meta object code from reading C++ file 'qplatformsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/gui/kernel/qplatformsystemtrayicon.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsystemtrayicon.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23QPlatformSystemTrayIconE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN23QPlatformSystemTrayIconE = QtMocHelpers::stringData(
    "QPlatformSystemTrayIcon",
    "activated",
    "",
    "QPlatformSystemTrayIcon::ActivationReason",
    "reason",
    "contextMenuRequested",
    "globalPos",
    "const QPlatformScreen*",
    "screen",
    "messageClicked",
    "ActivationReason",
    "Unknown",
    "Context",
    "DoubleClick",
    "Trigger",
    "MiddleClick",
    "MessageIcon",
    "NoIcon",
    "Information",
    "Warning",
    "Critical"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN23QPlatformSystemTrayIconE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,
       5,    2,   35,    2, 0x06,    5 /* Public */,
       9,    0,   40,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 7,    6,    8,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    5,   51,
      16,   16, 0x0,    4,   61,

 // enum data: key, value
      11, uint(QPlatformSystemTrayIcon::Unknown),
      12, uint(QPlatformSystemTrayIcon::Context),
      13, uint(QPlatformSystemTrayIcon::DoubleClick),
      14, uint(QPlatformSystemTrayIcon::Trigger),
      15, uint(QPlatformSystemTrayIcon::MiddleClick),
      17, uint(QPlatformSystemTrayIcon::NoIcon),
      18, uint(QPlatformSystemTrayIcon::Information),
      19, uint(QPlatformSystemTrayIcon::Warning),
      20, uint(QPlatformSystemTrayIcon::Critical),

       0        // eod
};

Q_CONSTINIT const QMetaObject QPlatformSystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN23QPlatformSystemTrayIconE.offsetsAndSizes,
    qt_meta_data_ZN23QPlatformSystemTrayIconE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN23QPlatformSystemTrayIconE_t,
        // enum 'ActivationReason'
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::ActivationReason, std::true_type>,
        // enum 'MessageIcon'
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::MessageIcon, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon, std::true_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPlatformSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'contextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPoint, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPlatformScreen *, std::false_type>,
        // method 'messageClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QPlatformSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QPlatformSystemTrayIcon *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< std::add_pointer_t<QPlatformSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 1: _t->contextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QPlatformScreen*>>(_a[2]))); break;
        case 2: _t->messageClicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QPlatformSystemTrayIcon::*)(QPlatformSystemTrayIcon::ActivationReason );
            if (_q_method_type _q_method = &QPlatformSystemTrayIcon::activated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QPlatformSystemTrayIcon::*)(QPoint , const QPlatformScreen * );
            if (_q_method_type _q_method = &QPlatformSystemTrayIcon::contextMenuRequested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QPlatformSystemTrayIcon::*)();
            if (_q_method_type _q_method = &QPlatformSystemTrayIcon::messageClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QPlatformSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN23QPlatformSystemTrayIconE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlatformSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QPlatformSystemTrayIcon::activated(QPlatformSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSystemTrayIcon::contextMenuRequested(QPoint _t1, const QPlatformScreen * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
