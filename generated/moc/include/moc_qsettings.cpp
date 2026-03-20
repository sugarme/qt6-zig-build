/****************************************************************************
** Meta object code from reading C++ file 'qsettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/io/qsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsettings.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QSettingsE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QSettingsE = QtMocHelpers::stringData(
    "QSettings",
    "Status",
    "NoError",
    "AccessError",
    "FormatError",
    "Format",
    "NativeFormat",
    "IniFormat",
    "Registry32Format",
    "Registry64Format",
    "InvalidFormat",
    "CustomFormat1",
    "CustomFormat2",
    "CustomFormat3",
    "CustomFormat4",
    "CustomFormat5",
    "CustomFormat6",
    "CustomFormat7",
    "CustomFormat8",
    "CustomFormat9",
    "CustomFormat10",
    "CustomFormat11",
    "CustomFormat12",
    "CustomFormat13",
    "CustomFormat14",
    "CustomFormat15",
    "CustomFormat16",
    "Scope",
    "UserScope",
    "SystemScope"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QSettingsE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   29,
       5,    5, 0x0,   21,   35,
      27,   27, 0x0,    2,   77,

 // enum data: key, value
       2, uint(QSettings::NoError),
       3, uint(QSettings::AccessError),
       4, uint(QSettings::FormatError),
       6, uint(QSettings::NativeFormat),
       7, uint(QSettings::IniFormat),
       8, uint(QSettings::Registry32Format),
       9, uint(QSettings::Registry64Format),
      10, uint(QSettings::InvalidFormat),
      11, uint(QSettings::CustomFormat1),
      12, uint(QSettings::CustomFormat2),
      13, uint(QSettings::CustomFormat3),
      14, uint(QSettings::CustomFormat4),
      15, uint(QSettings::CustomFormat5),
      16, uint(QSettings::CustomFormat6),
      17, uint(QSettings::CustomFormat7),
      18, uint(QSettings::CustomFormat8),
      19, uint(QSettings::CustomFormat9),
      20, uint(QSettings::CustomFormat10),
      21, uint(QSettings::CustomFormat11),
      22, uint(QSettings::CustomFormat12),
      23, uint(QSettings::CustomFormat13),
      24, uint(QSettings::CustomFormat14),
      25, uint(QSettings::CustomFormat15),
      26, uint(QSettings::CustomFormat16),
      28, uint(QSettings::UserScope),
      29, uint(QSettings::SystemScope),

       0        // eod
};

Q_CONSTINIT const QMetaObject QSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN9QSettingsE.offsetsAndSizes,
    qt_meta_data_ZN9QSettingsE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QSettingsE_t,
        // enum 'Status'
        QtPrivate::TypeAndForceComplete<QSettings::Status, std::true_type>,
        // enum 'Format'
        QtPrivate::TypeAndForceComplete<QSettings::Format, std::true_type>,
        // enum 'Scope'
        QtPrivate::TypeAndForceComplete<QSettings::Scope, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QSettings, std::true_type>
    >,
    nullptr
} };

void QSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QSettings *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QSettingsE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
