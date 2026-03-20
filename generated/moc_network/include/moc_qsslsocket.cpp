/****************************************************************************
** Meta object code from reading C++ file 'qsslsocket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/ssl/qsslsocket.h"
#include <QtNetwork/qsslpresharedkeyauthenticator.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsslsocket.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QSslSocketE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QSslSocketE = QtMocHelpers::stringData(
    "QSslSocket",
    "encrypted",
    "",
    "peerVerifyError",
    "QSslError",
    "error",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "modeChanged",
    "QSslSocket::SslMode",
    "newMode",
    "encryptedBytesWritten",
    "totalBytes",
    "preSharedKeyAuthenticationRequired",
    "QSslPreSharedKeyAuthenticator*",
    "authenticator",
    "newSessionTicketReceived",
    "alertSent",
    "QSsl::AlertLevel",
    "level",
    "QSsl::AlertType",
    "type",
    "description",
    "alertReceived",
    "handshakeInterruptedOnError",
    "startClientEncryption",
    "startServerEncryption",
    "ignoreSslErrors",
    "_q_connectedSlot",
    "_q_hostFoundSlot",
    "_q_disconnectedSlot",
    "_q_stateChangedSlot",
    "QAbstractSocket::SocketState",
    "_q_errorSlot",
    "QAbstractSocket::SocketError",
    "_q_readyReadSlot",
    "_q_channelReadyReadSlot",
    "_q_bytesWrittenSlot",
    "_q_channelBytesWrittenSlot",
    "_q_readChannelFinishedSlot",
    "_q_flushWriteBuffer",
    "_q_flushReadBuffer",
    "_q_resumeImplementation",
    "SslMode",
    "UnencryptedMode",
    "SslClientMode",
    "SslServerMode",
    "PeerVerifyMode",
    "VerifyNone",
    "QueryPeer",
    "VerifyPeer",
    "AutoVerifyPeer"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QSslSocketE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       2,  232, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,    3 /* Public */,
       3,    1,  171,    2, 0x06,    4 /* Public */,
       6,    1,  174,    2, 0x06,    6 /* Public */,
       9,    1,  177,    2, 0x06,    8 /* Public */,
      12,    1,  180,    2, 0x06,   10 /* Public */,
      14,    1,  183,    2, 0x06,   12 /* Public */,
      17,    0,  186,    2, 0x06,   14 /* Public */,
      18,    3,  187,    2, 0x06,   15 /* Public */,
      24,    3,  194,    2, 0x06,   19 /* Public */,
      25,    1,  201,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      26,    0,  204,    2, 0x0a,   25 /* Public */,
      27,    0,  205,    2, 0x0a,   26 /* Public */,
      28,    0,  206,    2, 0x0a,   27 /* Public */,
      29,    0,  207,    2, 0x08,   28 /* Private */,
      30,    0,  208,    2, 0x08,   29 /* Private */,
      31,    0,  209,    2, 0x08,   30 /* Private */,
      32,    1,  210,    2, 0x08,   31 /* Private */,
      34,    1,  213,    2, 0x08,   33 /* Private */,
      36,    0,  216,    2, 0x08,   35 /* Private */,
      37,    1,  217,    2, 0x08,   36 /* Private */,
      38,    1,  220,    2, 0x08,   38 /* Private */,
      39,    2,  223,    2, 0x08,   40 /* Private */,
      40,    0,  228,    2, 0x08,   43 /* Private */,
      41,    0,  229,    2, 0x08,   44 /* Private */,
      42,    0,  230,    2, 0x08,   45 /* Private */,
      43,    0,  231,    2, 0x08,   46 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, QMetaType::QString,   20,   22,   23,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21, QMetaType::QString,   20,   22,   23,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    3,  242,
      48,   48, 0x0,    4,  248,

 // enum data: key, value
      45, uint(QSslSocket::UnencryptedMode),
      46, uint(QSslSocket::SslClientMode),
      47, uint(QSslSocket::SslServerMode),
      49, uint(QSslSocket::VerifyNone),
      50, uint(QSslSocket::QueryPeer),
      51, uint(QSslSocket::VerifyPeer),
      52, uint(QSslSocket::AutoVerifyPeer),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSslSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpSocket::staticMetaObject>(),
    qt_meta_stringdata_ZN10QSslSocketE.offsetsAndSizes,
    qt_meta_data_ZN10QSslSocketE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QSslSocketE_t,
        // enum 'SslMode'
        QtPrivate::TypeAndForceComplete<QSslSocket::SslMode, std::true_type>,
        // enum 'PeerVerifyMode'
        QtPrivate::TypeAndForceComplete<QSslSocket::PeerVerifyMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSslSocket, std::true_type>,
        // method 'encrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'peerVerifyError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslError &, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'modeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslSocket::SslMode, std::false_type>,
        // method 'encryptedBytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'preSharedKeyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method 'newSessionTicketReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'alertSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSsl::AlertLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSsl::AlertType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'alertReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSsl::AlertLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSsl::AlertType, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handshakeInterruptedOnError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslError &, std::false_type>,
        // method 'startClientEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startServerEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ignoreSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_connectedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_hostFoundSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_disconnectedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_stateChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method '_q_errorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method '_q_readyReadSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_channelReadyReadSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_bytesWrittenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_channelBytesWrittenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_readChannelFinishedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_flushWriteBuffer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_flushReadBuffer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_resumeImplementation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QSslSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QSslSocket *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->encrypted(); break;
        case 1: _t->peerVerifyError((*reinterpret_cast< std::add_pointer_t<QSslError>>(_a[1]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 3: _t->modeChanged((*reinterpret_cast< std::add_pointer_t<QSslSocket::SslMode>>(_a[1]))); break;
        case 4: _t->encryptedBytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 6: _t->newSessionTicketReceived(); break;
        case 7: _t->alertSent((*reinterpret_cast< std::add_pointer_t<QSsl::AlertLevel>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSsl::AlertType>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->alertReceived((*reinterpret_cast< std::add_pointer_t<QSsl::AlertLevel>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSsl::AlertType>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 9: _t->handshakeInterruptedOnError((*reinterpret_cast< std::add_pointer_t<QSslError>>(_a[1]))); break;
        case 10: _t->startClientEncryption(); break;
        case 11: _t->startServerEncryption(); break;
        case 12: _t->ignoreSslErrors(); break;
        case 13: _t->d_func()->_q_connectedSlot(); break;
        case 14: _t->d_func()->_q_hostFoundSlot(); break;
        case 15: _t->d_func()->_q_disconnectedSlot(); break;
        case 16: _t->d_func()->_q_stateChangedSlot((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 17: _t->d_func()->_q_errorSlot((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 18: _t->d_func()->_q_readyReadSlot(); break;
        case 19: _t->d_func()->_q_channelReadyReadSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->d_func()->_q_bytesWrittenSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 21: _t->d_func()->_q_channelBytesWrittenSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 22: _t->d_func()->_q_readChannelFinishedSlot(); break;
        case 23: _t->d_func()->_q_flushWriteBuffer(); break;
        case 24: _t->d_func()->_q_flushReadBuffer(); break;
        case 25: _t->d_func()->_q_resumeImplementation(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QSslSocket::*)();
            if (_q_method_type _q_method = &QSslSocket::encrypted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(const QSslError & );
            if (_q_method_type _q_method = &QSslSocket::peerVerifyError; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(const QList<QSslError> & );
            if (_q_method_type _q_method = &QSslSocket::sslErrors; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(QSslSocket::SslMode );
            if (_q_method_type _q_method = &QSslSocket::modeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(qint64 );
            if (_q_method_type _q_method = &QSslSocket::encryptedBytesWritten; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(QSslPreSharedKeyAuthenticator * );
            if (_q_method_type _q_method = &QSslSocket::preSharedKeyAuthenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)();
            if (_q_method_type _q_method = &QSslSocket::newSessionTicketReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(QSsl::AlertLevel , QSsl::AlertType , const QString & );
            if (_q_method_type _q_method = &QSslSocket::alertSent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(QSsl::AlertLevel , QSsl::AlertType , const QString & );
            if (_q_method_type _q_method = &QSslSocket::alertReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (QSslSocket::*)(const QSslError & );
            if (_q_method_type _q_method = &QSslSocket::handshakeInterruptedOnError; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *QSslSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSslSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QSslSocketE.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int QSslSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QSslSocket::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSslSocket::peerVerifyError(const QSslError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSslSocket::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSslSocket::modeChanged(QSslSocket::SslMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSslSocket::encryptedBytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSslSocket::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSslSocket::newSessionTicketReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QSslSocket::alertSent(QSsl::AlertLevel _t1, QSsl::AlertType _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSslSocket::alertReceived(QSsl::AlertLevel _t1, QSsl::AlertType _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSslSocket::handshakeInterruptedOnError(const QSslError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
