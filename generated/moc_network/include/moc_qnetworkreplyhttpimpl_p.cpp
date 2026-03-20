/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreplyhttpimpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qnetworkreplyhttpimpl_p.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QAuthenticator>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreplyhttpimpl_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21QNetworkReplyHttpImplE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN21QNetworkReplyHttpImplE = QtMocHelpers::stringData(
    "QNetworkReplyHttpImpl",
    "startHttpRequest",
    "",
    "abortHttpRequest",
    "readBufferSizeChanged",
    "size",
    "readBufferFreed",
    "startHttpRequestSynchronously",
    "haveUploadData",
    "pos",
    "dataArray",
    "dataAtEnd",
    "dataSize",
    "_q_startOperation",
    "_q_cacheLoadReadyRead",
    "_q_bufferOutgoingData",
    "_q_bufferOutgoingDataFinished",
    "_q_transferTimedOut",
    "_q_finished",
    "_q_error",
    "QNetworkReply::NetworkError",
    "replyDownloadData",
    "replyFinished",
    "replyDownloadProgressSlot",
    "httpAuthenticationRequired",
    "QHttpNetworkRequest",
    "QAuthenticator*",
    "httpError",
    "replyEncrypted",
    "replySslErrors",
    "QList<QSslError>",
    "bool*",
    "QList<QSslError>*",
    "replySslConfigurationChanged",
    "QSslConfiguration",
    "replyPreSharedKeyAuthenticationRequiredSlot",
    "QSslPreSharedKeyAuthenticator*",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "proxy",
    "auth",
    "resetUploadDataSlot",
    "r",
    "wantUploadDataSlot",
    "sentUploadDataSlot",
    "uploadByteDeviceReadyReadSlot",
    "emitReplyUploadProgress",
    "_q_cacheSaveDeviceAboutToClose",
    "_q_metaDataChanged",
    "onRedirected",
    "followRedirect"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN21QNetworkReplyHttpImplE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x06,    1 /* Public */,
       3,    0,  207,    2, 0x06,    2 /* Public */,
       4,    1,  208,    2, 0x06,    3 /* Public */,
       6,    1,  211,    2, 0x06,    5 /* Public */,
       7,    0,  214,    2, 0x06,    7 /* Public */,
       8,    4,  215,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  224,    2, 0x0a,   13 /* Public */,
      14,    0,  225,    2, 0x0a,   14 /* Public */,
      15,    0,  226,    2, 0x0a,   15 /* Public */,
      16,    0,  227,    2, 0x0a,   16 /* Public */,
      17,    0,  228,    2, 0x0a,   17 /* Public */,
      18,    0,  229,    2, 0x0a,   18 /* Public */,
      19,    2,  230,    2, 0x0a,   19 /* Public */,
      21,    1,  235,    2, 0x0a,   22 /* Public */,
      22,    0,  238,    2, 0x0a,   24 /* Public */,
      23,    2,  239,    2, 0x0a,   25 /* Public */,
      24,    2,  244,    2, 0x0a,   28 /* Public */,
      27,    2,  249,    2, 0x0a,   31 /* Public */,
      28,    0,  254,    2, 0x0a,   34 /* Public */,
      29,    3,  255,    2, 0x0a,   35 /* Public */,
      33,    1,  262,    2, 0x0a,   39 /* Public */,
      35,    1,  265,    2, 0x0a,   41 /* Public */,
      37,    2,  268,    2, 0x0a,   43 /* Public */,
      41,    1,  273,    2, 0x0a,   46 /* Public */,
      43,    1,  276,    2, 0x0a,   48 /* Public */,
      44,    2,  279,    2, 0x0a,   50 /* Public */,
      45,    0,  284,    2, 0x0a,   53 /* Public */,
      46,    2,  285,    2, 0x0a,   54 /* Public */,
      47,    0,  290,    2, 0x0a,   57 /* Public */,
      48,    0,  291,    2, 0x0a,   58 /* Public */,
      49,    3,  292,    2, 0x0a,   59 /* Public */,
      50,    0,  299,    2, 0x0a,   63 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray, QMetaType::Bool, QMetaType::LongLong,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 26,    2,    2,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 31, 0x80000000 | 32,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 34,    2,
    QMetaType::Void, 0x80000000 | 36,    2,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 26,   39,   40,
    QMetaType::Void, 0x80000000 | 31,   42,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkReplyHttpImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QNetworkReply::staticMetaObject>(),
    qt_meta_stringdata_ZN21QNetworkReplyHttpImplE.offsetsAndSizes,
    qt_meta_data_ZN21QNetworkReplyHttpImplE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN21QNetworkReplyHttpImplE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkReplyHttpImpl, std::true_type>,
        // method 'startHttpRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortHttpRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readBufferSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'readBufferFreed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'startHttpRequestSynchronously'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'haveUploadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_startOperation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_cacheLoadReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_bufferOutgoingData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_bufferOutgoingDataFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_transferTimedOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'replyDownloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'replyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replyDownloadProgressSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'httpAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHttpNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'httpError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'replyEncrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replySslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QSslError> *, std::false_type>,
        // method 'replySslConfigurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslConfiguration &, std::false_type>,
        // method 'replyPreSharedKeyAuthenticationRequiredSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'resetUploadDataSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'wantUploadDataSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'sentUploadDataSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'uploadByteDeviceReadyReadSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitReplyUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method '_q_cacheSaveDeviceAboutToClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_metaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRedirected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'followRedirect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QNetworkReplyHttpImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNetworkReplyHttpImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startHttpRequest(); break;
        case 1: _t->abortHttpRequest(); break;
        case 2: _t->readBufferSizeChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->readBufferFreed((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->startHttpRequestSynchronously(); break;
        case 5: _t->haveUploadData((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[4]))); break;
        case 6: _t->d_func()->_q_startOperation(); break;
        case 7: _t->d_func()->_q_cacheLoadReadyRead(); break;
        case 8: _t->d_func()->_q_bufferOutgoingData(); break;
        case 9: _t->d_func()->_q_bufferOutgoingDataFinished(); break;
        case 10: _t->d_func()->_q_transferTimedOut(); break;
        case 11: _t->d_func()->_q_finished(); break;
        case 12: _t->d_func()->_q_error((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->d_func()->replyDownloadData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 14: _t->d_func()->replyFinished(); break;
        case 15: _t->d_func()->replyDownloadProgressSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 16: _t->d_func()->httpAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QHttpNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 17: _t->d_func()->httpError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->d_func()->replyEncrypted(); break;
        case 19: _t->d_func()->replySslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QSslError>*>>(_a[3]))); break;
        case 20: _t->d_func()->replySslConfigurationChanged((*reinterpret_cast< std::add_pointer_t<QSslConfiguration>>(_a[1]))); break;
        case 21: _t->d_func()->replyPreSharedKeyAuthenticationRequiredSlot((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 22: _t->d_func()->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 23: _t->d_func()->resetUploadDataSlot((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1]))); break;
        case 24: _t->d_func()->wantUploadDataSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 25: _t->d_func()->sentUploadDataSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 26: _t->d_func()->uploadByteDeviceReadyReadSlot(); break;
        case 27: _t->d_func()->emitReplyUploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 28: _t->d_func()->_q_cacheSaveDeviceAboutToClose(); break;
        case 29: _t->d_func()->_q_metaDataChanged(); break;
        case 30: _t->d_func()->onRedirected((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 31: _t->d_func()->followRedirect(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttpNetworkRequest >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslConfiguration >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkProxy >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)();
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::startHttpRequest; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)();
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::abortHttpRequest; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)(qint64 );
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::readBufferSizeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)(qint64 );
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::readBufferFreed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)();
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::startHttpRequestSynchronously; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QNetworkReplyHttpImpl::*)(const qint64 , const QByteArray & , bool , qint64 );
            if (_q_method_type _q_method = &QNetworkReplyHttpImpl::haveUploadData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *QNetworkReplyHttpImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReplyHttpImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN21QNetworkReplyHttpImplE.stringdata0))
        return static_cast<void*>(this);
    return QNetworkReply::qt_metacast(_clname);
}

int QNetworkReplyHttpImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void QNetworkReplyHttpImpl::startHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QNetworkReplyHttpImpl::abortHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QNetworkReplyHttpImpl::readBufferSizeChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkReplyHttpImpl::readBufferFreed(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkReplyHttpImpl::startHttpRequestSynchronously()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QNetworkReplyHttpImpl::haveUploadData(const qint64 _t1, const QByteArray & _t2, bool _t3, qint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
