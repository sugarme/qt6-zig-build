/****************************************************************************
** Meta object code from reading C++ file 'qhttp2protocolhandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qhttp2protocolhandler_p.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QAuthenticator>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttp2protocolhandler_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21QHttp2ProtocolHandlerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN21QHttp2ProtocolHandlerE = QtMocHelpers::stringData(
    "QHttp2ProtocolHandler",
    "_q_uploadDataReadyRead",
    "",
    "_q_replyDestroyed",
    "reply",
    "_q_uploadDataDestroyed",
    "uploadData",
    "handleConnectionClosure",
    "ensureClientPrefaceSent",
    "_q_receiveReply",
    "sendRequest",
    "sendWINDOW_UPDATE",
    "streamID",
    "delta",
    "resumeSuspendedStreams"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN21QHttp2ProtocolHandlerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   75,    2, 0x02,    6 /* Public */,
       8,    0,   76,    2, 0x02,    7 /* Public */,
       9,    0,   77,    2, 0x00,    8 /* Private */,
      10,    0,   78,    2, 0x00,    9 /* Private */,
      11,    2,   79,    2, 0x00,   10 /* Private */,
      14,    0,   84,    2, 0x00,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,
    QMetaType::Void, QMetaType::QObjectStar,    6,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::UInt, QMetaType::UInt,   12,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttp2ProtocolHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN21QHttp2ProtocolHandlerE.offsetsAndSizes,
    qt_meta_data_ZN21QHttp2ProtocolHandlerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN21QHttp2ProtocolHandlerE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttp2ProtocolHandler, std::true_type>,
        // method '_q_uploadDataReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_replyDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method '_q_uploadDataDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'handleConnectionClosure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ensureClientPrefaceSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_receiveReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendRequest'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendWINDOW_UPDATE'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'resumeSuspendedStreams'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QHttp2ProtocolHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttp2ProtocolHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->_q_uploadDataReadyRead(); break;
        case 1: _t->_q_replyDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->_q_uploadDataDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 3: _t->handleConnectionClosure(); break;
        case 4: _t->ensureClientPrefaceSent(); break;
        case 5: _t->_q_receiveReply(); break;
        case 6: { bool _r = _t->sendRequest();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->sendWINDOW_UPDATE((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->resumeSuspendedStreams(); break;
        default: ;
        }
    }
}

const QMetaObject *QHttp2ProtocolHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttp2ProtocolHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN21QHttp2ProtocolHandlerE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractProtocolHandler"))
        return static_cast< QAbstractProtocolHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttp2ProtocolHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
