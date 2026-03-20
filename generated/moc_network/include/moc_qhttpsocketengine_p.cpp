/****************************************************************************
** Meta object code from reading C++ file 'qhttpsocketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/network/socket/qhttpsocketengine_p.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpsocketengine_p.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN17QHttpSocketEngineE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN17QHttpSocketEngineE = QtMocHelpers::stringData(
    "QHttpSocketEngine",
    "slotSocketConnected",
    "",
    "slotSocketDisconnected",
    "slotSocketReadNotification",
    "slotSocketBytesWritten",
    "slotSocketError",
    "QAbstractSocket::SocketError",
    "error",
    "slotSocketStateChanged",
    "QAbstractSocket::SocketState",
    "state",
    "emitPendingReadNotification",
    "emitPendingWriteNotification",
    "emitPendingConnectionNotification"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN17QHttpSocketEngineE[] = {

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
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    1,   72,    2, 0x0a,    5 /* Public */,
       9,    1,   75,    2, 0x0a,    7 /* Public */,
      12,    0,   78,    2, 0x08,    9 /* Private */,
      13,    0,   79,    2, 0x08,   10 /* Private */,
      14,    0,   80,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QHttpSocketEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSocketEngine::staticMetaObject>(),
    qt_meta_stringdata_ZN17QHttpSocketEngineE.offsetsAndSizes,
    qt_meta_data_ZN17QHttpSocketEngineE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN17QHttpSocketEngineE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QHttpSocketEngine, std::true_type>,
        // method 'slotSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSocketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSocketReadNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSocketBytesWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'slotSocketStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketState, std::false_type>,
        // method 'emitPendingReadNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitPendingWriteNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitPendingConnectionNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QHttpSocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QHttpSocketEngine *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->slotSocketConnected(); break;
        case 1: _t->slotSocketDisconnected(); break;
        case 2: _t->slotSocketReadNotification(); break;
        case 3: _t->slotSocketBytesWritten(); break;
        case 4: _t->slotSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 5: _t->slotSocketStateChanged((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketState>>(_a[1]))); break;
        case 6: _t->emitPendingReadNotification(); break;
        case 7: _t->emitPendingWriteNotification(); break;
        case 8: _t->emitPendingConnectionNotification(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QHttpSocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpSocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN17QHttpSocketEngineE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSocketEngine::qt_metacast(_clname);
}

int QHttpSocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocketEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
