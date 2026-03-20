/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreplyimpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/access/qnetworkreplyimpl_p.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreplyimpl_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QNetworkReplyImplE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17QNetworkReplyImplE = QtMocHelpers::stringData(
    "QNetworkReplyImpl",
    "_q_startOperation",
    "",
    "_q_copyReadyRead",
    "_q_copyReadChannelFinished",
    "_q_bufferOutgoingData",
    "_q_bufferOutgoingDataFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17QNetworkReplyImplE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QNetworkReplyImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QNetworkReply::staticMetaObject>(),
    qt_meta_stringdata_ZN17QNetworkReplyImplE.offsetsAndSizes,
    qt_meta_data_ZN17QNetworkReplyImplE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17QNetworkReplyImplE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QNetworkReplyImpl, std::true_type>,
        // method '_q_startOperation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_copyReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_copyReadChannelFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_bufferOutgoingData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_bufferOutgoingDataFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QNetworkReplyImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QNetworkReplyImpl *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->d_func()->_q_startOperation(); break;
        case 1: _t->d_func()->_q_copyReadyRead(); break;
        case 2: _t->d_func()->_q_copyReadChannelFinished(); break;
        case 3: _t->d_func()->_q_bufferOutgoingData(); break;
        case 4: _t->d_func()->_q_bufferOutgoingDataFinished(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QNetworkReplyImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReplyImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17QNetworkReplyImplE.stringdata0))
        return static_cast<void*>(this);
    return QNetworkReply::qt_metacast(_clname);
}

int QNetworkReplyImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
