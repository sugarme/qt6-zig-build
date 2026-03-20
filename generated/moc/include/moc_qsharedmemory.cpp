/****************************************************************************
** Meta object code from reading C++ file 'qsharedmemory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/ipc/qsharedmemory.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsharedmemory.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QSharedMemoryE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QSharedMemoryE = QtMocHelpers::stringData(
    "QSharedMemory",
    "AccessMode",
    "ReadOnly",
    "ReadWrite",
    "SharedMemoryError",
    "NoError",
    "PermissionDenied",
    "InvalidSize",
    "KeyError",
    "AlreadyExists",
    "NotFound",
    "LockError",
    "OutOfResources",
    "UnknownError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QSharedMemoryE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    2,   24,
       4,    4, 0x0,    9,   28,

 // enum data: key, value
       2, uint(QSharedMemory::ReadOnly),
       3, uint(QSharedMemory::ReadWrite),
       5, uint(QSharedMemory::NoError),
       6, uint(QSharedMemory::PermissionDenied),
       7, uint(QSharedMemory::InvalidSize),
       8, uint(QSharedMemory::KeyError),
       9, uint(QSharedMemory::AlreadyExists),
      10, uint(QSharedMemory::NotFound),
      11, uint(QSharedMemory::LockError),
      12, uint(QSharedMemory::OutOfResources),
      13, uint(QSharedMemory::UnknownError),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSharedMemory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN13QSharedMemoryE.offsetsAndSizes,
    qt_meta_data_ZN13QSharedMemoryE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QSharedMemoryE_t,
        // enum 'AccessMode'
        QtPrivate::TypeAndForceComplete<QSharedMemory::AccessMode, std::true_type>,
        // enum 'SharedMemoryError'
        QtPrivate::TypeAndForceComplete<QSharedMemory::SharedMemoryError, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSharedMemory, std::true_type>
    >,
    nullptr
} };

void QSharedMemory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QSharedMemory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QSharedMemory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSharedMemory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QSharedMemoryE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSharedMemory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
