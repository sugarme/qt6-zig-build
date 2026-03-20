/****************************************************************************
** Meta object code from reading C++ file 'qwizard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/dialogs/qwizard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwizard.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7QWizardE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7QWizardE = QtMocHelpers::stringData(
    "QWizard",
    "currentIdChanged",
    "",
    "id",
    "helpRequested",
    "customButtonClicked",
    "which",
    "pageAdded",
    "pageRemoved",
    "back",
    "next",
    "setCurrentId",
    "restart",
    "_q_emitCustomButtonClicked",
    "_q_updateButtonStates",
    "_q_handleFieldObjectDestroyed",
    "wizardStyle",
    "WizardStyle",
    "options",
    "WizardOptions",
    "titleFormat",
    "Qt::TextFormat",
    "subTitleFormat",
    "startId",
    "currentId",
    "ClassicStyle",
    "ModernStyle",
    "MacStyle",
    "AeroStyle",
    "NStyles",
    "WizardOption",
    "IndependentPages",
    "IgnoreSubTitles",
    "ExtendedWatermarkPixmap",
    "NoDefaultButton",
    "NoBackButtonOnStartPage",
    "NoBackButtonOnLastPage",
    "DisabledBackButtonOnLastPage",
    "HaveNextButtonOnLastPage",
    "HaveFinishButtonOnEarlyPages",
    "NoCancelButton",
    "CancelButtonOnLeft",
    "HaveHelpButton",
    "HelpButtonOnRight",
    "HaveCustomButton1",
    "HaveCustomButton2",
    "HaveCustomButton3",
    "NoCancelButtonOnLastPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7QWizardE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,  110, // properties
       3,  140, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   10 /* Public */,
       4,    0,   89,    2, 0x06,   12 /* Public */,
       5,    1,   90,    2, 0x06,   13 /* Public */,
       7,    1,   93,    2, 0x06,   15 /* Public */,
       8,    1,   96,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   99,    2, 0x0a,   19 /* Public */,
      10,    0,  100,    2, 0x0a,   20 /* Public */,
      11,    1,  101,    2, 0x0a,   21 /* Public */,
      12,    0,  104,    2, 0x0a,   23 /* Public */,
      13,    0,  105,    2, 0x08,   24 /* Private */,
      14,    0,  106,    2, 0x08,   25 /* Private */,
      15,    1,  107,    2, 0x08,   26 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // properties: name, type, flags, notifyId, revision
      16, 0x80000000 | 17, 0x0001510b, uint(-1), 0,
      18, 0x80000000 | 19, 0x0001510b, uint(-1), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(-1), 0,
      22, 0x80000000 | 21, 0x0001510b, uint(-1), 0,
      23, QMetaType::Int, 0x00015103, uint(-1), 0,
      24, QMetaType::Int, 0x00015103, uint(0), 0,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    5,  155,
      30,   30, 0x0,   17,  165,
      19,   30, 0x1,   17,  199,

 // enum data: key, value
      25, uint(QWizard::ClassicStyle),
      26, uint(QWizard::ModernStyle),
      27, uint(QWizard::MacStyle),
      28, uint(QWizard::AeroStyle),
      29, uint(QWizard::NStyles),
      31, uint(QWizard::IndependentPages),
      32, uint(QWizard::IgnoreSubTitles),
      33, uint(QWizard::ExtendedWatermarkPixmap),
      34, uint(QWizard::NoDefaultButton),
      35, uint(QWizard::NoBackButtonOnStartPage),
      36, uint(QWizard::NoBackButtonOnLastPage),
      37, uint(QWizard::DisabledBackButtonOnLastPage),
      38, uint(QWizard::HaveNextButtonOnLastPage),
      39, uint(QWizard::HaveFinishButtonOnEarlyPages),
      40, uint(QWizard::NoCancelButton),
      41, uint(QWizard::CancelButtonOnLeft),
      42, uint(QWizard::HaveHelpButton),
      43, uint(QWizard::HelpButtonOnRight),
      44, uint(QWizard::HaveCustomButton1),
      45, uint(QWizard::HaveCustomButton2),
      46, uint(QWizard::HaveCustomButton3),
      47, uint(QWizard::NoCancelButtonOnLastPage),
      31, uint(QWizard::IndependentPages),
      32, uint(QWizard::IgnoreSubTitles),
      33, uint(QWizard::ExtendedWatermarkPixmap),
      34, uint(QWizard::NoDefaultButton),
      35, uint(QWizard::NoBackButtonOnStartPage),
      36, uint(QWizard::NoBackButtonOnLastPage),
      37, uint(QWizard::DisabledBackButtonOnLastPage),
      38, uint(QWizard::HaveNextButtonOnLastPage),
      39, uint(QWizard::HaveFinishButtonOnEarlyPages),
      40, uint(QWizard::NoCancelButton),
      41, uint(QWizard::CancelButtonOnLeft),
      42, uint(QWizard::HaveHelpButton),
      43, uint(QWizard::HelpButtonOnRight),
      44, uint(QWizard::HaveCustomButton1),
      45, uint(QWizard::HaveCustomButton2),
      46, uint(QWizard::HaveCustomButton3),
      47, uint(QWizard::NoCancelButtonOnLastPage),

       0        // eod
};

