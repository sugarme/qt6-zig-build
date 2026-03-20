/****************************************************************************
** Meta object code from reading C++ file 'qdialogbuttonbox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qdialogbuttonbox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdialogbuttonbox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16QDialogButtonBoxE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16QDialogButtonBoxE = QtMocHelpers::stringData(
    "QDialogButtonBox",
    "clicked",
    "",
    "QAbstractButton*",
    "button",
    "accepted",
    "helpRequested",
    "rejected",
    "orientation",
    "Qt::Orientation",
    "standardButtons",
    "StandardButtons",
    "centerButtons",
    "StandardButton",
    "NoButton",
    "Ok",
    "Save",
    "SaveAll",
    "Open",
    "Yes",
    "YesToAll",
    "No",
    "NoToAll",
    "Abort",
    "Retry",
    "Ignore",
    "Close",
    "Cancel",
    "Discard",
    "Help",
    "Apply",
    "Reset",
    "RestoreDefaults"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16QDialogButtonBoxE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    5 /* Public */,
       5,    0,   41,    2, 0x06,    7 /* Public */,
       6,    0,   42,    2, 0x06,    8 /* Public */,
       7,    0,   43,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      10, 0x80000000 | 11, 0x0001510b, uint(-1), 0,
      12, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      11,   13, 0x1,   19,   64,

 // enum data: key, value
      14, uint(QDialogButtonBox::NoButton),
      15, uint(QDialogButtonBox::Ok),
      16, uint(QDialogButtonBox::Save),
      17, uint(QDialogButtonBox::SaveAll),
      18, uint(QDialogButtonBox::Open),
      19, uint(QDialogButtonBox::Yes),
      20, uint(QDialogButtonBox::YesToAll),
      21, uint(QDialogButtonBox::No),
      22, uint(QDialogButtonBox::NoToAll),
      23, uint(QDialogButtonBox::Abort),
      24, uint(QDialogButtonBox::Retry),
      25, uint(QDialogButtonBox::Ignore),
      26, uint(QDialogButtonBox::Close),
      27, uint(QDialogButtonBox::Cancel),
      28, uint(QDialogButtonBox::Discard),
      29, uint(QDialogButtonBox::Help),
      30, uint(QDialogButtonBox::Apply),
      31, uint(QDialogButtonBox::Reset),
      32, uint(QDialogButtonBox::RestoreDefaults),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDialogButtonBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN16QDialogButtonBoxE.offsetsAndSizes,
    qt_meta_data_ZN16QDialogButtonBoxE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16QDialogButtonBoxE_t,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'standardButtons'
        QtPrivate::TypeAndForceComplete<StandardButtons, std::true_type>,
        // property 'centerButtons'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'StandardButtons'
        QtPrivate::TypeAndForceComplete<QDialogButtonBox::StandardButtons, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDialogButtonBox, std::true_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'helpRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDialogButtonBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDialogButtonBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 1: _t->accepted(); break;
        case 2: _t->helpRequested(); break;
        case 3: _t->rejected(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDialogButtonBox::*)(QAbstractButton * );
            if (_q_method_type _q_method = &QDialogButtonBox::clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QDialogButtonBox::*)();
            if (_q_method_type _q_method = &QDialogButtonBox::accepted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QDialogButtonBox::*)();
            if (_q_method_type _q_method = &QDialogButtonBox::helpRequested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QDialogButtonBox::*)();
            if (_q_method_type _q_method = &QDialogButtonBox::rejected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->centerButtons(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setCenterButtons(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QDialogButtonBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDialogButtonBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16QDialogButtonBoxE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDialogButtonBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
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
void QDialogButtonBox::clicked(QAbstractButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDialogButtonBox::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDialogButtonBox::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDialogButtonBox::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
