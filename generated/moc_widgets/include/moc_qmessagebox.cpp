/****************************************************************************
** Meta object code from reading C++ file 'qmessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/dialogs/qmessagebox.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmessagebox.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QMessageBoxE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QMessageBoxE = QtMocHelpers::stringData(
    "QMessageBox",
    "buttonClicked",
    "",
    "QAbstractButton*",
    "button",
    "text",
    "icon",
    "Icon",
    "iconPixmap",
    "textFormat",
    "Qt::TextFormat",
    "standardButtons",
    "StandardButtons",
    "detailedText",
    "informativeText",
    "textInteractionFlags",
    "Qt::TextInteractionFlags",
    "options",
    "Options",
    "Option",
    "DontUseNativeDialog",
    "NoIcon",
    "Information",
    "Warning",
    "Critical",
    "Question",
    "ButtonRole",
    "InvalidRole",
    "AcceptRole",
    "RejectRole",
    "DestructiveRole",
    "ActionRole",
    "HelpRole",
    "YesRole",
    "NoRole",
    "ResetRole",
    "ApplyRole",
    "NRoles",
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
    "RestoreDefaults",
    "FirstButton",
    "LastButton",
    "YesAll",
    "NoAll",
    "Default",
    "Escape",
    "FlagMask",
    "ButtonMask"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QMessageBoxE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   23, // properties
       5,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, 0x80000000 | 7, 0x0001510b, uint(-1), 0,
       8, QMetaType::QPixmap, 0x00015103, uint(-1), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(-1), 0,
      11, 0x80000000 | 12, 0x0001510b, uint(-1), 0,
      13, QMetaType::QString, 0x00015103, uint(-1), 0,
      14, QMetaType::QString, 0x00015103, uint(-1), 0,
      15, 0x80000000 | 16, 0x0001510b, uint(-1), 0,
      17, 0x80000000 | 18, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      19,   19, 0x3,    1,   93,
       7,    7, 0x0,    5,   95,
      26,   26, 0x0,   11,  105,
      38,   38, 0x0,   27,  127,
      12,   38, 0x1,   27,  181,

 // enum data: key, value
      20, uint(QMessageBox::Option::DontUseNativeDialog),
      21, uint(QMessageBox::NoIcon),
      22, uint(QMessageBox::Information),
      23, uint(QMessageBox::Warning),
      24, uint(QMessageBox::Critical),
      25, uint(QMessageBox::Question),
      27, uint(QMessageBox::InvalidRole),
      28, uint(QMessageBox::AcceptRole),
      29, uint(QMessageBox::RejectRole),
      30, uint(QMessageBox::DestructiveRole),
      31, uint(QMessageBox::ActionRole),
      32, uint(QMessageBox::HelpRole),
      33, uint(QMessageBox::YesRole),
      34, uint(QMessageBox::NoRole),
      35, uint(QMessageBox::ResetRole),
      36, uint(QMessageBox::ApplyRole),
      37, uint(QMessageBox::NRoles),
      39, uint(QMessageBox::NoButton),
      40, uint(QMessageBox::Ok),
      41, uint(QMessageBox::Save),
      42, uint(QMessageBox::SaveAll),
      43, uint(QMessageBox::Open),
      44, uint(QMessageBox::Yes),
      45, uint(QMessageBox::YesToAll),
      46, uint(QMessageBox::No),
      47, uint(QMessageBox::NoToAll),
      48, uint(QMessageBox::Abort),
      49, uint(QMessageBox::Retry),
      50, uint(QMessageBox::Ignore),
      51, uint(QMessageBox::Close),
      52, uint(QMessageBox::Cancel),
      53, uint(QMessageBox::Discard),
      54, uint(QMessageBox::Help),
      55, uint(QMessageBox::Apply),
      56, uint(QMessageBox::Reset),
      57, uint(QMessageBox::RestoreDefaults),
      58, uint(QMessageBox::FirstButton),
      59, uint(QMessageBox::LastButton),
      60, uint(QMessageBox::YesAll),
      61, uint(QMessageBox::NoAll),
      62, uint(QMessageBox::Default),
      63, uint(QMessageBox::Escape),
      64, uint(QMessageBox::FlagMask),
      65, uint(QMessageBox::ButtonMask),
      39, uint(QMessageBox::NoButton),
      40, uint(QMessageBox::Ok),
      41, uint(QMessageBox::Save),
      42, uint(QMessageBox::SaveAll),
      43, uint(QMessageBox::Open),
      44, uint(QMessageBox::Yes),
      45, uint(QMessageBox::YesToAll),
      46, uint(QMessageBox::No),
      47, uint(QMessageBox::NoToAll),
      48, uint(QMessageBox::Abort),
      49, uint(QMessageBox::Retry),
      50, uint(QMessageBox::Ignore),
      51, uint(QMessageBox::Close),
      52, uint(QMessageBox::Cancel),
      53, uint(QMessageBox::Discard),
      54, uint(QMessageBox::Help),
      55, uint(QMessageBox::Apply),
      56, uint(QMessageBox::Reset),
      57, uint(QMessageBox::RestoreDefaults),
      58, uint(QMessageBox::FirstButton),
      59, uint(QMessageBox::LastButton),
      60, uint(QMessageBox::YesAll),
      61, uint(QMessageBox::NoAll),
      62, uint(QMessageBox::Default),
      63, uint(QMessageBox::Escape),
      64, uint(QMessageBox::FlagMask),
      65, uint(QMessageBox::ButtonMask),

       0        // eod
};

Q_CONSTINIT const QMetaObject QMessageBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN11QMessageBoxE.offsetsAndSizes,
    qt_meta_data_ZN11QMessageBoxE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QMessageBoxE_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<Icon, std::true_type>,
        // property 'iconPixmap'
        QtPrivate::TypeAndForceComplete<QPixmap, std::true_type>,
        // property 'textFormat'
        QtPrivate::TypeAndForceComplete<Qt::TextFormat, std::true_type>,
        // property 'standardButtons'
        QtPrivate::TypeAndForceComplete<StandardButtons, std::true_type>,
        // property 'detailedText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'informativeText'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'textInteractionFlags'
        QtPrivate::TypeAndForceComplete<Qt::TextInteractionFlags, std::true_type>,
        // property 'options'
        QtPrivate::TypeAndForceComplete<Options, std::true_type>,
        // enum 'Option'
        QtPrivate::TypeAndForceComplete<QMessageBox::Option, std::true_type>,
        // enum 'Icon'
        QtPrivate::TypeAndForceComplete<QMessageBox::Icon, std::true_type>,
        // enum 'ButtonRole'
        QtPrivate::TypeAndForceComplete<QMessageBox::ButtonRole, std::true_type>,
        // enum 'StandardButton'
        QtPrivate::TypeAndForceComplete<QMessageBox::StandardButton, std::true_type>,
        // enum 'StandardButtons'
        QtPrivate::TypeAndForceComplete<QMessageBox::StandardButtons, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMessageBox, std::true_type>,
        // method 'buttonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>
    >,
    nullptr
} };

void QMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QMessageBox *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMessageBox::*)(QAbstractButton * );
            if (_q_method_type _q_method = &QMessageBox::buttonClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< Icon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< QPixmap*>(_v) = _t->iconPixmap(); break;
        case 3: *reinterpret_cast< Qt::TextFormat*>(_v) = _t->textFormat(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->detailedText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->informativeText(); break;
        case 7: *reinterpret_cast< Qt::TextInteractionFlags*>(_v) = _t->textInteractionFlags(); break;
        case 8: *reinterpret_cast< Options*>(_v) = _t->options(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< Icon*>(_v)); break;
        case 2: _t->setIconPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: _t->setTextFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 4: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: _t->setDetailedText(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setInformativeText(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setTextInteractionFlags(*reinterpret_cast< Qt::TextInteractionFlags*>(_v)); break;
        case 8: _t->setOptions(*reinterpret_cast< Options*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QMessageBoxE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QMessageBox::buttonClicked(QAbstractButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
