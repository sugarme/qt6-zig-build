/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreply.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qnetworkreply.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreply.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QNetworkReplyE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QNetworkReplyE = QtMocHelpers::stringData(
    "QNetworkReply",
    "socketStartedConnecting",
    "",
    "requestSent",
    "metaDataChanged",
    "finished",
    "errorOccurred",
    "QNetworkReply::NetworkError",
    "encrypted",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "preSharedKeyAuthenticationRequired",
    "QSslPreSharedKeyAuthenticator*",
    "authenticator",
    "redirected",
    "url",
    "redirectAllowed",
    "uploadProgress",
    "bytesSent",
    "bytesTotal",
    "downloadProgress",
    "bytesReceived",
    "abort",
    "ignoreSslErrors",
    "NetworkError",
    "NoError",
    "ConnectionRefusedError",
    "RemoteHostClosedError",
    "HostNotFoundError",
    "TimeoutError",
    "OperationCanceledError",
    "SslHandshakeFailedError",
    "TemporaryNetworkFailureError",
    "NetworkSessionFailedError",
    "BackgroundRequestNotAllowedError",
    "TooManyRedirectsError",
    "InsecureRedirectError",
    "UnknownNetworkError",
    "ProxyConnectionRefusedError",
    "ProxyConnectionClosedError",
    "ProxyNotFoundError",
    "ProxyTimeoutError",
    "ProxyAuthenticationRequiredError",
    "UnknownProxyError",
    "ContentAccessDenied",
    "ContentOperationNotPermittedError",
    "ContentNotFoundError",
    "AuthenticationRequiredError",
    "ContentReSendError",
    "ContentConflictError",
    "ContentGoneError",
    "UnknownContentError",
    "ProtocolUnknownError",
    "ProtocolInvalidOperationError",
    "ProtocolFailure",
    "InternalServerError",
    "OperationNotImplementedError",
    "ServiceUnavailableError",
    "UnknownServerError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QNetworkReplyE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       1,  128, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    2 /* Public */,
       3,    0,   99,    2, 0x06,    3 /* Public */,
       4,    0,  100,    2, 0x06,    4 /* Public */,
       5,    0,  101,    2, 0x06,    5 /* Public */,
       6,    1,  102,    2, 0x06,    6 /* Public */,
       8,    0,  105,    2, 0x06,    8 /* Public */,
       9,    1,  106,    2, 0x06,    9 /* Public */,
      12,    1,  109,    2, 0x06,   11 /* Public */,
      15,    1,  112,    2, 0x06,   13 /* Public */,
      17,    0,  115,    2, 0x06,   15 /* Public */,
      18,    2,  116,    2, 0x06,   16 /* Public */,
      21,    2,  121,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    0,  126,    2, 0x0a,   22 /* Public */,
      24,    0,  127,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QUrl,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   19,   20,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   22,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      25,   25, 0x0,   34,  133,

 // enum data: key, value
      26, uint(QNetworkReply::NoError),
      27, uint(QNetworkReply::ConnectionRefusedError),
      28, uint(QNetworkReply::RemoteHostClosedError),
      29, uint(QNetworkReply::HostNotFoundError),
      30, uint(QNetworkReply::TimeoutError),
      31, uint(QNetworkReply::OperationCanceledError),
      32, uint(QNetworkReply::SslHandshakeFailedError),
      33, uint(QNetworkReply::TemporaryNetworkFailureError),
      34, uint(QNetworkReply::NetworkSessionFailedError),
      35, uint(QNetworkReply::BackgroundRequestNotAllowedError),
      36, uint(QNetworkReply::TooManyRedirectsError),
      37, uint(QNetworkReply::InsecureRedirectError),
      38, uint(QNetworkReply::UnknownNetworkError),
      39, uint(QNetworkReply::ProxyConnectionRefusedError),
      40, uint(QNetworkReply::ProxyConnectionClosedError),
      41, uint(QNetworkReply::ProxyNotFoundError),
      42, uint(QNetworkReply::ProxyTimeoutError),
      43, uint(QNetworkReply::ProxyAuthenticationRequiredError),
      44, uint(QNetworkReply::UnknownProxyError),
      45, uint(QNetworkReply::ContentAccessDenied),
      46, uint(QNetworkReply::ContentOperationNotPermittedError),
      47, uint(QNetworkReply::ContentNotFoundError),
      48, uint(QNetworkReply::AuthenticationRequiredError),
      49, uint(QNetworkReply::ContentReSendError),
      50, uint(QNetworkReply::ContentConflictError),
      51, uint(QNetworkReply::ContentGoneError),
      52, uint(QNetworkReply::UnknownContentError),
      53, uint(QNetworkReply::ProtocolUnknownError),
      54, uint(QNetworkReply::ProtocolInvalidOperationError),
      55, uint(QNetworkReply::ProtocolFailure),
      56, uint(QNetworkReply::InternalServerError),
      57, uint(QNetworkReply::OperationNotImplementedError),
      58, uint(QNetworkReply::ServiceUnavailableError),
      59, uint(QNetworkReply::UnknownServerError),

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkReply::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_ZN13QNetworkReplyE.offsetsAndSizes,
    qt_meta_data_ZN13QNetworkReplyE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QNetworkReplyE_t,
        // enum 'NetworkError'
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkReply, std::true_type>,
        // method 'socketStartedConnecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'encrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'preSharedKeyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method 'redirected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'redirectAllowed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ignoreSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNetworkReply *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->socketStartedConnecting(); break;
        case 1: _t->requestSent(); break;
        case 2: _t->metaDataChanged(); break;
        case 3: _t->finished(); break;
        case 4: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 5: _t->encrypted(); break;
        case 6: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 7: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 8: _t->redirected((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 9: _t->redirectAllowed(); break;
        case 10: _t->uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 11: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 12: _t->abort(); break;
        case 13: _t->ignoreSslErrors(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::socketStartedConnecting; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::requestSent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::metaDataChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(QNetworkReply::NetworkError );
            if (_q_method_type _q_method = &QNetworkReply::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::encrypted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(const QList<QSslError> & );
            if (_q_method_type _q_method = &QNetworkReply::sslErrors; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(QSslPreSharedKeyAuthenticator * );
            if (_q_method_type _q_method = &QNetworkReply::preSharedKeyAuthenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(const QUrl & );
            if (_q_method_type _q_method = &QNetworkReply::redirected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)();
            if (_q_method_type _q_method = &QNetworkReply::redirectAllowed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &QNetworkReply::uploadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReply::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &QNetworkReply::downloadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject *QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QNetworkReplyE.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QNetworkReply::socketStartedConnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNetworkReply::requestSent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNetworkReply::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QNetworkReply::errorOccurred(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkReply::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QNetworkReply::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QNetworkReply::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QNetworkReply::redirected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QNetworkReply::redirectAllowed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QNetworkReply::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QNetworkReply::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
