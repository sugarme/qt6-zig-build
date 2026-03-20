/****************************************************************************
** Meta object code from reading C++ file 'qhttpnetworkconnectionchannel_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qhttpnetworkconnectionchannel_p.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QAuthenticator>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpnetworkconnectionchannel_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN29QHttpNetworkConnectionChannelE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN29QHttpNetworkConnectionChannelE = QtMocHelpers::stringData(
    "QHttpNetworkConnectionChannel",
    "_q_receiveReply",
    "",
    "_q_bytesWritten",
    "bytes",
    "_q_readyRead",
    "_q_disconnected",
    "_q_connected_abstract_socket",
    "QAbstractSocket*",
    "socket",
    "_q_connected_local_socket",
    "QLocalSocket*",
    "_q_connected",
    "_q_error",
    "QAbstractSocket::SocketError",
    "_q_proxyAuthenticationRequired",
    "QNetworkProxy",
    "proxy",
    "QAuthenticator*",
    "auth",
    "_q_uploadDataReadyRead",
    "_q_encrypted",
    "_q_sslErrors",
    "QList<QSslError>",
    "errors",
    "_q_preSharedKeyAuthenticationRequired",
    "QSslPreSharedKeyAuthenticator*",
    "_q_encryptedBytesWritten"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN29QHttpNetworkConnectionChannelE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x09,    1 /* Protected */,
       3,    1,   99,    2, 0x09,    2 /* Protected */,
       5,    0,  102,    2, 0x09,    4 /* Protected */,
       6,    0,  103,    2, 0x09,    5 /* Protected */,
       7,    1,  104,    2, 0x09,    6 /* Protected */,
      10,    1,  107,    2, 0x09,    8 /* Protected */,
      12,    0,  110,    2, 0x09,   10 /* Protected */,
      13,    1,  111,    2, 0x09,   11 /* Protected */,
      15,    2,  114,    2, 0x09,   13 /* Protected */,
      20,    0,  119,    2, 0x09,   16 /* Protected */,
      21,    0,  120,    2, 0x09,   17 /* Protected */,
      22,    1,  121,    2, 0x09,   18 /* Protected */,
      25,    1,  124,    2, 0x09,   20 /* Protected */,
      27,    1,  127,    2, 0x09,   22 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 18,   17,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, QMetaType::LongLong,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttpNetworkConnectionChannel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN29QHttpNetworkConnectionChannelE.offsetsAndSizes,
    qt_meta_data_ZN29QHttpNetworkConnectionChannelE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN29QHttpNetworkConnectionChannelE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttpNetworkConnectionChannel, std::true_type>,
        // method '_q_receiveReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_bytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_readyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_connected_abstract_socket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket *, std::false_type>,
        // method '_q_connected_local_socket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QLocalSocket *, std::false_type>,
        // method '_q_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method '_q_proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method '_q_uploadDataReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_encrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method '_q_preSharedKeyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method '_q_encryptedBytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void QHttpNetworkConnectionChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttpNetworkConnectionChannel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->_q_receiveReply(); break;
        case 1: _t->_q_bytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->_q_readyRead(); break;
        case 3: _t->_q_disconnected(); break;
        case 4: _t->_q_connected_abstract_socket((*reinterpret_cast< std::add_pointer_t<QAbstractSocket*>>(_a[1]))); break;
        case 5: _t->_q_connected_local_socket((*reinterpret_cast< std::add_pointer_t<QLocalSocket*>>(_a[1]))); break;
        case 6: _t->_q_connected(); break;
        case 7: _t->_q_error((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 8: _t->_q_proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 9: _t->_q_uploadDataReadyRead(); break;
        case 10: _t->_q_encrypted(); break;
        case 11: _t->_q_sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 12: _t->_q_preSharedKeyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 13: _t->_q_encryptedBytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLocalSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkProxy >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QHttpNetworkConnectionChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpNetworkConnectionChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN29QHttpNetworkConnectionChannelE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttpNetworkConnectionChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
