/****************************************************************************
** Meta object code from reading C++ file 'qnetworkrequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qnetworkrequest.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkrequest.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15QNetworkRequestE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15QNetworkRequestE = QtMocHelpers::stringData(
    "QNetworkRequest",
    "KnownHeaders",
    "ContentTypeHeader",
    "ContentLengthHeader",
    "LocationHeader",
    "LastModifiedHeader",
    "CookieHeader",
    "SetCookieHeader",
    "ContentDispositionHeader",
    "UserAgentHeader",
    "ServerHeader",
    "IfModifiedSinceHeader",
    "ETagHeader",
    "IfMatchHeader",
    "IfNoneMatchHeader",
    "NumKnownHeaders"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15QNetworkRequestE[] = {

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
       1,    1, 0x0,   14,   19,

 // enum data: key, value
       2, uint(QNetworkRequest::ContentTypeHeader),
       3, uint(QNetworkRequest::ContentLengthHeader),
       4, uint(QNetworkRequest::LocationHeader),
       5, uint(QNetworkRequest::LastModifiedHeader),
       6, uint(QNetworkRequest::CookieHeader),
       7, uint(QNetworkRequest::SetCookieHeader),
       8, uint(QNetworkRequest::ContentDispositionHeader),
       9, uint(QNetworkRequest::UserAgentHeader),
      10, uint(QNetworkRequest::ServerHeader),
      11, uint(QNetworkRequest::IfModifiedSinceHeader),
      12, uint(QNetworkRequest::ETagHeader),
      13, uint(QNetworkRequest::IfMatchHeader),
      14, uint(QNetworkRequest::IfNoneMatchHeader),
      15, uint(QNetworkRequest::NumKnownHeaders),

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkRequest::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN15QNetworkRequestE.offsetsAndSizes,
    qt_meta_data_ZN15QNetworkRequestE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15QNetworkRequestE_t,
        // enum 'KnownHeaders'
        QtPrivate::TypeAndForceComplete<QNetworkRequest::KnownHeaders, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkRequest, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
