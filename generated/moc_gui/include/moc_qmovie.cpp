/****************************************************************************
** Meta object code from reading C++ file 'qmovie.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/gui/image/qmovie.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QProperty>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmovie.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6QMovieE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6QMovieE = QtMocHelpers::stringData(
    "QMovie",
    "started",
    "",
    "resized",
    "size",
    "updated",
    "rect",
    "stateChanged",
    "QMovie::MovieState",
    "state",
    "error",
    "QImageReader::ImageReaderError",
    "finished",
    "frameChanged",
    "frameNumber",
    "start",
    "jumpToNextFrame",
    "setPaused",
    "paused",
    "stop",
    "setSpeed",
    "percentSpeed",
    "_q_loadNextFrame",
    "speed",
    "cacheMode",
    "CacheMode",
    "MovieState",
    "NotRunning",
    "Paused",
    "Running",
    "CacheNone",
    "CacheAll"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6QMovieE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  119, // properties
       2,  129, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    5 /* Public */,
       3,    1,   93,    2, 0x06,    6 /* Public */,
       5,    1,   96,    2, 0x06,    8 /* Public */,
       7,    1,   99,    2, 0x06,   10 /* Public */,
      10,    1,  102,    2, 0x06,   12 /* Public */,
      12,    0,  105,    2, 0x06,   14 /* Public */,
      13,    1,  106,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  109,    2, 0x0a,   17 /* Public */,
      16,    0,  110,    2, 0x0a,   18 /* Public */,
      17,    1,  111,    2, 0x0a,   19 /* Public */,
      19,    0,  114,    2, 0x0a,   21 /* Public */,
      20,    1,  115,    2, 0x0a,   22 /* Public */,
      22,    0,  118,    2, 0x08,   24 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    4,
    QMetaType::Void, QMetaType::QRect,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      23, QMetaType::Int, 0x02015103, uint(-1), 0,
      24, 0x80000000 | 25, 0x0201510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      26,   26, 0x0,    3,  139,
      25,   25, 0x0,    2,  145,

 // enum data: key, value
      27, uint(QMovie::NotRunning),
      28, uint(QMovie::Paused),
      29, uint(QMovie::Running),
      30, uint(QMovie::CacheNone),
      31, uint(QMovie::CacheAll),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMovie::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6QMovieE.offsetsAndSizes,
    qt_meta_data_ZN6QMovieE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6QMovieE_t,
        // property 'speed'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cacheMode'
        QtPrivate::TypeAndForceComplete<CacheMode, std::true_type>,
        // enum 'MovieState'
        QtPrivate::TypeAndForceComplete<QMovie::MovieState, std::true_type>,
        // enum 'CacheMode'
        QtPrivate::TypeAndForceComplete<QMovie::CacheMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMovie, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRect &, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMovie::MovieState, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImageReader::ImageReaderError, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'frameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jumpToNextFrame'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_q_loadNextFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMovie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QMovie *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->resized((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QMovie::MovieState>>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< std::add_pointer_t<QImageReader::ImageReaderError>>(_a[1]))); break;
        case 5: _t->finished(); break;
        case 6: _t->frameChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->start(); break;
        case 8: { bool _r = _t->jumpToNextFrame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->stop(); break;
        case 11: _t->setSpeed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->d_func()->_q_loadNextFrame(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMovie::*)();
            if (_q_method_type _q_method = &QMovie::started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)(const QSize & );
            if (_q_method_type _q_method = &QMovie::resized; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)(const QRect & );
            if (_q_method_type _q_method = &QMovie::updated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)(QMovie::MovieState );
            if (_q_method_type _q_method = &QMovie::stateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)(QImageReader::ImageReaderError );
            if (_q_method_type _q_method = &QMovie::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)();
            if (_q_method_type _q_method = &QMovie::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QMovie::*)(int );
            if (_q_method_type _q_method = &QMovie::frameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< CacheMode*>(_v) = _t->cacheMode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCacheMode(*reinterpret_cast< CacheMode*>(_v)); break;
        default: break;
        }
    }
    if (_c == QMetaObject::BindableProperty) {
        switch (_id) {
        case 0: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableSpeed(); break;
        case 1: *static_cast<QUntypedBindable *>(_a[0]) = _t->bindableCacheMode(); break;
        default: break;
        }
    }
}

const QMetaObject *QMovie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMovie::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6QMovieE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMovie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QMovie::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMovie::resized(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMovie::updated(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMovie::stateChanged(QMovie::MovieState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMovie::error(QImageReader::ImageReaderError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMovie::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QMovie::frameChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
