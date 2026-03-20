/****************************************************************************
** Meta object code from reading C++ file 'qlibrary.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/plugin/qlibrary.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlibrary.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QLibraryE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8QLibraryE = QtMocHelpers::stringData(
    "QLibrary",
    "fileName",
    "loadHints",
    "LoadHints",
    "LoadHint",
    "ResolveAllSymbolsHint",
    "ExportExternalSymbolsHint",
    "LoadArchiveMemberHint",
    "PreventUnloadHint",
    "DeepBindHint"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8QLibraryE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       2,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, 0x80000000 | 3, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    5,   34,
       3,    4, 0x1,    5,   44,

 // enum data: key, value
       5, uint(QLibrary::ResolveAllSymbolsHint),
       6, uint(QLibrary::ExportExternalSymbolsHint),
       7, uint(QLibrary::LoadArchiveMemberHint),
       8, uint(QLibrary::PreventUnloadHint),
       9, uint(QLibrary::DeepBindHint),
       5, uint(QLibrary::ResolveAllSymbolsHint),
       6, uint(QLibrary::ExportExternalSymbolsHint),
       7, uint(QLibrary::LoadArchiveMemberHint),
       8, uint(QLibrary::PreventUnloadHint),
       9, uint(QLibrary::DeepBindHint),

       0        // eod
};

Q_CONSTINIT const QMetaObject QLibrary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8QLibraryE.offsetsAndSizes,
    qt_meta_data_ZN8QLibraryE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8QLibraryE_t,
        // property 'fileName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'loadHints'
        QtPrivate::TypeAndForceComplete<LoadHints, std::true_type>,
        // enum 'LoadHint'
        QtPrivate::TypeAndForceComplete<QLibrary::LoadHint, std::true_type>,
        // enum 'LoadHints'
        QtPrivate::TypeAndForceComplete<QLibrary::LoadHints, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QLibrary, std::true_type>
    >,
    nullptr
} };

void QLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QLibrary *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->loadHints()); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLoadHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    }
}

const QMetaObject *QLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8QLibraryE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
