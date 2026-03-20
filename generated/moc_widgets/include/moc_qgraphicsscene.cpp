/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsscene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/graphicsview/qgraphicsscene.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsscene.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QGraphicsSceneE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14QGraphicsSceneE = QtMocHelpers::stringData(
    "QGraphicsScene",
    "changed",
    "",
    "QList<QRectF>",
    "region",
    "sceneRectChanged",
    "rect",
    "selectionChanged",
    "focusItemChanged",
    "QGraphicsItem*",
    "newFocus",
    "oldFocus",
    "Qt::FocusReason",
    "reason",
    "update",
    "invalidate",
    "SceneLayers",
    "layers",
    "advance",
    "clearSelection",
    "clear",
    "focusNextPrevChild",
    "next",
    "_q_emitUpdated",
    "_q_polishItems",
    "_q_processDirtyItems",
    "_q_updateScenePosDescendants",
    "backgroundBrush",
    "foregroundBrush",
    "itemIndexMethod",
    "ItemIndexMethod",
    "sceneRect",
    "bspTreeDepth",
    "palette",
    "font",
    "stickyFocus",
    "minimumRenderSize",
    "focusOnTouch",
    "BspTreeIndex",
    "NoIndex"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14QGraphicsSceneE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
      10,  153, // properties
       1,  203, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,   12 /* Public */,
       5,    1,  119,    2, 0x06,   14 /* Public */,
       7,    0,  122,    2, 0x06,   16 /* Public */,
       8,    3,  123,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,  130,    2, 0x0a,   21 /* Public */,
      14,    0,  133,    2, 0x2a,   23 /* Public | MethodCloned */,
      15,    2,  134,    2, 0x0a,   24 /* Public */,
      15,    1,  139,    2, 0x2a,   27 /* Public | MethodCloned */,
      15,    0,  142,    2, 0x2a,   29 /* Public | MethodCloned */,
      18,    0,  143,    2, 0x0a,   30 /* Public */,
      19,    0,  144,    2, 0x0a,   31 /* Public */,
      20,    0,  145,    2, 0x0a,   32 /* Public */,
      21,    1,  146,    2, 0x09,   33 /* Protected */,
      23,    0,  149,    2, 0x08,   35 /* Private */,
      24,    0,  150,    2, 0x08,   36 /* Private */,
      25,    0,  151,    2, 0x08,   37 /* Private */,
      26,    0,  152,    2, 0x08,   38 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QRectF,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12,   10,   11,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF, 0x80000000 | 16,    6,   17,
    QMetaType::Void, QMetaType::QRectF,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      27, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      28, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      29, 0x80000000 | 30, 0x0001510b, uint(-1), 0,
      31, QMetaType::QRectF, 0x00015103, uint(-1), 0,
      32, QMetaType::Int, 0x00015103, uint(-1), 0,
      33, QMetaType::QPalette, 0x00015103, uint(-1), 0,
      34, QMetaType::QFont, 0x00015103, uint(-1), 0,
      35, QMetaType::Bool, 0x00015103, uint(-1), 0,
      36, QMetaType::QReal, 0x00015103, uint(-1), 0,
      37, QMetaType::Bool, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      30,   30, 0x0,    2,  208,

 // enum data: key, value
      38, uint(QGraphicsScene::BspTreeIndex),
      39, uint(QGraphicsScene::NoIndex),

       0        // eod
};

Q_CONSTINIT const QMetaObject QGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN14QGraphicsSceneE.offsetsAndSizes,
    qt_meta_data_ZN14QGraphicsSceneE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14QGraphicsSceneE_t,
        // property 'backgroundBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'foregroundBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'itemIndexMethod'
        QtPrivate::TypeAndForceComplete<ItemIndexMethod, std::true_type>,
        // property 'sceneRect'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'bspTreeDepth'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'palette'
        QtPrivate::TypeAndForceComplete<QPalette, std::true_type>,
        // property 'font'
        QtPrivate::TypeAndForceComplete<QFont, std::true_type>,
        // property 'stickyFocus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'minimumRenderSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'focusOnTouch'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'ItemIndexMethod'
        QtPrivate::TypeAndForceComplete<QGraphicsScene::ItemIndexMethod, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsScene, std::true_type>,
        // method 'changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QRectF> &, std::false_type>,
        // method 'sceneRectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::FocusReason, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'invalidate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<SceneLayers, std::false_type>,
        // method 'invalidate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'invalidate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'advance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusNextPrevChild'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_q_emitUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_polishItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_processDirtyItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method '_q_updateScenePosDescendants'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsScene *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< std::add_pointer_t<QList<QRectF>>>(_a[1]))); break;
        case 1: _t->sceneRectChanged((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->focusItemChanged((*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsItem*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Qt::FocusReason>>(_a[3]))); break;
        case 4: _t->update((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 5: _t->update(); break;
        case 6: _t->invalidate((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SceneLayers>>(_a[2]))); break;
        case 7: _t->invalidate((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 8: _t->invalidate(); break;
        case 9: _t->advance(); break;
        case 10: _t->clearSelection(); break;
        case 11: _t->clear(); break;
        case 12: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->d_func()->_q_emitUpdated(); break;
        case 14: _t->d_func()->_q_polishItems(); break;
        case 15: _t->d_func()->_q_processDirtyItems(); break;
        case 16: _t->d_func()->_q_updateScenePosDescendants(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QRectF> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QGraphicsScene::*)(const QList<QRectF> & );
            if (_q_method_type _q_method = &QGraphicsScene::changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScene::*)(const QRectF & );
            if (_q_method_type _q_method = &QGraphicsScene::sceneRectChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScene::*)();
            if (_q_method_type _q_method = &QGraphicsScene::selectionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QGraphicsScene::*)(QGraphicsItem * , QGraphicsItem * , Qt::FocusReason );
            if (_q_method_type _q_method = &QGraphicsScene::focusItemChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->backgroundBrush(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->foregroundBrush(); break;
        case 2: *reinterpret_cast< ItemIndexMethod*>(_v) = _t->itemIndexMethod(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->sceneRect(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->bspTreeDepth(); break;
        case 5: *reinterpret_cast< QPalette*>(_v) = _t->palette(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->stickyFocus(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->minimumRenderSize(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->focusOnTouch(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setForegroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setItemIndexMethod(*reinterpret_cast< ItemIndexMethod*>(_v)); break;
        case 3: _t->setSceneRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setBspTreeDepth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 6: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 7: _t->setStickyFocus(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setMinimumRenderSize(*reinterpret_cast< qreal*>(_v)); break;
        case 9: _t->setFocusOnTouch(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14QGraphicsSceneE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsScene::changed(const QList<QRectF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsScene::sceneRectChanged(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsScene::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGraphicsScene::focusItemChanged(QGraphicsItem * _t1, QGraphicsItem * _t2, Qt::FocusReason _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
