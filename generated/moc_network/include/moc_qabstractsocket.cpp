/****************************************************************************
** Meta object code from reading C++ file 'qabstractsocket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/socket/qabstractsocket.h"
#include <QtNetwork/qauthenticator.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractsocket.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15QAbstractSocketE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15QAbstractSocketE = QtMocHelpers::stringData(
    "QAbstractSocket",
    "hostFound",
    "",
    "connected",
    "disconnected",
    "stateChanged",
    "QAbstractSocket::SocketState",
    "errorOccurred",
    "QAbstractSocket::SocketError",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "proxy",
    "QAuthenticator*",
    "authenticator",
    "_q_connectToNextAddress",
    "_q_startConnecting",
    "QHostInfo",
    "_q_abortConnectionAttempt",
    "_q_testConnection",
    "SocketType",
    "TcpSocket",
    "UdpSocket",
    "SctpSocket",
    "UnknownSocketType",
    "NetworkLayerProtocol",
    "IPv4Protocol",
    "IPv6Protocol",
    "AnyIPProtocol",
    "UnknownNetworkLayerProtocol",
    "SocketError",
    "ConnectionRefusedError",
    "RemoteHostClosedError",
    "HostNotFoundError",
    "SocketAccessError",
    "SocketResourceError",
    "SocketTimeoutError",
    "DatagramTooLargeError",
    "NetworkError",
    "AddressInUseError",
    "SocketAddressNotAvailableError",
    "UnsupportedSocketOperationError",
    "UnfinishedSocketOperationError",
    "ProxyAuthenticationRequiredError",
    "SslHandshakeFailedError",
    "ProxyConnectionRefusedError",
    "ProxyConnectionClosedError",
    "ProxyConnectionTimeoutError",
    "ProxyNotFoundError",
    "ProxyProtocolError",
    "OperationError",
    "SslInternalError",
    "SslInvalidUserDataError",
    "TemporaryError",
    "UnknownSocketError",
    "SocketState",
    "UnconnectedState",
    "HostLookupState",
    "ConnectingState",
    "ConnectedState",
    "BoundState",
    "ListeningState",
    "ClosingState",
    "SocketOption",
    "LowDelayOption",
    "KeepAliveOption",
    "MulticastTtlOption",
    "MulticastLoopbackOption",
    "TypeOfServiceOption",
    "SendBufferSizeSocketOption",
    "ReceiveBufferSizeSocketOption",
    "PathMtuSocketOption"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15QAbstractSocketE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       5,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    6 /* Public */,
       3,    0,   75,    2, 0x06,    7 /* Public */,
       4,    0,   76,    2, 0x06,    8 /* Public */,
       5,    1,   77,    2, 0x06,    9 /* Public */,
       7,    1,   80,    2, 0x06,   11 /* Public */,
       9,    2,   83,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,   88,    2, 0x08,   16 /* Private */,
      15,    1,   89,    2, 0x08,   17 /* Private */,
      17,    0,   92,    2, 0x08,   19 /* Private */,
      18,    0,   93,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    4,  119,
      24,   24, 0x0,    4,  127,
      29,   29, 0x0,   24,  135,
      54,   54, 0x0,    7,  183,
      62,   62, 0x0,    8,  197,

 // enum data: key, value
      20, uint(QAbstractSocket::TcpSocket),
      21, uint(QAbstractSocket::UdpSocket),
      22, uint(QAbstractSocket::SctpSocket),
      23, uint(QAbstractSocket::UnknownSocketType),
      25, uint(QAbstractSocket::IPv4Protocol),
      26, uint(QAbstractSocket::IPv6Protocol),
      27, uint(QAbstractSocket::AnyIPProtocol),
      28, uint(QAbstractSocket::UnknownNetworkLayerProtocol),
      30, uint(QAbstractSocket::ConnectionRefusedError),
      31, uint(QAbstractSocket::RemoteHostClosedError),
      32, uint(QAbstractSocket::HostNotFoundError),
      33, uint(QAbstractSocket::SocketAccessError),
      34, uint(QAbstractSocket::SocketResourceError),
      35, uint(QAbstractSocket::SocketTimeoutError),
      36, uint(QAbstractSocket::DatagramTooLargeError),
      37, uint(QAbstractSocket::NetworkError),
      38, uint(QAbstractSocket::AddressInUseError),
      39, uint(QAbstractSocket::SocketAddressNotAvailableError),
      40, uint(QAbstractSocket::UnsupportedSocketOperationError),
      41, uint(QAbstractSocket::UnfinishedSocketOperationError),
      42, uint(QAbstractSocket::ProxyAuthenticationRequiredError),
      43, uint(QAbstractSocket::SslHandshakeFailedError),
      44, uint(QAbstractSocket::ProxyConnectionRefusedError),
      45, uint(QAbstractSocket::ProxyConnectionClosedError),
      46, uint(QAbstractSocket::ProxyConnectionTimeoutError),
      47, uint(QAbstractSocket::ProxyNotFoundError),
      48, uint(QAbstractSocket::ProxyProtocolError),
      49, uint(QAbstractSocket::OperationError),
      50, uint(QAbstractSocket::SslInternalError),
      51, uint(QAbstractSocket::SslInvalidUserDataError),
      52, uint(QAbstractSocket::TemporaryError),
      53, uint(QAbstractSocket::UnknownSocketError),
      55, uint(QAbstractSocket::UnconnectedState),
      56, uint(QAbstractSocket::HostLookupState),
      57, uint(QAbstractSocket::ConnectingState),
      58, uint(QAbstractSocket::ConnectedState),
      59, uint(QAbstractSocket::BoundState),
      60, uint(QAbstractSocket::ListeningState),
      61, uint(QAbstractSocket::ClosingState),
      63, uint(QAbstractSocket::LowDelayOption),
      64, uint(QAbstractSocket::KeepAliveOption),
      65, uint(QAbstractSocket::MulticastTtlOption),
      66, uint(QAbstractSocket::MulticastLoopbackOption),
      67, uint(QAbstractSocket::TypeOfServiceOption),
      68, uint(QAbstractSocket::SendBufferSizeSocketOption),
      69, uint(QAbstractSocket::ReceiveBufferSizeSocketOption),
      70, uint(QAbstractSocket::PathMtuSocketOption),

       0        // eod
};

