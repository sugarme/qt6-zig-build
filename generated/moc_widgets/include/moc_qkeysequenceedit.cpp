/****************************************************************************
** Meta object code from reading C++ file 'qkeysequenceedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qkeysequenceedit.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkeysequenceedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16QKeySequenceEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN16QKeySequenceEditE = QtMocHelpers::stringData(
    "QKeySequenceEdit",
    "editingFinished",
    "",
    "keySequenceChanged",
    "QKeySequence",
    "keySequence",
    "setKeySequence",
    "clear",
    "setMaximumSequenceLength",
    "qsizetype",
    "count",
    "clearButtonEnabled",
    "maximumSequenceLength",
    "finishingKeyCombinations",
    "QList<QKeyCombination>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN16QKeySequenceEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    5 /* Public */,
       3,    1,   45,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   48,    2, 0x0a,    8 /* Public */,
       7,    0,   51,    2, 0x0a,   10 /* Public */,
       8,    1,   52,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags, notifyId, revision
       5, 0x80000000 | 4, 0x0011510b, uint(1), 0,
      11, QMetaType::Bool, 0x00015103, uint(-1), 0,
      12, 0x80000000 | 9, 0x0001510b, uint(-1), 0,
      13, 0x80000000 | 14, 0x0001510b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QKeySequenceEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN16QKeySequenceEditE.offsetsAndSizes,
    qt_meta_data_ZN16QKeySequenceEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN16QKeySequenceEditE_t,
        // property 'keySequence'
        QtPrivate::TypeAndForceComplete<QKeySequence, std::true_type>,
        // property 'clearButtonEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'maximumSequenceLength'
        QtPrivate::TypeAndForceComplete<qsizetype, std::true_type>,
        // property 'finishingKeyCombinations'
        QtPrivate::TypeAndForceComplete<QList<QKeyCombination>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QKeySequenceEdit, std::true_type>,
        // method 'editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keySequenceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>,
        // method 'setKeySequence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMaximumSequenceLength'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qsizetype, std::false_type>
    >,
    nullptr
} };

void QKeySequenceEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QKeySequenceEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->keySequenceChanged((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->setKeySequence((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->setMaximumSequenceLength((*reinterpret_cast< std::add_pointer_t<qsizetype>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QKeySequenceEdit::*)();
            if (_q_method_type _q_method = &QKeySequenceEdit::editingFinished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QKeySequenceEdit::*)(const QKeySequence & );
            if (_q_method_type _q_method = &QKeySequenceEdit::keySequenceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = _t->keySequence(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isClearButtonEnabled(); break;
        case 2: *reinterpret_cast< qsizetype*>(_v) = _t->maximumSequenceLength(); break;
        case 3: *reinterpret_cast< QList<QKeyCombination>*>(_v) = _t->finishingKeyCombinations(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeySequence(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 1: _t->setClearButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMaximumSequenceLength(*reinterpret_cast< qsizetype*>(_v)); break;
        case 3: _t->setFinishingKeyCombinations(*reinterpret_cast< QList<QKeyCombination>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QKeySequenceEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QKeySequenceEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN16QKeySequenceEditE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QKeySequenceEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QKeySequenceEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QKeySequenceEdit::keySequenceChanged(const QKeySequence & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
