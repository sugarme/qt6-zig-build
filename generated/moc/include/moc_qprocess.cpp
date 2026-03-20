/****************************************************************************
** Meta object code from reading C++ file 'qprocess.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/io/qprocess.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocess.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QProcessE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8QProcessE = QtMocHelpers::stringData(
    "QProcess",
    "started",
    "",
    "finished",
    "exitCode",
    "QProcess::ExitStatus",
    "exitStatus",
    "errorOccurred",
    "QProcess::ProcessError",
    "error",
    "stateChanged",
    "QProcess::ProcessState",
    "state",
    "readyReadStandardOutput",
    "readyReadStandardError",
    "terminate",
    "kill",
    "_q_canReadStandardOutput",
    "_q_canReadStandardError",
    "_q_startupNotification",
    "_q_processDied",
    "ProcessError",
    "FailedToStart",
    "Crashed",
    "Timedout",
    "ReadError",
    "WriteError",
    "UnknownError",
    "ProcessState",
    "NotRunning",
    "Starting",
    "Running",
    "ProcessChannel",
    "StandardOutput",
    "StandardError",
    "ProcessChannelMode",
    "SeparateChannels",
    "MergedChannels",
    "ForwardedChannels",
    "ForwardedOutputChannel",
    "ForwardedErrorChannel",
    "InputChannelMode",
    "ManagedInputChannel",
    "ForwardedInputChannel",
    "ExitStatus",
    "NormalExit",
    "CrashExit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8QProcessE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       6,  115, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    7 /* Public */,
       3,    2,   93,    2, 0x06,    8 /* Public */,
       3,    1,   98,    2, 0x26,   11 /* Public | MethodCloned */,
       7,    1,  101,    2, 0x06,   13 /* Public */,
      10,    1,  104,    2, 0x06,   15 /* Public */,
      13,    0,  107,    2, 0x06,   17 /* Public */,
      14,    0,  108,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  109,    2, 0x0a,   19 /* Public */,
      16,    0,  110,    2, 0x0a,   20 /* Public */,
      17,    0,  111,    2, 0x08,   21 /* Private */,
      18,    0,  112,    2, 0x08,   22 /* Private */,
      19,    0,  113,    2, 0x08,   23 /* Private */,
      20,    0,  114,    2, 0x08,   24 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      21,   21, 0x0,    6,  145,
      28,   28, 0x0,    3,  157,
      32,   32, 0x0,    2,  163,
      35,   35, 0x0,    5,  167,
      41,   41, 0x0,    2,  177,
      44,   44, 0x0,    2,  181,

 // enum data: key, value
      22, uint(QProcess::FailedToStart),
      23, uint(QProcess::Crashed),
      24, uint(QProcess::Timedout),
      25, uint(QProcess::ReadError),
      26, uint(QProcess::WriteError),
      27, uint(QProcess::UnknownError),
      29, uint(QProcess::NotRunning),
      30, uint(QProcess::Starting),
      31, uint(QProcess::Running),
      33, uint(QProcess::StandardOutput),
      34, uint(QProcess::StandardError),
      36, uint(QProcess::SeparateChannels),
      37, uint(QProcess::MergedChannels),
      38, uint(QProcess::ForwardedChannels),
      39, uint(QProcess::ForwardedOutputChannel),
      40, uint(QProcess::ForwardedErrorChannel),
      42, uint(QProcess::ManagedInputChannel),
      43, uint(QProcess::ForwardedInputChannel),
      45, uint(QProcess::NormalExit),
      46, uint(QProcess::CrashExit),

       0        // eod
};

Q_CONSTINIT const QMetaObject QProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_ZN8QProcessE.offsetsAndSizes,
    qt_meta_data_ZN8QProcessE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8QProcessE_t,
        // enum 'ProcessError'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::true_type>,
        // enum 'ProcessState'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessState, std::true_type>,
        // enum 'ProcessChannel'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessChannel, std::true_type>,
        // enum 'ProcessChannelMode'
        QtPrivate::TypeAndForceComplete<QProcess::ProcessChannelMode, std::true_type>,
        // enum 'InputChannelMode'
        QtPrivate::TypeAndForceComplete<QProcess::InputChannelMode, std::true_type>,
        // enum 'ExitStatus'
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QProcess, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'errorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessState, std::false_type>,
        // method 'readyReadStandardOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readyReadStandardError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'terminate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'kill'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_canReadStandardOutput'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_canReadStandardError'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_startupNotification'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_processDied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QProcess *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->errorOccurred((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessState>>(_a[1])), QPrivateSignal()); break;
        case 5: _t->readyReadStandardOutput(QPrivateSignal()); break;
        case 6: _t->readyReadStandardError(QPrivateSignal()); break;
        case 7: _t->terminate(); break;
        case 8: _t->kill(); break;
        case 9: { bool _r = _t->d_func()->_q_canReadStandardOutput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->d_func()->_q_canReadStandardError();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->d_func()->_q_startupNotification();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->d_func()->_q_processDied(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QProcess::*)(QPrivateSignal);
            if (_q_method_type _q_method = &QProcess::started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QProcess::*)(int , QProcess::ExitStatus );
            if (_q_method_type _q_method = &QProcess::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QProcess::*)(QProcess::ProcessError );
            if (_q_method_type _q_method = &QProcess::errorOccurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QProcess::*)(QProcess::ProcessState , QPrivateSignal);
            if (_q_method_type _q_method = &QProcess::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QProcess::*)(QPrivateSignal);
            if (_q_method_type _q_method = &QProcess::readyReadStandardOutput; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QProcess::*)(QPrivateSignal);
            if (_q_method_type _q_method = &QProcess::readyReadStandardError; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *QProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8QProcessE.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int QProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QProcess::started(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProcess::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QProcess::errorOccurred(QProcess::ProcessError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QProcess::stateChanged(QProcess::ProcessState _t1, QPrivateSignal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QProcess::readyReadStandardOutput(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QProcess::readyReadStandardError(QPrivateSignal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
