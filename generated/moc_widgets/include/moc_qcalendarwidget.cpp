/****************************************************************************
** Meta object code from reading C++ file 'qcalendarwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qcalendarwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcalendarwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15QCalendarWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN15QCalendarWidgetE = QtMocHelpers::stringData(
    "QCalendarWidget",
    "selectionChanged",
    "",
    "clicked",
    "date",
    "activated",
    "currentPageChanged",
    "year",
    "month",
    "setSelectedDate",
    "setDateRange",
    "min",
    "max",
    "setCurrentPage",
    "setGridVisible",
    "show",
    "setNavigationBarVisible",
    "visible",
    "showNextMonth",
    "showPreviousMonth",
    "showNextYear",
    "showPreviousYear",
    "showSelectedDate",
    "showToday",
    "_q_slotShowDate",
    "_q_slotChangeDate",
    "changeMonth",
    "_q_editingFinished",
    "_q_prevMonthClicked",
    "_q_nextMonthClicked",
    "_q_yearEditingFinished",
    "_q_yearClicked",
    "_q_monthChanged",
    "QAction*",
    "act",
    "selectedDate",
    "minimumDate",
    "maximumDate",
    "firstDayOfWeek",
    "Qt::DayOfWeek",
    "gridVisible",
    "selectionMode",
    "SelectionMode",
    "horizontalHeaderFormat",
    "HorizontalHeaderFormat",
    "verticalHeaderFormat",
    "VerticalHeaderFormat",
    "navigationBarVisible",
    "dateEditEnabled",
    "dateEditAcceptDelay",
    "NoHorizontalHeader",
    "SingleLetterDayNames",
    "ShortDayNames",
    "LongDayNames",
    "NoVerticalHeader",
    "ISOWeekNumbers",
    "NoSelection",
    "SingleSelection"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN15QCalendarWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      11,  214, // properties
       3,  269, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x06,   15 /* Public */,
       3,    1,  159,    2, 0x06,   16 /* Public */,
       5,    1,  162,    2, 0x06,   18 /* Public */,
       6,    2,  165,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  170,    2, 0x0a,   23 /* Public */,
      10,    2,  173,    2, 0x0a,   25 /* Public */,
      13,    2,  178,    2, 0x0a,   28 /* Public */,
      14,    1,  183,    2, 0x0a,   31 /* Public */,
      16,    1,  186,    2, 0x0a,   33 /* Public */,
      18,    0,  189,    2, 0x0a,   35 /* Public */,
      19,    0,  190,    2, 0x0a,   36 /* Public */,
      20,    0,  191,    2, 0x0a,   37 /* Public */,
      21,    0,  192,    2, 0x0a,   38 /* Public */,
      22,    0,  193,    2, 0x0a,   39 /* Public */,
      23,    0,  194,    2, 0x0a,   40 /* Public */,
      24,    1,  195,    2, 0x08,   41 /* Private */,
      25,    1,  198,    2, 0x08,   43 /* Private */,
      25,    2,  201,    2, 0x08,   45 /* Private */,
      27,    0,  206,    2, 0x08,   48 /* Private */,
      28,    0,  207,    2, 0x08,   49 /* Private */,
      29,    0,  208,    2, 0x08,   50 /* Private */,
      30,    0,  209,    2, 0x08,   51 /* Private */,
      31,    0,  210,    2, 0x08,   52 /* Private */,
      32,    1,  211,    2, 0x08,   53 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::QDate, QMetaType::QDate,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::QDate,    4,
    QMetaType::Void, QMetaType::QDate, QMetaType::Bool,    4,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,

 // properties: name, type, flags, notifyId, revision
      35, QMetaType::QDate, 0x00015103, uint(-1), 0,
      36, QMetaType::QDate, 0x00015107, uint(-1), 0,
      37, QMetaType::QDate, 0x00015107, uint(-1), 0,
      38, 0x80000000 | 39, 0x0001510b, uint(-1), 0,
      40, QMetaType::Bool, 0x00015103, uint(-1), 0,
      41, 0x80000000 | 42, 0x0001510b, uint(-1), 0,
      43, 0x80000000 | 44, 0x0001510b, uint(-1), 0,
      45, 0x80000000 | 46, 0x0001510b, uint(-1), 0,
      47, QMetaType::Bool, 0x00015103, uint(-1), 0,
      48, QMetaType::Bool, 0x00015103, uint(-1), 0,
      49, QMetaType::Int, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    4,  284,
      46,   46, 0x0,    2,  292,
      42,   42, 0x0,    2,  296,

 // enum data: key, value
      50, uint(QCalendarWidget::NoHorizontalHeader),
      51, uint(QCalendarWidget::SingleLetterDayNames),
      52, uint(QCalendarWidget::ShortDayNames),
      53, uint(QCalendarWidget::LongDayNames),
      54, uint(QCalendarWidget::NoVerticalHeader),
      55, uint(QCalendarWidget::ISOWeekNumbers),
      56, uint(QCalendarWidget::NoSelection),
      57, uint(QCalendarWidget::SingleSelection),

       0        // eod
};

