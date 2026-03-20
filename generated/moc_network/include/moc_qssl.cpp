/****************************************************************************
** Meta object code from reading C++ file 'qssl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/ssl/qssl.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qssl.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QSslE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN4QSslE = QtMocHelpers::stringData(
    "QSsl",
    "KeyType",
    "PrivateKey",
    "PublicKey",
    "EncodingFormat",
    "Pem",
    "Der",
    "KeyAlgorithm",
    "Opaque",
    "Rsa",
    "Dsa",
    "Ec",
    "Dh",
    "AlternativeNameEntryType",
    "EmailEntry",
    "DnsEntry",
    "IpAddressEntry",
    "SslProtocol",
    "TlsV1_0",
    "TlsV1_1",
    "TlsV1_2",
    "AnyProtocol",
    "SecureProtocols",
    "TlsV1_0OrLater",
    "TlsV1_1OrLater",
    "TlsV1_2OrLater",
    "DtlsV1_0",
    "DtlsV1_0OrLater",
    "DtlsV1_2",
    "DtlsV1_2OrLater",
    "TlsV1_3",
    "TlsV1_3OrLater",
    "UnknownProtocol",
    "SslOption",
    "SslOptionDisableEmptyFragments",
    "SslOptionDisableSessionTickets",
    "SslOptionDisableCompression",
    "SslOptionDisableServerNameIndication",
    "SslOptionDisableLegacyRenegotiation",
    "SslOptionDisableSessionSharing",
    "SslOptionDisableSessionPersistence",
    "SslOptionDisableServerCipherPreference",
    "AlertLevel",
    "Warning",
    "Fatal",
    "Unknown",
    "AlertType",
    "CloseNotify",
    "UnexpectedMessage",
    "BadRecordMac",
    "RecordOverflow",
    "DecompressionFailure",
    "HandshakeFailure",
    "NoCertificate",
    "BadCertificate",
    "UnsupportedCertificate",
    "CertificateRevoked",
    "CertificateExpired",
    "CertificateUnknown",
    "IllegalParameter",
    "UnknownCa",
    "AccessDenied",
    "DecodeError",
    "DecryptError",
    "ExportRestriction",
    "ProtocolVersion",
    "InsufficientSecurity",
    "InternalError",
    "InappropriateFallback",
    "UserCancelled",
    "NoRenegotiation",
    "MissingExtension",
    "UnsupportedExtension",
    "CertificateUnobtainable",
    "UnrecognizedName",
    "BadCertificateStatusResponse",
    "BadCertificateHashValue",
    "UnknownPskIdentity",
    "CertificateRequired",
    "NoApplicationProtocol",
    "UnknownAlertMessage",
    "ImplementedClass",
    "Key",
    "Certificate",
    "Socket",
    "DiffieHellman",
    "EllipticCurve",
    "Dtls",
    "DtlsCookie",
    "SupportedFeature",
    "CertificateVerification",
    "ClientSideAlpn",
    "ServerSideAlpn",
    "Ocsp",
    "Psk",
    "SessionTicket",
    "Alerts"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN4QSslE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
      10,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   64,
       4,    4, 0x0,    2,   68,
       7,    7, 0x0,    5,   72,
      13,   13, 0x0,    3,   82,
      17,   17, 0x0,   15,   88,
      33,   33, 0x0,    8,  118,
      42,   42, 0x2,    3,  134,
      46,   46, 0x2,   34,  140,
      81,   81, 0x2,    7,  208,
      89,   89, 0x2,    7,  222,

 // enum data: key, value
       2, uint(QSsl::PrivateKey),
       3, uint(QSsl::PublicKey),
       5, uint(QSsl::Pem),
       6, uint(QSsl::Der),
       8, uint(QSsl::Opaque),
       9, uint(QSsl::Rsa),
      10, uint(QSsl::Dsa),
      11, uint(QSsl::Ec),
      12, uint(QSsl::Dh),
      14, uint(QSsl::EmailEntry),
      15, uint(QSsl::DnsEntry),
      16, uint(QSsl::IpAddressEntry),
      18, uint(QSsl::TlsV1_0),
      19, uint(QSsl::TlsV1_1),
      20, uint(QSsl::TlsV1_2),
      21, uint(QSsl::AnyProtocol),
      22, uint(QSsl::SecureProtocols),
      23, uint(QSsl::TlsV1_0OrLater),
      24, uint(QSsl::TlsV1_1OrLater),
      25, uint(QSsl::TlsV1_2OrLater),
      26, uint(QSsl::DtlsV1_0),
      27, uint(QSsl::DtlsV1_0OrLater),
      28, uint(QSsl::DtlsV1_2),
      29, uint(QSsl::DtlsV1_2OrLater),
      30, uint(QSsl::TlsV1_3),
      31, uint(QSsl::TlsV1_3OrLater),
      32, uint(QSsl::UnknownProtocol),
      34, uint(QSsl::SslOptionDisableEmptyFragments),
      35, uint(QSsl::SslOptionDisableSessionTickets),
      36, uint(QSsl::SslOptionDisableCompression),
      37, uint(QSsl::SslOptionDisableServerNameIndication),
      38, uint(QSsl::SslOptionDisableLegacyRenegotiation),
      39, uint(QSsl::SslOptionDisableSessionSharing),
      40, uint(QSsl::SslOptionDisableSessionPersistence),
      41, uint(QSsl::SslOptionDisableServerCipherPreference),
      43, uint(QSsl::AlertLevel::Warning),
      44, uint(QSsl::AlertLevel::Fatal),
      45, uint(QSsl::AlertLevel::Unknown),
      47, uint(QSsl::AlertType::CloseNotify),
      48, uint(QSsl::AlertType::UnexpectedMessage),
      49, uint(QSsl::AlertType::BadRecordMac),
      50, uint(QSsl::AlertType::RecordOverflow),
      51, uint(QSsl::AlertType::DecompressionFailure),
      52, uint(QSsl::AlertType::HandshakeFailure),
      53, uint(QSsl::AlertType::NoCertificate),
      54, uint(QSsl::AlertType::BadCertificate),
      55, uint(QSsl::AlertType::UnsupportedCertificate),
      56, uint(QSsl::AlertType::CertificateRevoked),
      57, uint(QSsl::AlertType::CertificateExpired),
      58, uint(QSsl::AlertType::CertificateUnknown),
      59, uint(QSsl::AlertType::IllegalParameter),
      60, uint(QSsl::AlertType::UnknownCa),
      61, uint(QSsl::AlertType::AccessDenied),
      62, uint(QSsl::AlertType::DecodeError),
      63, uint(QSsl::AlertType::DecryptError),
      64, uint(QSsl::AlertType::ExportRestriction),
      65, uint(QSsl::AlertType::ProtocolVersion),
      66, uint(QSsl::AlertType::InsufficientSecurity),
      67, uint(QSsl::AlertType::InternalError),
      68, uint(QSsl::AlertType::InappropriateFallback),
      69, uint(QSsl::AlertType::UserCancelled),
      70, uint(QSsl::AlertType::NoRenegotiation),
      71, uint(QSsl::AlertType::MissingExtension),
      72, uint(QSsl::AlertType::UnsupportedExtension),
      73, uint(QSsl::AlertType::CertificateUnobtainable),
      74, uint(QSsl::AlertType::UnrecognizedName),
      75, uint(QSsl::AlertType::BadCertificateStatusResponse),
      76, uint(QSsl::AlertType::BadCertificateHashValue),
      77, uint(QSsl::AlertType::UnknownPskIdentity),
      78, uint(QSsl::AlertType::CertificateRequired),
      79, uint(QSsl::AlertType::NoApplicationProtocol),
      80, uint(QSsl::AlertType::UnknownAlertMessage),
      82, uint(QSsl::ImplementedClass::Key),
      83, uint(QSsl::ImplementedClass::Certificate),
      84, uint(QSsl::ImplementedClass::Socket),
      85, uint(QSsl::ImplementedClass::DiffieHellman),
      86, uint(QSsl::ImplementedClass::EllipticCurve),
      87, uint(QSsl::ImplementedClass::Dtls),
      88, uint(QSsl::ImplementedClass::DtlsCookie),
      90, uint(QSsl::SupportedFeature::CertificateVerification),
      91, uint(QSsl::SupportedFeature::ClientSideAlpn),
      92, uint(QSsl::SupportedFeature::ServerSideAlpn),
      93, uint(QSsl::SupportedFeature::Ocsp),
      94, uint(QSsl::SupportedFeature::Psk),
      95, uint(QSsl::SupportedFeature::SessionTicket),
      96, uint(QSsl::SupportedFeature::Alerts),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSsl::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN4QSslE.offsetsAndSizes,
    qt_meta_data_ZN4QSslE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN4QSslE_t,
        // enum 'KeyType'
        QtPrivate::TypeAndForceComplete<QSsl::KeyType, std::true_type>,
        // enum 'EncodingFormat'
        QtPrivate::TypeAndForceComplete<QSsl::EncodingFormat, std::true_type>,
        // enum 'KeyAlgorithm'
        QtPrivate::TypeAndForceComplete<QSsl::KeyAlgorithm, std::true_type>,
        // enum 'AlternativeNameEntryType'
        QtPrivate::TypeAndForceComplete<QSsl::AlternativeNameEntryType, std::true_type>,
        // enum 'SslProtocol'
        QtPrivate::TypeAndForceComplete<QSsl::SslProtocol, std::true_type>,
        // enum 'SslOption'
        QtPrivate::TypeAndForceComplete<QSsl::SslOption, std::true_type>,
        // enum 'AlertLevel'
        QtPrivate::TypeAndForceComplete<QSsl::AlertLevel, std::true_type>,
        // enum 'AlertType'
        QtPrivate::TypeAndForceComplete<QSsl::AlertType, std::true_type>,
        // enum 'ImplementedClass'
        QtPrivate::TypeAndForceComplete<QSsl::ImplementedClass, std::true_type>,
        // enum 'SupportedFeature'
        QtPrivate::TypeAndForceComplete<QSsl::SupportedFeature, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
