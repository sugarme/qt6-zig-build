/****************************************************************************
** Meta object code from reading C++ file 'qnetworkinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/kernel/qnetworkinterface.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkinterface.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QNetworkInterfaceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17QNetworkInterfaceE = QtMocHelpers::stringData(
    "QNetworkInterface",
    "InterfaceFlags",
    "InterfaceFlag",
    "IsUp",
    "IsRunning",
    "CanBroadcast",
    "IsLoopBack",
    "IsPointToPoint",
    "CanMulticast",
    "InterfaceType",
    "Loopback",
    "Virtual",
    "Ethernet",
    "Slip",
    "CanBus",
    "Ppp",
    "Fddi",
    "Wifi",
    "Ieee80211",
    "Phonet",
    "Ieee802154",
    "SixLoWPAN",
    "Ieee80216",
    "Ieee1394",
    "Unknown"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17QNetworkInterfaceE[] = {

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
       1,    2, 0x1,    6,   24,
       9,    9, 0x0,   15,   36,

 // enum data: key, value
       3, uint(QNetworkInterface::IsUp),
       4, uint(QNetworkInterface::IsRunning),
       5, uint(QNetworkInterface::CanBroadcast),
       6, uint(QNetworkInterface::IsLoopBack),
       7, uint(QNetworkInterface::IsPointToPoint),
       8, uint(QNetworkInterface::CanMulticast),
      10, uint(QNetworkInterface::Loopback),
      11, uint(QNetworkInterface::Virtual),
      12, uint(QNetworkInterface::Ethernet),
      13, uint(QNetworkInterface::Slip),
      14, uint(QNetworkInterface::CanBus),
      15, uint(QNetworkInterface::Ppp),
      16, uint(QNetworkInterface::Fddi),
      17, uint(QNetworkInterface::Wifi),
      18, uint(QNetworkInterface::Ieee80211),
      19, uint(QNetworkInterface::Phonet),
      20, uint(QNetworkInterface::Ieee802154),
      21, uint(QNetworkInterface::SixLoWPAN),
      22, uint(QNetworkInterface::Ieee80216),
      23, uint(QNetworkInterface::Ieee1394),
      24, uint(QNetworkInterface::Unknown),

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkInterface::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN17QNetworkInterfaceE.offsetsAndSizes,
    qt_meta_data_ZN17QNetworkInterfaceE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17QNetworkInterfaceE_t,
        // enum 'InterfaceFlags'
        QtPrivate::TypeAndForceComplete<QNetworkInterface::InterfaceFlags, std::true_type>,
        // enum 'InterfaceType'
        QtPrivate::TypeAndForceComplete<QNetworkInterface::InterfaceType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkInterface, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