Q_CONSTINIT const QMetaObject QCalendarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN15QCalendarWidgetE.offsetsAndSizes,
    qt_meta_data_ZN15QCalendarWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN15QCalendarWidgetE_t,
        // property 'selectedDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'minimumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'maximumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'firstDayOfWeek'
        QtPrivate::TypeAndForceComplete<Qt::DayOfWeek, std::true_type>,
        // property 'gridVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'selectionMode'
        QtPrivate::TypeAndForceComplete<SelectionMode, std::true_type>,
        // property 'horizontalHeaderFormat'
        QtPrivate::TypeAndForceComplete<HorizontalHeaderFormat, std::true_type>,
        // property 'verticalHeaderFormat'
        QtPrivate::TypeAndForceComplete<VerticalHeaderFormat, std::true_type>,
        // property 'navigationBarVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dateEditEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'dateEditAcceptDelay'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'HorizontalHeaderFormat'
        QtPrivate::TypeAndForceComplete<QCalendarWidget::HorizontalHeaderFormat, std::true_type>,
        // enum 'VerticalHeaderFormat'
        QtPrivate::TypeAndForceComplete<QCalendarWidget::VerticalHeaderFormat, std::true_type>,
        // enum 'SelectionMode'
        QtPrivate::TypeAndForceComplete<QCalendarWidget::SelectionMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QCalendarWidget, std::true_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'currentPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSelectedDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'setDateRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method 'setCurrentPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setGridVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setNavigationBarVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showNextMonth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPreviousMonth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNextYear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPreviousYear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showSelectedDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showToday'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_slotShowDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method '_q_slotChangeDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        // method '_q_slotChangeDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDate, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_prevMonthClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_nextMonthClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_yearEditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_yearClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_monthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>
    >,
    nullptr
} };

void QCalendarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QCalendarWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->clicked((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->currentPageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->setSelectedDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 5: _t->setDateRange((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 6: _t->setCurrentPage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->setGridVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setNavigationBarVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->showNextMonth(); break;
        case 10: _t->showPreviousMonth(); break;
        case 11: _t->showNextYear(); break;
        case 12: _t->showPreviousYear(); break;
        case 13: _t->showSelectedDate(); break;
        case 14: _t->showToday(); break;
        case 15: _t->d_func()->_q_slotShowDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 16: _t->d_func()->_q_slotChangeDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 17: _t->d_func()->_q_slotChangeDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 18: _t->d_func()->_q_editingFinished(); break;
        case 19: _t->d_func()->_q_prevMonthClicked(); break;
        case 20: _t->d_func()->_q_nextMonthClicked(); break;
        case 21: _t->d_func()->_q_yearEditingFinished(); break;
        case 22: _t->d_func()->_q_yearClicked(); break;
        case 23: _t->d_func()->_q_monthChanged((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QCalendarWidget::*)();
            if (_q_method_type _q_method = &QCalendarWidget::selectionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QCalendarWidget::*)(QDate );
            if (_q_method_type _q_method = &QCalendarWidget::clicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QCalendarWidget::*)(QDate );
            if (_q_method_type _q_method = &QCalendarWidget::activated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QCalendarWidget::*)(int , int );
            if (_q_method_type _q_method = &QCalendarWidget::currentPageChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->selectedDate(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = _t->minimumDate(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->maximumDate(); break;
        case 3: *reinterpret_cast< Qt::DayOfWeek*>(_v) = _t->firstDayOfWeek(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isGridVisible(); break;
        case 5: *reinterpret_cast< SelectionMode*>(_v) = _t->selectionMode(); break;
        case 6: *reinterpret_cast< HorizontalHeaderFormat*>(_v) = _t->horizontalHeaderFormat(); break;
        case 7: *reinterpret_cast< VerticalHeaderFormat*>(_v) = _t->verticalHeaderFormat(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isNavigationBarVisible(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isDateEditEnabled(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->dateEditAcceptDelay(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectedDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 2: _t->setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setFirstDayOfWeek(*reinterpret_cast< Qt::DayOfWeek*>(_v)); break;
        case 4: _t->setGridVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 6: _t->setHorizontalHeaderFormat(*reinterpret_cast< HorizontalHeaderFormat*>(_v)); break;
        case 7: _t->setVerticalHeaderFormat(*reinterpret_cast< VerticalHeaderFormat*>(_v)); break;
        case 8: _t->setNavigationBarVisible(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setDateEditEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDateEditAcceptDelay(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 1: _t->clearMinimumDate(); break;
        case 2: _t->clearMaximumDate(); break;
        default: break;
        }
    }
}

const QMetaObject *QCalendarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCalendarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN15QCalendarWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QCalendarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QCalendarWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCalendarWidget::clicked(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCalendarWidget::activated(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCalendarWidget::currentPageChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
