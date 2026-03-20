/****************************************************************************
** Meta object code from reading C++ file 'qwindowsuiamainprovider.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "uiautomation/qwindowsuiamainprovider.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsuiamainprovider.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN23QWindowsUiaMainProviderE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN23QWindowsUiaMainProviderE = QtMocHelpers::stringData(
    "QWindowsUiaMainProvider"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN23QWindowsUiaMainProviderE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject QWindowsUiaMainProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWindowsUiaBaseProvider::staticMetaObject>(),
    qt_meta_stringdata_ZN23QWindowsUiaMainProviderE.offsetsAndSizes,
    qt_meta_data_ZN23QWindowsUiaMainProviderE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN23QWindowsUiaMainProviderE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWindowsUiaMainProvider, std::true_type>
    >,
    nullptr
} };

void QWindowsUiaMainProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QWindowsUiaMainProvider *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QWindowsUiaMainProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsUiaMainProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN23QWindowsUiaMainProviderE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QComObject<IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot>"))
        return static_cast< QComObject<IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot>*>(this);
    return QWindowsUiaBaseProvider::qt_metacast(_clname);
}

int QWindowsUiaMainProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsUiaBaseProvider::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
