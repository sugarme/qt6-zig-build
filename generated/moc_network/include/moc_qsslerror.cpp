/****************************************************************************
** Meta object code from reading C++ file 'qsslerror.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/ssl/qsslerror.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsslerror.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QSslErrorE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QSslErrorE = QtMocHelpers::stringData(
    "QSslError",
    "SslError",
    "NoError",
    "UnableToGetIssuerCertificate",
    "UnableToDecryptCertificateSignature",
    "UnableToDecodeIssuerPublicKey",
    "CertificateSignatureFailed",
    "CertificateNotYetValid",
    "CertificateExpired",
    "InvalidNotBeforeField",
    "InvalidNotAfterField",
    "SelfSignedCertificate",
    "SelfSignedCertificateInChain",
    "UnableToGetLocalIssuerCertificate",
    "UnableToVerifyFirstCertificate",
    "CertificateRevoked",
    "InvalidCaCertificate",
    "PathLengthExceeded",
    "InvalidPurpose",
    "CertificateUntrusted",
    "CertificateRejected",
    "SubjectIssuerMismatch",
    "AuthorityIssuerSerialNumberMismatch",
    "NoPeerCertificate",
    "HostNameMismatch",
    "NoSslSupport",
    "CertificateBlacklisted",
    "CertificateStatusUnknown",
    "OcspNoResponseFound",
    "OcspMalformedRequest",
    "OcspMalformedResponse",
    "OcspInternalError",
    "OcspTryLater",
    "OcspSigRequred",
    "OcspUnauthorized",
    "OcspResponseCannotBeTrusted",
    "OcspResponseCertIdUnknown",
    "OcspResponseExpired",
    "OcspStatusUnknown",
    "UnspecifiedError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QSslErrorE[] = {

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
       1,    1, 0x0,   38,   19,

 // enum data: key, value
       2, uint(QSslError::NoError),
       3, uint(QSslError::UnableToGetIssuerCertificate),
       4, uint(QSslError::UnableToDecryptCertificateSignature),
       5, uint(QSslError::UnableToDecodeIssuerPublicKey),
       6, uint(QSslError::CertificateSignatureFailed),
       7, uint(QSslError::CertificateNotYetValid),
       8, uint(QSslError::CertificateExpired),
       9, uint(QSslError::InvalidNotBeforeField),
      10, uint(QSslError::InvalidNotAfterField),
      11, uint(QSslError::SelfSignedCertificate),
      12, uint(QSslError::SelfSignedCertificateInChain),
      13, uint(QSslError::UnableToGetLocalIssuerCertificate),
      14, uint(QSslError::UnableToVerifyFirstCertificate),
      15, uint(QSslError::CertificateRevoked),
      16, uint(QSslError::InvalidCaCertificate),
      17, uint(QSslError::PathLengthExceeded),
      18, uint(QSslError::InvalidPurpose),
      19, uint(QSslError::CertificateUntrusted),
      20, uint(QSslError::CertificateRejected),
      21, uint(QSslError::SubjectIssuerMismatch),
      22, uint(QSslError::AuthorityIssuerSerialNumberMismatch),
      23, uint(QSslError::NoPeerCertificate),
      24, uint(QSslError::HostNameMismatch),
      25, uint(QSslError::NoSslSupport),
      26, uint(QSslError::CertificateBlacklisted),
      27, uint(QSslError::CertificateStatusUnknown),
      28, uint(QSslError::OcspNoResponseFound),
      29, uint(QSslError::OcspMalformedRequest),
      30, uint(QSslError::OcspMalformedResponse),
      31, uint(QSslError::OcspInternalError),
      32, uint(QSslError::OcspTryLater),
      33, uint(QSslError::OcspSigRequred),
      34, uint(QSslError::OcspUnauthorized),
      35, uint(QSslError::OcspResponseCannotBeTrusted),
      36, uint(QSslError::OcspResponseCertIdUnknown),
      37, uint(QSslError::OcspResponseExpired),
      38, uint(QSslError::OcspStatusUnknown),
      39, uint(QSslError::UnspecifiedError),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSslError::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN9QSslErrorE.offsetsAndSizes,
    qt_meta_data_ZN9QSslErrorE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QSslErrorE_t,
        // enum 'SslError'
        QtPrivate::TypeAndForceComplete<QSslError::SslError, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSslError, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
