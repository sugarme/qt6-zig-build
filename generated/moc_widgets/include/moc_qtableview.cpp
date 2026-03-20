/****************************************************************************
** Meta object code from reading C++ file 'qtableview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/itemviews/qtableview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtableview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QTableViewE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QTableViewE = QtMocHelpers::stringData(
    "QTableView",
    "selectRow",
    "",
    "row",
    "selectColumn",
    "column",
    "hideRow",
    "hideColumn",
    "showRow",
    "showColumn",
    "resizeRowToContents",
    "resizeRowsToContents",
    "resizeColumnToContents",
    "resizeColumnsToContents",
    "sortByColumn",
    "Qt::SortOrder",
    "order",
    "setShowGrid",
    "show",
    "rowMoved",
    "oldIndex",
    "newIndex",
    "columnMoved",
    "rowResized",
    "oldHeight",
    "newHeight",
    "columnResized",
    "oldWidth",
    "newWidth",
    "rowCountChanged",
    "oldCount",
    "newCount",
    "columnCountChanged",
    "showGrid",
    "gridStyle",
    "Qt::PenStyle",
    "sortingEnabled",
    "wordWrap",
    "cornerButtonEnabled"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QTableViewE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       5,  194, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x0a,    6 /* Public */,
       4,    1,  125,    2, 0x0a,    8 /* Public */,
       6,    1,  128,    2, 0x0a,   10 /* Public */,
       7,    1,  131,    2, 0x0a,   12 /* Public */,
       8,    1,  134,    2, 0x0a,   14 /* Public */,
       9,    1,  137,    2, 0x0a,   16 /* Public */,
      10,    1,  140,    2, 0x0a,   18 /* Public */,
      11,    0,  143,    2, 0x0a,   20 /* Public */,
      12,    1,  144,    2, 0x0a,   21 /* Public */,
      13,    0,  147,    2, 0x0a,   23 /* Public */,
      14,    2,  148,    2, 0x0a,   24 /* Public */,
      17,    1,  153,    2, 0x0a,   27 /* Public */,
      19,    3,  156,    2, 0x09,   29 /* Protected */,
      22,    3,  163,    2, 0x09,   33 /* Protected */,
      23,    3,  170,    2, 0x09,   37 /* Protected */,
      26,    3,  177,    2, 0x09,   41 /* Protected */,
      29,    2,  184,    2, 0x09,   45 /* Protected */,
      32,    2,  189,    2, 0x09,   48 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,    5,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,   27,   28,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,

 // properties: name, type, flags, notifyId, revision
      33, QMetaType::Bool, 0x00015103, uint(-1), 0,
      34, 0x80000000 | 35, 0x0001510b, uint(-1), 0,
      36, QMetaType::Bool, 0x00015103, uint(-1), 0,
      37, QMetaType::Bool, 0x00015103, uint(-1), 0,
      38, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_ZN10QTableViewE.offsetsAndSizes,
    qt_meta_data_ZN10QTableViewE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QTableViewE_t,
        // property 'showGrid'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gridStyle'
        QtPrivate::TypeAndForceComplete<Qt::PenStyle, std::true_type>,
        // property 'sortingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wordWrap'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'cornerButtonEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTableView, std::true_type>,
        // method 'selectRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showRow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeRowToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeRowsToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizeColumnToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resizeColumnsToContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortByColumn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::SortOrder, std::false_type>,
        // method 'setShowGrid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'rowMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnResized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'columnCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void QTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTableView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->selectColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->hideRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->hideColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->showRow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->showColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->resizeRowToContents((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->resizeRowsToContents(); break;
        case 8: _t->resizeColumnToContents((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->resizeColumnsToContents(); break;
        case 10: _t->sortByColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::SortOrder>>(_a[2]))); break;
        case 11: _t->setShowGrid((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->rowMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 13: _t->columnMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 14: _t->rowResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 15: _t->columnResized((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 16: _t->rowCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->columnCountChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showGrid(); break;
        case 1: *reinterpret_cast< Qt::PenStyle*>(_v) = _t->gridStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSortingEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isCornerButtonEnabled(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGridStyle(*reinterpret_cast< Qt::PenStyle*>(_v)); break;
        case 2: _t->setSortingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setCornerButtonEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QTableViewE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int QTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
