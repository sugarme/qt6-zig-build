/****************************************************************************
** Meta object code from reading C++ file 'qfontcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qfontcombobox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontcombobox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QFontComboBoxE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QFontComboBoxE = QtMocHelpers::stringData(
    "QFontComboBox",
    "currentFontChanged",
    "",
    "f",
    "setCurrentFont",
    "writingSystem",
    "QFontDatabase::WritingSystem",
    "fontFilters",
    "FontFilters",
    "currentFont",
    "FontFilter",
    "AllFonts",
    "ScalableFonts",
    "NonScalableFonts",
    "MonospacedFonts",
    "ProportionalFonts"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QFontComboBoxE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   32, // properties
       1,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,

 // properties: name, type, flags, notifyId, revision
       5, 0x80000000 | 6, 0x0001510b, uint(-1), 0,
       7, 0x80000000 | 8, 0x0001510b, uint(-1), 0,
       9, QMetaType::QFont, 0x00015103, uint(0), 0,

 // enums: name, alias, flags, count, data
       8,   10, 0x1,    5,   52,

 // enum data: key, value
      11, uint(QFontComboBox::AllFonts),
      12, uint(QFontComboBox::ScalableFonts),
      13, uint(QFontComboBox::NonScalableFonts),
      14, uint(QFontComboBox::MonospacedFonts),
      15, uint(QFontComboBox::ProportionalFonts),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN13QFontComboBoxE[] = {
    QMetaObject::SuperData::link<QFontDatabase::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QFontComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_ZN13QFontComboBoxE.offsetsAndSizes,
    qt_meta_data_ZN13QFontComboBoxE,
    qt_static_metacall,
    qt_meta_extradata_ZN13QFontComboBoxE,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QFontComboBoxE_t,
        // property 'writingSystem'
        QtPrivate::TypeAndForceComplete<QFontDatabase::WritingSystem, std::true_type>,
        // property 'fontFilters'
        QtPrivate::TypeAndForceComplete<FontFilters, std::true_type>,
        // property 'currentFont'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // enum 'FontFilters'
        QtPrivate::TypeAndForceComplete<QFontComboBox::FontFilters, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFontComboBox, std::true_type>,
        // method 'currentFontChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'setCurrentFont'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>
    >,
    nullptr
} };

void QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QFontComboBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QFontComboBox::*)(const QFont & );
            if (_q_method_type _q_method = &QFontComboBox::currentFontChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFontDatabase::WritingSystem*>(_v) = _t->writingSystem(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->fontFilters()); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWritingSystem(*reinterpret_cast< QFontDatabase::WritingSystem*>(_v)); break;
        case 1: _t->setFontFilters(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QFontComboBoxE.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QFontComboBox::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
