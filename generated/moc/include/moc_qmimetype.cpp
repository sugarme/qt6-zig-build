/****************************************************************************
** Meta object code from reading C++ file 'qmimetype.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/corelib/mimetypes/qmimetype.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmimetype.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9QMimeTypeE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QMimeTypeE = QtMocHelpers::stringData(
    "QMimeType",
    "inherits",
    "",
    "mimeTypeName",
    "valid",
    "isDefault",
    "name",
    "comment",
    "genericIconName",
    "iconName",
    "globPatterns",
    "parentMimeTypes",
    "allAncestors",
    "aliases",
    "suffixes",
    "preferredSuffix",
    "filterString"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QMimeTypeE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      13,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x102,   14 /* Public | MethodIsConst  */,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    3,

 // properties: name, type, flags, notifyId, revision
       4, QMetaType::Bool, 0x00015401, uint(-1), 0,
       5, QMetaType::Bool, 0x00015401, uint(-1), 0,
       6, QMetaType::QString, 0x00015401, uint(-1), 0,
       7, QMetaType::QString, 0x00015401, uint(-1), 0,
       8, QMetaType::QString, 0x00015401, uint(-1), 0,
       9, QMetaType::QString, 0x00015401, uint(-1), 0,
      10, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      11, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      12, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      13, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      14, QMetaType::QStringList, 0x00015401, uint(-1), 0,
      15, QMetaType::QString, 0x00015401, uint(-1), 0,
      16, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMimeType::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ZN9QMimeTypeE.offsetsAndSizes,
    qt_meta_data_ZN9QMimeTypeE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QMimeTypeE_t,
        // property 'valid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isDefault'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'comment'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'genericIconName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'globPatterns'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'parentMimeTypes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'allAncestors'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'aliases'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'suffixes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'preferredSuffix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'filterString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMimeType, std::true_type>,
        // method 'inherits'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QMimeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<QMimeType *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->inherits((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDefault(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->comment(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->genericIconName(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->globPatterns(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->parentMimeTypes(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->allAncestors(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->aliases(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = _t->suffixes(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->preferredSuffix(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->filterString(); break;
        default: break;
        }
    }
}
QT_WARNING_POP
