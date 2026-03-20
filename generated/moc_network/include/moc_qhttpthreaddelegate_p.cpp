/****************************************************************************
** Meta object code from reading C++ file 'qhttpthreaddelegate_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qhttpthreaddelegate_p.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QNetworkProxy>
#include <QtNetwork/QAuthenticator>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpthreaddelegate_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19QHttpThreadDelegateE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19QHttpThreadDelegateE = QtMocHelpers::stringData(
    "QHttpThreadDelegate",
    "authenticationRequired",
    "",
    "QHttpNetworkRequest",
    "request",
    "QAuthenticator*",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "encrypted",
    "sslErrors",
    "QList<QSslError>",
    "bool*",
    "QList<QSslError>*",
    "sslConfigurationChanged",
    "QSslConfiguration",
    "preSharedKeyAuthenticationRequired",
    "QSslPreSharedKeyAuthenticator*",
    "socketStartedConnecting",
    "requestSent",
    "downloadMetaData",
    "QHttpHeaders",
    "QSharedPointer<char>",
    "downloadProgress",
    "downloadData",
    "error",
    "QNetworkReply::NetworkError",
    "downloadFinished",
    "redirected",
    "url",
    "httpStatus",
    "maxRedirectsRemainig",
    "startRequest",
    "abortRequest",
    "readBufferSizeChanged",
    "size",
    "readBufferFreed",
    "startRequestSynchronously",
    "readyReadSlot",
    "finishedSlot",
    "finishedWithErrorSlot",
    "errorCode",
    "detail",
    "synchronousFinishedSlot",
    "synchronousFinishedWithErrorSlot",
    "headerChangedSlot",
    "synchronousHeaderChangedSlot",
    "dataReadProgressSlot",
    "done",
    "total",
    "cacheCredentialsSlot",
    "authenticator",
    "encryptedSlot",
    "sslErrorsSlot",
    "errors",
    "preSharedKeyAuthenticationRequiredSlot",
    "synchronousAuthenticationRequiredSlot",
    "synchronousProxyAuthenticationRequiredSlot"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19QHttpThreadDelegateE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  224,    2, 0x06,    1 /* Public */,
       6,    2,  229,    2, 0x06,    4 /* Public */,
       8,    0,  234,    2, 0x06,    7 /* Public */,
       9,    3,  235,    2, 0x06,    8 /* Public */,
      13,    1,  242,    2, 0x06,   12 /* Public */,
      15,    1,  245,    2, 0x06,   14 /* Public */,
      17,    0,  248,    2, 0x06,   16 /* Public */,
      18,    0,  249,    2, 0x06,   17 /* Public */,
      19,    9,  250,    2, 0x06,   18 /* Public */,
      22,    2,  269,    2, 0x06,   28 /* Public */,
      23,    1,  274,    2, 0x06,   31 /* Public */,
      24,    2,  277,    2, 0x06,   33 /* Public */,
      26,    0,  282,    2, 0x06,   36 /* Public */,
      27,    3,  283,    2, 0x06,   37 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      31,    0,  290,    2, 0x0a,   41 /* Public */,
      32,    0,  291,    2, 0x0a,   42 /* Public */,
      33,    1,  292,    2, 0x0a,   43 /* Public */,
      35,    1,  295,    2, 0x0a,   45 /* Public */,
      36,    0,  298,    2, 0x0a,   47 /* Public */,
      37,    0,  299,    2, 0x09,   48 /* Protected */,
      38,    0,  300,    2, 0x09,   49 /* Protected */,
      39,    2,  301,    2, 0x09,   50 /* Protected */,
      39,    1,  306,    2, 0x29,   53 /* Protected | MethodCloned */,
      42,    0,  309,    2, 0x09,   55 /* Protected */,
      43,    2,  310,    2, 0x09,   56 /* Protected */,
      43,    1,  315,    2, 0x29,   59 /* Protected | MethodCloned */,
      44,    0,  318,    2, 0x09,   61 /* Protected */,
      45,    0,  319,    2, 0x09,   62 /* Protected */,
      46,    2,  320,    2, 0x09,   63 /* Protected */,
      49,    2,  325,    2, 0x09,   66 /* Protected */,
      51,    0,  330,    2, 0x09,   69 /* Protected */,
      52,    1,  331,    2, 0x09,   70 /* Protected */,
      54,    1,  334,    2, 0x09,   72 /* Protected */,
      55,    2,  337,    2, 0x09,   74 /* Protected */,
      56,    2,  342,    2, 0x09,   77 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11, 0x80000000 | 12,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int, QMetaType::QString, QMetaType::Bool, 0x80000000 | 21, QMetaType::LongLong, QMetaType::LongLong, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   28,   29,   30,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   34,
    QMetaType::Void, QMetaType::LongLong,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QString,   40,   41,
    QMetaType::Void, 0x80000000 | 25,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QString,   40,   41,
    QMetaType::Void, 0x80000000 | 25,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   47,   48,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,   50,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   53,
    QMetaType::Void, 0x80000000 | 16,   50,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttpThreadDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN19QHttpThreadDelegateE.offsetsAndSizes,
    qt_meta_data_ZN19QHttpThreadDelegateE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19QHttpThreadDelegateE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttpThreadDelegate, std::true_type>,
        // method 'authenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHttpNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'encrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QSslError> *, std::false_type>,
        // method 'sslConfigurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslConfiguration &, std::false_type>,
        // method 'preSharedKeyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method 'socketStartedConnecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadMetaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHttpHeaders &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSharedPointer<char>, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redirected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'startRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readBufferSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'readBufferFreed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'startRequestSynchronously'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyReadSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finishedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finishedWithErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'finishedWithErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'synchronousFinishedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'synchronousFinishedWithErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'synchronousFinishedWithErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'headerChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'synchronousHeaderChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataReadProgressSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'cacheCredentialsSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHttpNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'encryptedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrorsSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'preSharedKeyAuthenticationRequiredSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslPreSharedKeyAuthenticator *, std::false_type>,
        // method 'synchronousAuthenticationRequiredSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHttpNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'synchronousProxyAuthenticationRequiredSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>
    >,
    nullptr
} };

void QHttpThreadDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttpThreadDelegate *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->authenticationRequired((*reinterpret_cast< std::add_pointer_t<QHttpNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 2: _t->encrypted(); break;
        case 3: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QSslError>*>>(_a[3]))); break;
        case 4: _t->sslConfigurationChanged((*reinterpret_cast< std::add_pointer_t<QSslConfiguration>>(_a[1]))); break;
        case 5: _t->preSharedKeyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 6: _t->socketStartedConnecting(); break;
        case 7: _t->requestSent(); break;
        case 8: _t->downloadMetaData((*reinterpret_cast< std::add_pointer_t<QHttpHeaders>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QSharedPointer<char>>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[9]))); break;
        case 9: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 10: _t->downloadData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 11: _t->error((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->downloadFinished(); break;
        case 13: _t->redirected((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->startRequest(); break;
        case 15: _t->abortRequest(); break;
        case 16: _t->readBufferSizeChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 17: _t->readBufferFreed((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 18: _t->startRequestSynchronously(); break;
        case 19: _t->readyReadSlot(); break;
        case 20: _t->finishedSlot(); break;
        case 21: _t->finishedWithErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->finishedWithErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 23: _t->synchronousFinishedSlot(); break;
        case 24: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 26: _t->headerChangedSlot(); break;
        case 27: _t->synchronousHeaderChangedSlot(); break;
        case 28: _t->dataReadProgressSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 29: _t->cacheCredentialsSlot((*reinterpret_cast< std::add_pointer_t<QHttpNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 30: _t->encryptedSlot(); break;
        case 31: _t->sslErrorsSlot((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 32: _t->preSharedKeyAuthenticationRequiredSlot((*reinterpret_cast< std::add_pointer_t<QSslPreSharedKeyAuthenticator*>>(_a[1]))); break;
        case 33: _t->synchronousAuthenticationRequiredSlot((*reinterpret_cast< std::add_pointer_t<QHttpNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 34: _t->synchronousProxyAuthenticationRequiredSlot((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttpNetworkRequest >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkProxy >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslConfiguration >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttpNetworkRequest >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslPreSharedKeyAuthenticator* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QHttpNetworkRequest >(); break;
            }
            break;
        case 34:
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
            using _q_method_type = void (QHttpThreadDelegate::*)(const QHttpNetworkRequest & , QAuthenticator * );
            if (_q_method_type _q_method = &QHttpThreadDelegate::authenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QNetworkProxy & , QAuthenticator * );
            if (_q_method_type _q_method = &QHttpThreadDelegate::proxyAuthenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)();
            if (_q_method_type _q_method = &QHttpThreadDelegate::encrypted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QList<QSslError> & , bool * , QList<QSslError> * );
            if (_q_method_type _q_method = &QHttpThreadDelegate::sslErrors; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QSslConfiguration & );
            if (_q_method_type _q_method = &QHttpThreadDelegate::sslConfigurationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(QSslPreSharedKeyAuthenticator * );
            if (_q_method_type _q_method = &QHttpThreadDelegate::preSharedKeyAuthenticationRequired; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)();
            if (_q_method_type _q_method = &QHttpThreadDelegate::socketStartedConnecting; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)();
            if (_q_method_type _q_method = &QHttpThreadDelegate::requestSent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QHttpHeaders & , int , const QString & , bool , QSharedPointer<char> , qint64 , qint64 , bool , bool );
            if (_q_method_type _q_method = &QHttpThreadDelegate::downloadMetaData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &QHttpThreadDelegate::downloadProgress; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QByteArray & );
            if (_q_method_type _q_method = &QHttpThreadDelegate::downloadData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(QNetworkReply::NetworkError , const QString & );
            if (_q_method_type _q_method = &QHttpThreadDelegate::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)();
            if (_q_method_type _q_method = &QHttpThreadDelegate::downloadFinished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (QHttpThreadDelegate::*)(const QUrl & , int , int );
            if (_q_method_type _q_method = &QHttpThreadDelegate::redirected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
}

const QMetaObject *QHttpThreadDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpThreadDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN19QHttpThreadDelegateE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHttpThreadDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void QHttpThreadDelegate::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttpThreadDelegate::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttpThreadDelegate::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QHttpThreadDelegate::sslErrors(const QList<QSslError> & _t1, bool * _t2, QList<QSslError> * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHttpThreadDelegate::sslConfigurationChanged(const QSslConfiguration & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHttpThreadDelegate::preSharedKeyAuthenticationRequired(QSslPreSharedKeyAuthenticator * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttpThreadDelegate::socketStartedConnecting()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QHttpThreadDelegate::requestSent()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QHttpThreadDelegate::downloadMetaData(const QHttpHeaders & _t1, int _t2, const QString & _t3, bool _t4, QSharedPointer<char> _t5, qint64 _t6, qint64 _t7, bool _t8, bool _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttpThreadDelegate::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttpThreadDelegate::downloadData(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QHttpThreadDelegate::error(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QHttpThreadDelegate::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QHttpThreadDelegate::redirected(const QUrl & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
namespace {
struct qt_meta_tag_ZN41QNonContiguousByteDeviceThreadForwardImplE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN41QNonContiguousByteDeviceThreadForwardImplE = QtMocHelpers::stringData(
    "QNonContiguousByteDeviceThreadForwardImpl",
    "wantData",
    "",
    "processedData",
    "pos",
    "amount",
    "resetData",
    "bool*",
    "b",
    "haveDataSlot",
    "dataArray",
    "dataAtEnd",
    "dataSize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN41QNonContiguousByteDeviceThreadForwardImplE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,
       3,    2,   41,    2, 0x06,    3 /* Public */,
       6,    1,   46,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    4,   49,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray, QMetaType::Bool, QMetaType::LongLong,    4,   10,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject QNonContiguousByteDeviceThreadForwardImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QNonContiguousByteDevice::staticMetaObject>(),
    qt_meta_stringdata_ZN41QNonContiguousByteDeviceThreadForwardImplE.offsetsAndSizes,
    qt_meta_data_ZN41QNonContiguousByteDeviceThreadForwardImplE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN41QNonContiguousByteDeviceThreadForwardImplE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNonContiguousByteDeviceThreadForwardImpl, std::true_type>,
        // method 'wantData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'processedData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'resetData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool *, std::false_type>,
        // method 'haveDataSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void QNonContiguousByteDeviceThreadForwardImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNonContiguousByteDeviceThreadForwardImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->wantData((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->processedData((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->resetData((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1]))); break;
        case 3: _t->haveDataSlot((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[4]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QNonContiguousByteDeviceThreadForwardImpl::*)(qint64 );
            if (_q_method_type _q_method = &QNonContiguousByteDeviceThreadForwardImpl::wantData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QNonContiguousByteDeviceThreadForwardImpl::*)(qint64 , qint64 );
            if (_q_method_type _q_method = &QNonContiguousByteDeviceThreadForwardImpl::processedData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QNonContiguousByteDeviceThreadForwardImpl::*)(bool * );
            if (_q_method_type _q_method = &QNonContiguousByteDeviceThreadForwardImpl::resetData; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QNonContiguousByteDeviceThreadForwardImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceThreadForwardImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN41QNonContiguousByteDeviceThreadForwardImplE.stringdata0))
        return static_cast<void*>(this);
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceThreadForwardImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QNonContiguousByteDeviceThreadForwardImpl::wantData(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNonContiguousByteDeviceThreadForwardImpl::processedData(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNonContiguousByteDeviceThreadForwardImpl::resetData(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