Q_CONSTINIT const QMetaObject QAbstractSocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_ZN15QAbstractSocketE.offsetsAndSizes,
    qt_meta_data_ZN15QAbstractSocketE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15QAbstractSocketE_t,
        // enum 'SocketType'
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketType, std::true_type>,
        // enum 'NetworkLayerProtocol'
        QtPrivate::TypeAndForceComplete<QAbstractSocket::NetworkLayerProtocol, std::true_type>,
        // enum 'SocketError'
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::true_type>,
        // enum 'SocketState'
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::true_type>,
        // enum 'SocketOption'
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketOption, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QAbstractSocket, std::true_type>,
        // method 'hostFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method '_q_connectToNextAddress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_startConnecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHostInfo &, std::false_type>,
        // method '_q_abortConnectionAttempt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_testConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QAbstractSocket *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->hostFound(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 4: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 5: _t->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 6: _t->d_func()->_q_connectToNextAddress(); break;
        case 7: _t->d_func()->_q_startConnecting((*reinterpret_cast< std::add_pointer_t<QHostInfo>>(_a[1]))); break;
        case 8: _t->d_func()->_q_abortConnectionAttempt(); break;
        case 9: _t->d_func()->_q_testConnection(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 4:
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
            using _q_method_type = void (QAbstractSocket::*)();
            if (_q_method_type _q_method = &QAbstractSocket::hostFound; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractSocket::*)();
            if (_q_method_type _q_method = &QAbstractSocket::connected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractSocket::*)();
            if (_q_method_type _q_method = &QAbstractSocket::disconnected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractSocket::*)(QAbstractSocket::SocketState );
            if (_q_method_type _q_method = &QAbstractSocket::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractSocket::*)(QAbstractSocket::SocketError );
            if (_q_method_type _q_method = &QAbstractSocket::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QAbstractSocket::*)(const QNetworkProxy & , QAuthenticator * );
            if (_q_method_type _q_method = &QAbstractSocket::proxyAuthenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *QAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15QAbstractSocketE.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QAbstractSocket::hostFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAbstractSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAbstractSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAbstractSocket::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractSocket::errorOccurred(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
