/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qnetworkaccessbackend_p.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessbackend_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21QNetworkAccessBackendE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN21QNetworkAccessBackendE = QtMocHelpers::stringData(
    "QNetworkAccessBackend",
    "readyRead",
    "",
    "finished",
    "error",
    "QNetworkReply::NetworkError",
    "code",
    "errorString",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "proxy",
    "QAuthenticator*",
    "auth",
    "authenticationRequired",
    "metaDataChanged",
    "redirectionRequested",
    "destination",
    "TargetType",
    "Networked",
    "Local",
    "SecurityFeature",
    "None",
    "TLS",
    "IOFeature",
    "ZeroCopy",
    "NeedResetableUpload",
    "SupportsSynchronousMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN21QNetworkAccessBackendE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       3,   75, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    4 /* Public */,
       3,    0,   57,    2, 0x09,    5 /* Protected */,
       4,    2,   58,    2, 0x09,    6 /* Protected */,
       8,    2,   63,    2, 0x09,    9 /* Protected */,
      13,    1,   68,    2, 0x09,   12 /* Protected */,
      14,    0,   71,    2, 0x09,   14 /* Protected */,
      15,    1,   72,    2, 0x09,   15 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   16,

 // enums: name, alias, flags, count, data
      17,   17, 0x2,    2,   90,
      20,   20, 0x2,    2,   94,
      23,   23, 0x2,    4,   98,

 // enum data: key, value
      18, uint(QNetworkAccessBackend::TargetType::Networked),
      19, uint(QNetworkAccessBackend::TargetType::Local),
      21, uint(QNetworkAccessBackend::SecurityFeature::None),
      22, uint(QNetworkAccessBackend::SecurityFeature::TLS),
      21, uint(QNetworkAccessBackend::IOFeature::None),
      24, uint(QNetworkAccessBackend::IOFeature::ZeroCopy),
      25, uint(QNetworkAccessBackend::IOFeature::NeedResetableUpload),
      26, uint(QNetworkAccessBackend::IOFeature::SupportsSynchronousMode),

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkAccessBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN21QNetworkAccessBackendE.offsetsAndSizes,
    qt_meta_data_ZN21QNetworkAccessBackendE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN21QNetworkAccessBackendE_t,
        // enum 'TargetType'
        QtPrivate::TypeAndForceComplete<QNetworkAccessBackend::TargetType, std::true_type>,
        // enum 'SecurityFeature'
        QtPrivate::TypeAndForceComplete<QNetworkAccessBackend::SecurityFeature, std::true_type>,
        // enum 'IOFeature'
        QtPrivate::TypeAndForceComplete<QNetworkAccessBackend::IOFeature, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkAccessBackend, std::true_type>,
        // method 'readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'authenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'metaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redirectionRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void QNetworkAccessBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNetworkAccessBackend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 4: _t->authenticationRequired((*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[1]))); break;
        case 5: _t->metaDataChanged(); break;
        case 6: _t->redirectionRequested((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QNetworkAccessBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN21QNetworkAccessBackendE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNetworkAccessBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN28QNetworkAccessBackendFactoryE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN28QNetworkAccessBackendFactoryE = QtMocHelpers::stringData(
    "QNetworkAccessBackendFactory"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN28QNetworkAccessBackendFactoryE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkAccessBackendFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN28QNetworkAccessBackendFactoryE.offsetsAndSizes,
    qt_meta_data_ZN28QNetworkAccessBackendFactoryE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN28QNetworkAccessBackendFactoryE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkAccessBackendFactory, std::true_type>
    >,
    nullptr
} };

void QNetworkAccessBackendFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNetworkAccessBackendFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QNetworkAccessBackendFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessBackendFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN28QNetworkAccessBackendFactoryE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNetworkAccessBackendFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
