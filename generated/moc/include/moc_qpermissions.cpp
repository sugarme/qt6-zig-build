/****************************************************************************
** Meta object code from reading C++ file 'qpermissions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/kernel/qpermissions.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpermissions.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19QLocationPermissionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19QLocationPermissionE = QtMocHelpers::stringData(
    "QLocationPermission",
    "Accuracy",
    "Approximate",
    "Precise",
    "Availability",
    "WhenInUse",
    "Always"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19QLocationPermissionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   24,
       4,    4, 0x0,    2,   28,

 // enum data: key, value
       2, uint(QLocationPermission::Approximate),
       3, uint(QLocationPermission::Precise),
       5, uint(QLocationPermission::WhenInUse),
       6, uint(QLocationPermission::Always),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLocationPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN19QLocationPermissionE.offsetsAndSizes,
    qt_meta_data_ZN19QLocationPermissionE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19QLocationPermissionE_t,
        // enum 'Accuracy'
        QtPrivate::TypeAndForceComplete<QLocationPermission::Accuracy, std::true_type>,
        // enum 'Availability'
        QtPrivate::TypeAndForceComplete<QLocationPermission::Availability, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLocationPermission, std::true_type>
    >,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN19QCalendarPermissionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19QCalendarPermissionE = QtMocHelpers::stringData(
    "QCalendarPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19QCalendarPermissionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QCalendarPermission::ReadOnly),
       3, uint(QCalendarPermission::ReadWrite),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCalendarPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN19QCalendarPermissionE.offsetsAndSizes,
    qt_meta_data_ZN19QCalendarPermissionE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19QCalendarPermissionE_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QCalendarPermission::AccessMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCalendarPermission, std::true_type>
    >,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN19QContactsPermissionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19QContactsPermissionE = QtMocHelpers::stringData(
    "QContactsPermission",
    "AccessMode",
    "ReadOnly",
    "ReadWrite"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19QContactsPermissionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   19,

 // enum data: key, value
       2, uint(QContactsPermission::ReadOnly),
       3, uint(QContactsPermission::ReadWrite),

       0        // eod
};

Q_CONSTINIT const QMetaObject QContactsPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN19QContactsPermissionE.offsetsAndSizes,
    qt_meta_data_ZN19QContactsPermissionE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19QContactsPermissionE_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QContactsPermission::AccessMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QContactsPermission, std::true_type>
    >,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN20QBluetoothPermissionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN20QBluetoothPermissionE = QtMocHelpers::stringData(
    "QBluetoothPermission",
    "CommunicationModes",
    "CommunicationMode",
    "Access",
    "Advertise",
    "Default"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN20QBluetoothPermissionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    2, 0x1,    3,   19,

 // enum data: key, value
       3, uint(QBluetoothPermission::Access),
       4, uint(QBluetoothPermission::Advertise),
       5, uint(QBluetoothPermission::Default),

       0        // eod
};

Q_CONSTINIT const QMetaObject QBluetoothPermission::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN20QBluetoothPermissionE.offsetsAndSizes,
    qt_meta_data_ZN20QBluetoothPermissionE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN20QBluetoothPermissionE_t,
        // enum 'CommunicationModes'
        QtPrivate::TypeAndForceComplete<QBluetoothPermission::CommunicationModes, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QBluetoothPermission, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
