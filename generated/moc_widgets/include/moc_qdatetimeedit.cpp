/****************************************************************************
** Meta object code from reading C++ file 'qdatetimeedit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qdatetimeedit.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatetimeedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QDateTimeEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QDateTimeEditE = QtMocHelpers::stringData(
    "QDateTimeEdit",
    "dateTimeChanged",
    "",
    "dateTime",
    "timeChanged",
    "time",
    "dateChanged",
    "date",
    "setDateTime",
    "setDate",
    "setTime",
    "_q_resetButton",
    "maximumDateTime",
    "minimumDateTime",
    "maximumDate",
    "minimumDate",
    "maximumTime",
    "minimumTime",
    "currentSection",
    "Section",
    "displayedSections",
    "Sections",
    "displayFormat",
    "calendarPopup",
    "currentSectionIndex",
    "sectionCount",
    "timeSpec",
    "Qt::TimeSpec",
    "timeZone",
    "QTimeZone",
    "NoSection",
    "AmPmSection",
    "MSecSection",
    "SecondSection",
    "MinuteSection",
    "HourSection",
    "DaySection",
    "MonthSection",
    "YearSection",
    "TimeSections_Mask",
    "DateSections_Mask"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QDateTimeEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      17,   75, // properties
       2,  160, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,   20 /* Public */,
       4,    1,   59,    2, 0x06,   22 /* Public */,
       6,    1,   62,    2, 0x06,   24 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   65,    2, 0x0a,   26 /* Public */,
       9,    1,   68,    2, 0x0a,   28 /* Public */,
      10,    1,   71,    2, 0x0a,   30 /* Public */,
      11,    0,   74,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QTime,    5,
    QMetaType::Void, QMetaType::QDate,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void, QMetaType::QTime,    5,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::QDateTime, 0x00115103, uint(0), 0,
       7, QMetaType::QDate, 0x00015103, uint(2), 0,
       5, QMetaType::QTime, 0x00015103, uint(1), 0,
      12, QMetaType::QDateTime, 0x00015107, uint(-1), 0,
      13, QMetaType::QDateTime, 0x00015107, uint(-1), 0,
      14, QMetaType::QDate, 0x00015107, uint(-1), 0,
      15, QMetaType::QDate, 0x00015107, uint(-1), 0,
      16, QMetaType::QTime, 0x00015107, uint(-1), 0,
      17, QMetaType::QTime, 0x00015107, uint(-1), 0,
      18, 0x80000000 | 19, 0x0001510b, uint(-1), 0,
      20, 0x80000000 | 21, 0x00015009, uint(-1), 0,
      22, QMetaType::QString, 0x00015103, uint(-1), 0,
      23, QMetaType::Bool, 0x00015103, uint(-1), 0,
      24, QMetaType::Int, 0x00015103, uint(-1), 0,
      25, QMetaType::Int, 0x00015001, uint(-1), 0,
      26, 0x80000000 | 27, 0x0001510b, uint(-1), 0,
      28, 0x80000000 | 29, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,   11,  170,
      21,   19, 0x1,   11,  192,

 // enum data: key, value
      30, uint(QDateTimeEdit::NoSection),
      31, uint(QDateTimeEdit::AmPmSection),
      32, uint(QDateTimeEdit::MSecSection),
      33, uint(QDateTimeEdit::SecondSection),
      34, uint(QDateTimeEdit::MinuteSection),
      35, uint(QDateTimeEdit::HourSection),
      36, uint(QDateTimeEdit::DaySection),
      37, uint(QDateTimeEdit::MonthSection),
      38, uint(QDateTimeEdit::YearSection),
      39, uint(QDateTimeEdit::TimeSections_Mask),
      40, uint(QDateTimeEdit::DateSections_Mask),
      30, uint(QDateTimeEdit::NoSection),
      31, uint(QDateTimeEdit::AmPmSection),
      32, uint(QDateTimeEdit::MSecSection),
      33, uint(QDateTimeEdit::SecondSection),
      34, uint(QDateTimeEdit::MinuteSection),
      35, uint(QDateTimeEdit::HourSection),
      36, uint(QDateTimeEdit::DaySection),
      37, uint(QDateTimeEdit::MonthSection),
      38, uint(QDateTimeEdit::YearSection),
      39, uint(QDateTimeEdit::TimeSections_Mask),
      40, uint(QDateTimeEdit::DateSections_Mask),

       0        // eod
};