Q_CONSTINIT const QMetaObject QWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN7QWizardE.offsetsAndSizes,
    qt_meta_data_ZN7QWizardE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7QWizardE_t,
        // property 'wizardStyle'
        QtPrivate::TypeAndForceComplete<WizardStyle, std::true_type>,
        // property 'options'
        QtPrivate::TypeAndForceComplete<WizardOptions, std::true_type>,
        // property 'titleFormat'
        QtPrivate::TypeAndForceComplete<Qt::TextFormat, std::true_type>,
        // property 'subTitleFormat'
        QtPrivate::TypeAndForceComplete<Qt::TextFormat, std::true_type>,
        // property 'startId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'WizardStyle'
        QtPrivate::TypeAndForceComplete<QWizard::WizardStyle, std::true_type>,
        // enum 'WizardOption'
        QtPrivate::TypeAndForceComplete<QWizard::WizardOption, std::true_type>,
        // enum 'WizardOptions'
        QtPrivate::TypeAndForceComplete<QWizard::WizardOptions, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWizard, std::true_type>,
        // method 'currentIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'helpRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pageAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'pageRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'next'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_emitCustomButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateButtonStates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_handleFieldObjectDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QWizard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentIdChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->helpRequested(); break;
        case 2: _t->customButtonClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->pageAdded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->pageRemoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->back(); break;
        case 6: _t->next(); break;
        case 7: _t->setCurrentId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->restart(); break;
        case 9: _t->d_func()->_q_emitCustomButtonClicked(); break;
        case 10: _t->d_func()->_q_updateButtonStates(); break;
        case 11: _t->d_func()->_q_handleFieldObjectDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QWizard::*)(int );
            if (_q_method_type _q_method = &QWizard::currentIdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QWizard::*)();
            if (_q_method_type _q_method = &QWizard::helpRequested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QWizard::*)(int );
            if (_q_method_type _q_method = &QWizard::customButtonClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QWizard::*)(int );
            if (_q_method_type _q_method = &QWizard::pageAdded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QWizard::*)(int );
            if (_q_method_type _q_method = &QWizard::pageRemoved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< WizardStyle*>(_v) = _t->wizardStyle(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        case 2: *reinterpret_cast< Qt::TextFormat*>(_v) = _t->titleFormat(); break;
        case 3: *reinterpret_cast< Qt::TextFormat*>(_v) = _t->subTitleFormat(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->startId(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->currentId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWizardStyle(*reinterpret_cast< WizardStyle*>(_v)); break;
        case 1: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setTitleFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 3: _t->setSubTitleFormat(*reinterpret_cast< Qt::TextFormat*>(_v)); break;
        case 4: _t->setStartId(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCurrentId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7QWizardE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QWizard::currentIdChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWizard::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QWizard::customButtonClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWizard::pageAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWizard::pageRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
namespace {
struct qt_meta_tag_ZN11QWizardPageE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QWizardPageE = QtMocHelpers::stringData(
    "QWizardPage",
    "completeChanged",
    "",
    "_q_maybeEmitCompleteChanged",
    "_q_updateCachedCompleteState",
    "title",
    "subTitle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QWizardPageE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   35, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   33,    2, 0x08,    4 /* Private */,
       4,    0,   34,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::QString, 0x00015103, uint(-1), 0,
       6, QMetaType::QString, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11QWizardPageE.offsetsAndSizes,
    qt_meta_data_ZN11QWizardPageE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QWizardPageE_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'subTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QWizardPage, std::true_type>,
        // method 'completeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_maybeEmitCompleteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateCachedCompleteState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QWizardPage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->completeChanged(); break;
        case 1: _t->d_func()->_q_maybeEmitCompleteChanged(); break;
        case 2: _t->d_func()->_q_updateCachedCompleteState(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QWizardPage::*)();
            if (_q_method_type _q_method = &QWizardPage::completeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->subTitle(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubTitle(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QWizardPageE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
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
void QWizardPage::completeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
