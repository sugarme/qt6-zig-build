/****************************************************************************
** Meta object code from reading C++ file 'qhttp2connection_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qhttp2connection_p.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QAuthenticator>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttp2connection_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QHttp2StreamE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12QHttp2StreamE = QtMocHelpers::stringData(
    "QHttp2Stream",
    "headersReceived",
    "",
    "HPack::HttpHeader",
    "headers",
    "endStream",
    "headersUpdated",
    "errorOccurred",
    "Http2::Http2Error",
    "errorCode",
    "errorString",
    "stateChanged",
    "QHttp2Stream::State",
    "newState",
    "promisedStreamReceived",
    "newStreamID",
    "uploadBlocked",
    "dataReceived",
    "data",
    "rstFrameRecived",
    "bytesWritten",
    "uploadDeviceError",
    "uploadFinished",
    "sendRST_STREAM",
    "sendHEADERS",
    "priority",
    "sendDATA",
    "QIODevice*",
    "device",
    "QNonContiguousByteDevice*",
    "sendWINDOW_UPDATE",
    "delta",
    "maybeResumeUpload",
    "uploadDeviceReadChannelFinished",
    "uploadDeviceDestroyed",
    "State",
    "Idle",
    "ReservedRemote",
    "Open",
    "HalfClosedLocal",
    "HalfClosedRemote",
    "Closed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12QHttp2StreamE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       1,  198, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  134,    2, 0x06,    2 /* Public */,
       6,    0,  139,    2, 0x06,    5 /* Public */,
       7,    2,  140,    2, 0x06,    6 /* Public */,
      11,    1,  145,    2, 0x06,    9 /* Public */,
      14,    1,  148,    2, 0x06,   11 /* Public */,
      16,    0,  151,    2, 0x06,   13 /* Public */,
      17,    2,  152,    2, 0x06,   14 /* Public */,
      19,    1,  157,    2, 0x06,   17 /* Public */,
      20,    1,  160,    2, 0x06,   19 /* Public */,
      21,    1,  163,    2, 0x06,   21 /* Public */,
      22,    0,  166,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    1,  167,    2, 0x0a,   24 /* Public */,
      24,    3,  170,    2, 0x0a,   26 /* Public */,
      24,    2,  177,    2, 0x2a,   30 /* Public | MethodCloned */,
      26,    2,  182,    2, 0x0a,   33 /* Public */,
      26,    2,  187,    2, 0x0a,   36 /* Public */,
      30,    1,  192,    2, 0x0a,   39 /* Public */,
      32,    0,  195,    2, 0x08,   41 /* Private */,
      33,    0,  196,    2, 0x08,   42 /* Private */,
      34,    0,  197,    2, 0x08,   43 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::UInt,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Bool,   18,    5,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::LongLong,   20,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Bool, QMetaType::UChar,    4,    5,   25,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   28,    5,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Bool,   28,    5,
    QMetaType::Void, QMetaType::UInt,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      35,   35, 0x2,    6,  203,

 // enum data: key, value
      36, uint(QHttp2Stream::State::Idle),
      37, uint(QHttp2Stream::State::ReservedRemote),
      38, uint(QHttp2Stream::State::Open),
      39, uint(QHttp2Stream::State::HalfClosedLocal),
      40, uint(QHttp2Stream::State::HalfClosedRemote),
      41, uint(QHttp2Stream::State::Closed),

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttp2Stream::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN12QHttp2StreamE.offsetsAndSizes,
    qt_meta_data_ZN12QHttp2StreamE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12QHttp2StreamE_t,
        // enum 'State'
        QtPrivate::TypeAndForceComplete<QHttp2Stream::State, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttp2Stream, std::true_type>,
        // method 'headersReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const HPack::HttpHeader &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'headersUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Http2::Http2Error, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHttp2Stream::State, std::false_type>,
        // method 'promisedStreamReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'uploadBlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rstFrameRecived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'bytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'uploadDeviceError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'uploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendRST_STREAM'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Http2::Http2Error, std::false_type>,
        // method 'sendHEADERS'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const HPack::HttpHeader &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        // method 'sendHEADERS'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const HPack::HttpHeader &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendDATA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendDATA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNonContiguousByteDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendWINDOW_UPDATE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'maybeResumeUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadDeviceReadChannelFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadDeviceDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QHttp2Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttp2Stream *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->headersReceived((*reinterpret_cast< std::add_pointer_t<HPack::HttpHeader>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->headersUpdated(); break;
        case 2: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<Http2::Http2Error>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QHttp2Stream::State>>(_a[1]))); break;
        case 4: _t->promisedStreamReceived((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1]))); break;
        case 5: _t->uploadBlocked(); break;
        case 6: _t->dataReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->rstFrameRecived((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1]))); break;
        case 8: _t->bytesWritten((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 9: _t->uploadDeviceError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->uploadFinished(); break;
        case 11: { bool _r = _t->sendRST_STREAM((*reinterpret_cast< std::add_pointer_t<Http2::Http2Error>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->sendHEADERS((*reinterpret_cast< std::add_pointer_t<HPack::HttpHeader>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint8>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->sendHEADERS((*reinterpret_cast< std::add_pointer_t<HPack::HttpHeader>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->sendDATA((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 15: _t->sendDATA((*reinterpret_cast< std::add_pointer_t<QNonContiguousByteDevice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 16: _t->sendWINDOW_UPDATE((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1]))); break;
        case 17: _t->maybeResumeUpload(); break;
        case 18: _t->uploadDeviceReadChannelFinished(); break;
        case 19: _t->uploadDeviceDestroyed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QHttp2Stream::*)(const HPack::HttpHeader & , bool );
            if (_q_method_type _q_method = &QHttp2Stream::headersReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)();
            if (_q_method_type _q_method = &QHttp2Stream::headersUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(Http2::Http2Error , const QString & );
            if (_q_method_type _q_method = &QHttp2Stream::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(QHttp2Stream::State );
            if (_q_method_type _q_method = &QHttp2Stream::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(quint32 );
            if (_q_method_type _q_method = &QHttp2Stream::promisedStreamReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)();
            if (_q_method_type _q_method = &QHttp2Stream::uploadBlocked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(const QByteArray & , bool );
            if (_q_method_type _q_method = &QHttp2Stream::dataReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(quint32 );
            if (_q_method_type _q_method = &QHttp2Stream::rstFrameRecived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(qint64 );
            if (_q_method_type _q_method = &QHttp2Stream::bytesWritten; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)(const QString & );
            if (_q_method_type _q_method = &QHttp2Stream::uploadDeviceError; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Stream::*)();
            if (_q_method_type _q_method = &QHttp2Stream::uploadFinished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject *QHttp2Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttp2Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12QHttp2StreamE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttp2Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QHttp2Stream::headersReceived(const HPack::HttpHeader & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttp2Stream::headersUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QHttp2Stream::errorOccurred(Http2::Http2Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHttp2Stream::stateChanged(QHttp2Stream::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHttp2Stream::promisedStreamReceived(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHttp2Stream::uploadBlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QHttp2Stream::dataReceived(const QByteArray & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHttp2Stream::rstFrameRecived(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttp2Stream::bytesWritten(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttp2Stream::uploadDeviceError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttp2Stream::uploadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
namespace {
struct qt_meta_tag_ZN16QHttp2ConnectionE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16QHttp2ConnectionE = QtMocHelpers::stringData(
    "QHttp2Connection",
    "newIncomingStream",
    "",
    "QHttp2Stream*",
    "stream",
    "newPromisedStream",
    "errorReceived",
    "connectionClosed",
    "settingsFrameReceived",
    "pingFrameRecived",
    "QHttp2Connection::PingState",
    "state",
    "errorOccurred",
    "Http2::Http2Error",
    "errorCode",
    "errorString",
    "receivedGOAWAY",
    "lastStreamID",
    "receivedEND_STREAM",
    "streamID",
    "sendPing",
    "QByteArrayView",
    "data",
    "handleReadyRead",
    "handleConnectionClosure",
    "CreateStreamError",
    "MaxConcurrentStreamsReached",
    "StreamIdsExhausted",
    "ReceivedGOAWAY",
    "UnknownError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16QHttp2ConnectionE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       1,  123, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    2 /* Public */,
       5,    1,   95,    2, 0x06,    4 /* Public */,
       6,    0,   98,    2, 0x06,    6 /* Public */,
       7,    0,   99,    2, 0x06,    7 /* Public */,
       8,    0,  100,    2, 0x06,    8 /* Public */,
       9,    1,  101,    2, 0x06,    9 /* Public */,
      12,    2,  104,    2, 0x06,   11 /* Public */,
      16,    2,  109,    2, 0x06,   14 /* Public */,
      18,    1,  114,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  117,    2, 0x0a,   19 /* Public */,
      20,    1,  118,    2, 0x0a,   20 /* Public */,
      23,    0,  121,    2, 0x0a,   22 /* Public */,
      24,    0,  122,    2, 0x0a,   23 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 13, QMetaType::UInt,   14,   17,
    QMetaType::Void, QMetaType::UInt,   19,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      25,   25, 0x2,    4,  128,

 // enum data: key, value
      26, uint(QHttp2Connection::CreateStreamError::MaxConcurrentStreamsReached),
      27, uint(QHttp2Connection::CreateStreamError::StreamIdsExhausted),
      28, uint(QHttp2Connection::CreateStreamError::ReceivedGOAWAY),
      29, uint(QHttp2Connection::CreateStreamError::UnknownError),

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttp2Connection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN16QHttp2ConnectionE.offsetsAndSizes,
    qt_meta_data_ZN16QHttp2ConnectionE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16QHttp2ConnectionE_t,
        // enum 'CreateStreamError'
        QtPrivate::TypeAndForceComplete<QHttp2Connection::CreateStreamError, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttp2Connection, std::true_type>,
        // method 'newIncomingStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHttp2Stream *, std::false_type>,
        // method 'newPromisedStream'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHttp2Stream *, std::false_type>,
        // method 'errorReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'settingsFrameReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pingFrameRecived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QHttp2Connection::PingState, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Http2::Http2Error, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'receivedGOAWAY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Http2::Http2Error, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'receivedEND_STREAM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint32, std::false_type>,
        // method 'sendPing'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendPing'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArrayView, std::false_type>,
        // method 'handleReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleConnectionClosure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QHttp2Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttp2Connection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newIncomingStream((*reinterpret_cast< std::add_pointer_t<QHttp2Stream*>>(_a[1]))); break;
        case 1: _t->newPromisedStream((*reinterpret_cast< std::add_pointer_t<QHttp2Stream*>>(_a[1]))); break;
        case 2: _t->errorReceived(); break;
        case 3: _t->connectionClosed(); break;
        case 4: _t->settingsFrameReceived(); break;
        case 5: _t->pingFrameRecived((*reinterpret_cast< std::add_pointer_t<QHttp2Connection::PingState>>(_a[1]))); break;
        case 6: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<Http2::Http2Error>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->receivedGOAWAY((*reinterpret_cast< std::add_pointer_t<Http2::Http2Error>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint32>>(_a[2]))); break;
        case 8: _t->receivedEND_STREAM((*reinterpret_cast< std::add_pointer_t<quint32>>(_a[1]))); break;
        case 9: { bool _r = _t->sendPing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->sendPing((*reinterpret_cast< std::add_pointer_t<QByteArrayView>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->handleReadyRead(); break;
        case 12: _t->handleConnectionClosure(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttp2Stream* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttp2Stream* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QHttp2Connection::*)(QHttp2Stream * );
            if (_q_method_type _q_method = &QHttp2Connection::newIncomingStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)(QHttp2Stream * );
            if (_q_method_type _q_method = &QHttp2Connection::newPromisedStream; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)();
            if (_q_method_type _q_method = &QHttp2Connection::errorReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)();
            if (_q_method_type _q_method = &QHttp2Connection::connectionClosed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)();
            if (_q_method_type _q_method = &QHttp2Connection::settingsFrameReceived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)(QHttp2Connection::PingState );
            if (_q_method_type _q_method = &QHttp2Connection::pingFrameRecived; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)(Http2::Http2Error , const QString & );
            if (_q_method_type _q_method = &QHttp2Connection::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)(Http2::Http2Error , quint32 );
            if (_q_method_type _q_method = &QHttp2Connection::receivedGOAWAY; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QHttp2Connection::*)(quint32 );
            if (_q_method_type _q_method = &QHttp2Connection::receivedEND_STREAM; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *QHttp2Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttp2Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16QHttp2ConnectionE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttp2Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QHttp2Connection::newIncomingStream(QHttp2Stream * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttp2Connection::newPromisedStream(QHttp2Stream * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttp2Connection::errorReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QHttp2Connection::connectionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QHttp2Connection::settingsFrameReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QHttp2Connection::pingFrameRecived(QHttp2Connection::PingState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttp2Connection::errorOccurred(Http2::Http2Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHttp2Connection::receivedGOAWAY(Http2::Http2Error _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttp2Connection::receivedEND_STREAM(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