Q_CONSTINIT const QMetaObject QDateTimeEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractSpinBox::staticMetaObject>(),
    qt_meta_stringdata_ZN13QDateTimeEditE.offsetsAndSizes,
    qt_meta_data_ZN13QDateTimeEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QDateTimeEditE_t,
        // property 'dateTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'date'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'time'
        QtPrivate::TypeAndForceComplete<QTime, std::true_type>,
        // property 'maximumDateTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'minimumDateTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'maximumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'minimumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'maximumTime'
        QtPrivate::TypeAndForceComplete<QTime, std::true_type>,
        // property 'minimumTime'
        QtPrivate::TypeAndForceComplete<QTime, std::true_type>,
        // property 'currentSection'
        QtPrivate::TypeAndForceComplete<Section, std::true_type>,
        // property 'displayedSections'
        QtPrivate::TypeAndForceComplete<Sections, std::true_type>,
        // property 'displayFormat'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'calendarPopup'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentSectionIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'sectionCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'timeSpec'
        QtPrivate::TypeAndForceComplete<Qt::TimeSpec, std::true_type>,
        // property 'timeZone'
        QtPrivate::TypeAndForceComplete<QTimeZone, std::true_type>,
        // enum 'Section'
        QtPrivate::TypeAndForceComplete<QDateTimeEdit::Section, std::true_type>,
        // enum 'Sections'
        QtPrivate::TypeAndForceComplete<QDateTimeEdit::Sections, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDateTimeEdit, std::true_type>,
        // method 'dateTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'timeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTime, std::false_type>,
        // method 'dateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'setDateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'setDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'setTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTime, std::false_type>,
        // method '_q_resetButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QDateTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDateTimeEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dateTimeChanged((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 1: _t->timeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->dateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->setDateTime((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 4: _t->setDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 5: _t->setTime((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 6: _t->d_func()->_q_resetButton(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDateTimeEdit::*)(const QDateTime & );
            if (_q_method_type _q_method = &QDateTimeEdit::dateTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QDateTimeEdit::*)(QTime );
            if (_q_method_type _q_method = &QDateTimeEdit::timeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QDateTimeEdit::*)(QDate );
            if (_q_method_type _q_method = &QDateTimeEdit::dateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDateTime*>(_v) = _t->dateTime(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = _t->date(); break;
        case 2: *reinterpret_cast< QTime*>(_v) = _t->time(); break;
        case 3: *reinterpret_cast< QDateTime*>(_v) = _t->maximumDateTime(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->minimumDateTime(); break;
        case 5: *reinterpret_cast< QDate*>(_v) = _t->maximumDate(); break;
        case 6: *reinterpret_cast< QDate*>(_v) = _t->minimumDate(); break;
        case 7: *reinterpret_cast< QTime*>(_v) = _t->maximumTime(); break;
        case 8: *reinterpret_cast< QTime*>(_v) = _t->minimumTime(); break;
        case 9: *reinterpret_cast< Section*>(_v) = _t->currentSection(); break;
        case 10: *reinterpret_cast<int*>(_v) = QFlag(_t->displayedSections()); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->displayFormat(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->calendarPopup(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->currentSectionIndex(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->sectionCount(); break;
        case 15: *reinterpret_cast< Qt::TimeSpec*>(_v) = _t->timeSpec(); break;
        case 16: *reinterpret_cast< QTimeZone*>(_v) = _t->timeZone(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 1: _t->setDate(*reinterpret_cast< QDate*>(_v)); break;
        case 2: _t->setTime(*reinterpret_cast< QTime*>(_v)); break;
        case 3: _t->setMaximumDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 4: _t->setMinimumDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 5: _t->setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 6: _t->setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 7: _t->setMaximumTime(*reinterpret_cast< QTime*>(_v)); break;
        case 8: _t->setMinimumTime(*reinterpret_cast< QTime*>(_v)); break;
        case 9: _t->setCurrentSection(*reinterpret_cast< Section*>(_v)); break;
        case 11: _t->setDisplayFormat(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setCalendarPopup(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setCurrentSectionIndex(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setTimeSpec(*reinterpret_cast< Qt::TimeSpec*>(_v)); break;
        case 16: _t->setTimeZone(*reinterpret_cast< QTimeZone*>(_v)); break;
        default: break;
        }
    }
if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 3: _t->clearMaximumDateTime(); break;
        case 4: _t->clearMinimumDateTime(); break;
        case 5: _t->clearMaximumDate(); break;
        case 6: _t->clearMinimumDate(); break;
        case 7: _t->clearMaximumTime(); break;
        case 8: _t->clearMinimumTime(); break;
        default: break;
        }
    }
}

const QMetaObject *QDateTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDateTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QDateTimeEditE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDateTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QDateTimeEdit::dateTimeChanged(const QDateTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDateTimeEdit::timeChanged(QTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDateTimeEdit::dateChanged(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {
struct qt_meta_tag_ZN9QTimeEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QTimeEditE = QtMocHelpers::stringData(
    "QTimeEdit",
    "userTimeChanged",
    "",
    "time"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QTimeEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QTime,    3,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::QTime, 0x00115103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTimeEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDateTimeEdit::staticMetaObject>(),
    qt_meta_stringdata_ZN9QTimeEditE.offsetsAndSizes,
    qt_meta_data_ZN9QTimeEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QTimeEditE_t,
        // property 'time'
        QtPrivate::TypeAndForceComplete<QTime, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTimeEdit, std::true_type>,
        // method 'userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTime, std::false_type>
    >,
    nullptr
} };

void QTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTimeEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTimeEdit::*)(QTime );
            if (_q_method_type _q_method = &QTimeEdit::userTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QTime*>(_v) = _t->time(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTime(*reinterpret_cast< QTime*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QTimeEditE.stringdata0))
        return static_cast<void*>(this);
    return QDateTimeEdit::qt_metacast(_clname);
}

int QTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QTimeEdit::userTimeChanged(QTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {
struct qt_meta_tag_ZN9QDateEditE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN9QDateEditE = QtMocHelpers::stringData(
    "QDateEdit",
    "userDateChanged",
    "",
    "date"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN9QDateEditE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,

 // properties: name, type, flags, notifyId, revision
       3, QMetaType::QDate, 0x00115103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDateEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDateTimeEdit::staticMetaObject>(),
    qt_meta_stringdata_ZN9QDateEditE.offsetsAndSizes,
    qt_meta_data_ZN9QDateEditE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN9QDateEditE_t,
        // property 'date'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDateEdit, std::true_type>,
        // method 'userDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>
    >,
    nullptr
} };

void QDateEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QDateEdit *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->userDateChanged((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDateEdit::*)(QDate );
            if (_q_method_type _q_method = &QDateEdit::userDateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->date(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QDateEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDateEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN9QDateEditE.stringdata0))
        return static_cast<void*>(this);
    return QDateTimeEdit::qt_metacast(_clname);
}

int QDateEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QDateEdit::userDateChanged(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
