/****************************************************************************
** Meta object code from reading C++ file 'qdnslookup.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/kernel/qdnslookup.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdnslookup.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24QDnsTlsAssociationRecordE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN24QDnsTlsAssociationRecordE = QtMocHelpers::stringData(
    "QDnsTlsAssociationRecord",
    "RegisterEnumClassesUnscoped",
    "false",
    "CertificateUsage",
    "CertificateAuthorityConstrait",
    "ServiceCertificateConstraint",
    "TrustAnchorAssertion",
    "DomainIssuedCertificate",
    "PrivateUse",
    "PKIX_TA",
    "PKIX_EE",
    "DANE_TA",
    "DANE_EE",
    "PrivCert",
    "Selector",
    "FullCertificate",
    "SubjectPublicKeyInfo",
    "Cert",
    "SPKI",
    "PrivSel",
    "MatchingType",
    "Exact",
    "Sha256",
    "Sha512",
    "PrivMatch"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN24QDnsTlsAssociationRecordE[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   16, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // enums: name, alias, flags, count, data
       3,    3, 0x2,   10,   31,
      14,   14, 0x2,    6,   51,
      20,   20, 0x2,    5,   63,

 // enum data: key, value
       4, uint(QDnsTlsAssociationRecord::CertificateUsage::CertificateAuthorityConstrait),
       5, uint(QDnsTlsAssociationRecord::CertificateUsage::ServiceCertificateConstraint),
       6, uint(QDnsTlsAssociationRecord::CertificateUsage::TrustAnchorAssertion),
       7, uint(QDnsTlsAssociationRecord::CertificateUsage::DomainIssuedCertificate),
       8, uint(QDnsTlsAssociationRecord::CertificateUsage::PrivateUse),
       9, uint(QDnsTlsAssociationRecord::CertificateUsage::PKIX_TA),
      10, uint(QDnsTlsAssociationRecord::CertificateUsage::PKIX_EE),
      11, uint(QDnsTlsAssociationRecord::CertificateUsage::DANE_TA),
      12, uint(QDnsTlsAssociationRecord::CertificateUsage::DANE_EE),
      13, uint(QDnsTlsAssociationRecord::CertificateUsage::PrivCert),
      15, uint(QDnsTlsAssociationRecord::Selector::FullCertificate),
      16, uint(QDnsTlsAssociationRecord::Selector::SubjectPublicKeyInfo),
       8, uint(QDnsTlsAssociationRecord::Selector::PrivateUse),
      17, uint(QDnsTlsAssociationRecord::Selector::Cert),
      18, uint(QDnsTlsAssociationRecord::Selector::SPKI),
      19, uint(QDnsTlsAssociationRecord::Selector::PrivSel),
      21, uint(QDnsTlsAssociationRecord::MatchingType::Exact),
      22, uint(QDnsTlsAssociationRecord::MatchingType::Sha256),
      23, uint(QDnsTlsAssociationRecord::MatchingType::Sha512),
       8, uint(QDnsTlsAssociationRecord::MatchingType::PrivateUse),
      24, uint(QDnsTlsAssociationRecord::MatchingType::PrivMatch),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDnsTlsAssociationRecord::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN24QDnsTlsAssociationRecordE.offsetsAndSizes,
    qt_meta_data_ZN24QDnsTlsAssociationRecordE,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN24QDnsTlsAssociationRecordE_t,
        // enum 'CertificateUsage'
        QtPrivate::TypeAndForceComplete<QDnsTlsAssociationRecord::CertificateUsage, std::true_type>,
        // enum 'Selector'
        QtPrivate::TypeAndForceComplete<QDnsTlsAssociationRecord::Selector, std::true_type>,
        // enum 'MatchingType'
        QtPrivate::TypeAndForceComplete<QDnsTlsAssociationRecord::MatchingType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDnsTlsAssociationRecord, std::true_type>
    >,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN10QDnsLookupE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QDnsLookupE = QtMocHelpers::stringData(
    "QDnsLookup",
    "finished",
    "",
    "nameChanged",
    "name",
    "typeChanged",
    "QDnsLookup::Type",
    "type",
    "nameserverChanged",
    "QHostAddress",
    "nameserver",
    "nameserverPortChanged",
    "port",
    "nameserverProtocolChanged",
    "QDnsLookup::Protocol",
    "protocol",
    "abort",
    "lookup",
    "error",
    "Error",
    "authenticData",
    "errorString",
    "Type",
    "nameserverPort",
    "nameserverProtocol",
    "Protocol",
    "NoError",
    "ResolverError",
    "OperationCancelledError",
    "InvalidRequestError",
    "InvalidReplyError",
    "ServerFailureError",
    "ServerRefusedError",
    "NotFoundError",
    "TimeoutError",
    "A",
    "AAAA",
    "ANY",
    "CNAME",
    "MX",
    "NS",
    "PTR",
    "SRV",
    "TLSA",
    "TXT",
    "Standard",
    "DnsOverTls"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QDnsLookupE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   80, // properties
       3,  120, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,   12 /* Public */,
       3,    1,   63,    2, 0x06,   13 /* Public */,
       5,    1,   66,    2, 0x06,   15 /* Public */,
       8,    1,   69,    2, 0x06,   17 /* Public */,
      11,    1,   72,    2, 0x06,   19 /* Public */,
      13,    1,   75,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    0,   78,    2, 0x0a,   23 /* Public */,
      17,    0,   79,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::UShort,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      18, 0x80000000 | 19, 0x00015009, uint(0), 0,
      20, QMetaType::Bool, 0x00015001, uint(0), 0,
      21, QMetaType::QString, 0x00015001, uint(0), 0,
       4, QMetaType::QString, 0x02015103, uint(1), 0,
       7, 0x80000000 | 22, 0x0201510b, uint(2), 0,
      10, 0x80000000 | 9, 0x0201510b, uint(3), 0,
      23, QMetaType::UShort, 0x02015103, uint(4), 0,
      24, 0x80000000 | 25, 0x0201510b, uint(5), 0,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    9,  135,
      22,   22, 0x0,   10,  153,
      25,   25, 0x0,    2,  173,

 // enum data: key, value
      26, uint(QDnsLookup::NoError),
      27, uint(QDnsLookup::ResolverError),
      28, uint(QDnsLookup::OperationCancelledError),
      29, uint(QDnsLookup::InvalidRequestError),
      30, uint(QDnsLookup::InvalidReplyError),
      31, uint(QDnsLookup::ServerFailureError),
      32, uint(QDnsLookup::ServerRefusedError),
      33, uint(QDnsLookup::NotFoundError),
      34, uint(QDnsLookup::TimeoutError),
      35, uint(QDnsLookup::A),
      36, uint(QDnsLookup::AAAA),
      37, uint(QDnsLookup::ANY),
      38, uint(QDnsLookup::CNAME),
      39, uint(QDnsLookup::MX),
      40, uint(QDnsLookup::NS),
      41, uint(QDnsLookup::PTR),
      42, uint(QDnsLookup::SRV),
      43, uint(QDnsLookup::TLSA),
      44, uint(QDnsLookup::TXT),
      45, uint(QDnsLookup::Standard),
      46, uint(QDnsLookup::DnsOverTls),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDnsLookup::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10QDnsLookupE.offsetsAndSizes,
    qt_meta_data_ZN10QDnsLookupE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QDnsLookupE_t,
        // property 'error'
        QtPrivate::TypeAndForceComplete<Error, std::true_type>,
        // property 'authenticData'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errorString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Type, std::true_type>,
        // property 'nameserver'
        QtPrivate::TypeAndForceComplete<QHostAddress, std::true_type>,
        // property 'nameserverPort'
        QtPrivate::TypeAndForceComplete<quint16, std::true_type>,
        // property 'nameserverProtocol'
        QtPrivate::TypeAndForceComplete<Protocol, std::true_type>,
        // enum 'Error'
        QtPrivate::TypeAndForceComplete<QDnsLookup::Error, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<QDnsLookup::Type, std::true_type>,
        // enum 'Protocol'
        QtPrivate::TypeAndForceComplete<QDnsLookup::Protocol, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDnsLookup, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDnsLookup::Type, std::false_type>,
        // method 'nameserverChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>,
        // method 'nameserverPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'nameserverProtocolChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDnsLookup::Protocol, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lookup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDnsLookup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDnsLookup *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->nameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->typeChanged((*reinterpret_cast< std::add_pointer_t<QDnsLookup::Type>>(_a[1]))); break;
        case 3: _t->nameserverChanged((*reinterpret_cast< std::add_pointer_t<QHostAddress>>(_a[1]))); break;
        case 4: _t->nameserverPortChanged((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 5: _t->nameserverProtocolChanged((*reinterpret_cast< std::add_pointer_t<QDnsLookup::Protocol>>(_a[1]))); break;
        case 6: _t->abort(); break;
        case 7: _t->lookup(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDnsLookup::*)();
            if (_q_method_type _q_method = &QDnsLookup::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QDnsLookup::*)(const QString & );
            if (_q_method_type _q_method = &QDnsLookup::nameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QDnsLookup::*)(QDnsLookup::Type );
            if (_q_method_type _q_method = &QDnsLookup::typeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QDnsLookup::*)(const QHostAddress & );
            if (_q_method_type _q_method = &QDnsLookup::nameserverChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QDnsLookup::*)(quint16 );
            if (_q_method_type _q_method = &QDnsLookup::nameserverPortChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QDnsLookup::*)(QDnsLookup::Protocol );
            if (_q_method_type _q_method = &QDnsLookup::nameserverProtocolChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Error*>(_v) = _t->error(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAuthenticData(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 5: *reinterpret_cast< QHostAddress*>(_v) = _t->nameserver(); break;
        case 6: *reinterpret_cast< quint16*>(_v) = _t->nameserverPort(); break;
        case 7: *reinterpret_cast< Protocol*>(_v) = _t->nameserverProtocol(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setType(*reinterpret_cast< Type*>(_v)); break;
        case 5: _t->setNameserver(*reinterpret_cast< QHostAddress*>(_v)); break;
        case 6: _t->setNameserverPort(*reinterpret_cast< quint16*>(_v)); break;
        case 7: _t->setNameserverProtocol(*reinterpret_cast< Protocol*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::BindableProperty) {
        switch (_id) {
        case 3: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableName(); break;
        case 4: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableType(); break;
        case 5: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableNameserver(); break;
        case 6: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableNameserverPort(); break;
        case 7: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableNameserverProtocol(); break;
        default: break;
        }
    }
}

const QMetaObject *QDnsLookup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDnsLookup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QDnsLookupE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDnsLookup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
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
void QDnsLookup::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDnsLookup::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDnsLookup::typeChanged(QDnsLookup::Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDnsLookup::nameserverChanged(const QHostAddress & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDnsLookup::nameserverPortChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QDnsLookup::nameserverProtocolChanged(QDnsLookup::Protocol _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
