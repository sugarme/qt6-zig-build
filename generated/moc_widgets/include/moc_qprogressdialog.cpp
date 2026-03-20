/****************************************************************************
** Meta object code from reading C++ file 'qprogressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/dialogs/qprogressdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprogressdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15QProgressDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15QProgressDialogE = QtMocHelpers::stringData(
    "QProgressDialog",
    "canceled",
    "",
    "cancel",
    "reset",
    "setMaximum",
    "maximum",
    "setMinimum",
    "minimum",
    "setRange",
    "setValue",
    "progress",
    "setLabelText",
    "text",
    "setCancelButtonText",
    "setMinimumDuration",
    "ms",
    "forceShow",
    "_q_disconnectOnClose",
    "wasCanceled",
    "value",
    "autoReset",
    "autoClose",
    "minimumDuration",
    "labelText"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15QProgressDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       8,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x0a,   10 /* Public */,
       4,    0,   88,    2, 0x0a,   11 /* Public */,
       5,    1,   89,    2, 0x0a,   12 /* Public */,
       7,    1,   92,    2, 0x0a,   14 /* Public */,
       9,    2,   95,    2, 0x0a,   16 /* Public */,
      10,    1,  100,    2, 0x0a,   19 /* Public */,
      12,    1,  103,    2, 0x0a,   21 /* Public */,
      14,    1,  106,    2, 0x0a,   23 /* Public */,
      15,    1,  109,    2, 0x0a,   25 /* Public */,
      17,    0,  112,    2, 0x09,   27 /* Protected */,
      18,    0,  113,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    6,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      19, QMetaType::Bool, 0x00015001, uint(-1), 0,
       8, QMetaType::Int, 0x00015103, uint(-1), 0,
       6, QMetaType::Int, 0x00015103, uint(-1), 0,
      20, QMetaType::Int, 0x00015103, uint(-1), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, QMetaType::Int, 0x00015103, uint(-1), 0,
      24, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN15QProgressDialogE.offsetsAndSizes,
    qt_meta_data_ZN15QProgressDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15QProgressDialogE_t,
        // property 'wasCanceled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minimum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maximum'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'value'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autoReset'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'autoClose'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minimumDuration'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'labelText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QProgressDialog, std::true_type>,
        // method 'canceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cancel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMaximum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMinimum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLabelText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCancelButtonText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMinimumDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'forceShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_disconnectOnClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QProgressDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->cancel(); break;
        case 2: _t->reset(); break;
        case 3: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->setValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setLabelText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setCancelButtonText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->setMinimumDuration((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->forceShow(); break;
        case 11: _t->d_func()->_q_disconnectOnClose(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QProgressDialog::*)();
            if (_q_method_type _q_method = &QProgressDialog::canceled; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->wasCanceled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->autoReset(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->autoClose(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->minimumDuration(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->labelText(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAutoReset(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAutoClose(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setMinimumDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setLabelText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15QProgressDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QProgressDialog::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
