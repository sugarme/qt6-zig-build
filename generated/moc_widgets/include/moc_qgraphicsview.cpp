/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/graphicsview/qgraphicsview.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsview.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QGraphicsViewE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QGraphicsViewE = QtMocHelpers::stringData(
    "QGraphicsView",
    "rubberBandChanged",
    "",
    "viewportRect",
    "fromScenePoint",
    "toScenePoint",
    "updateScene",
    "QList<QRectF>",
    "rects",
    "invalidateScene",
    "rect",
    "QGraphicsScene::SceneLayers",
    "layers",
    "updateSceneRect",
    "setupViewport",
    "QWidget*",
    "widget",
    "_q_setViewportCursor",
    "_q_unsetViewportCursor",
    "backgroundBrush",
    "foregroundBrush",
    "interactive",
    "sceneRect",
    "alignment",
    "Qt::Alignment",
    "renderHints",
    "QPainter::RenderHints",
    "dragMode",
    "DragMode",
    "cacheMode",
    "CacheMode",
    "transformationAnchor",
    "ViewportAnchor",
    "resizeAnchor",
    "viewportUpdateMode",
    "ViewportUpdateMode",
    "rubberBandSelectionMode",
    "Qt::ItemSelectionMode",
    "optimizationFlags",
    "OptimizationFlags",
    "NoAnchor",
    "AnchorViewCenter",
    "AnchorUnderMouse",
    "CacheModeFlag",
    "CacheNone",
    "CacheBackground",
    "NoDrag",
    "ScrollHandDrag",
    "RubberBandDrag",
    "FullViewportUpdate",
    "MinimalViewportUpdate",
    "SmartViewportUpdate",
    "NoViewportUpdate",
    "BoundingRectViewportUpdate",
    "OptimizationFlag",
    "DontSavePainterState",
    "DontAdjustForAntialiasing",
    "IndirectPainting"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QGraphicsViewE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      13,   97, // properties
       5,  162, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   68,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   75,    2, 0x0a,   23 /* Public */,
       9,    2,   78,    2, 0x0a,   25 /* Public */,
       9,    1,   83,    2, 0x2a,   28 /* Public | MethodCloned */,
       9,    0,   86,    2, 0x2a,   30 /* Public | MethodCloned */,
      13,    1,   87,    2, 0x0a,   31 /* Public */,
      14,    1,   90,    2, 0x09,   33 /* Protected */,
      17,    1,   93,    2, 0x08,   35 /* Private */,
      18,    0,   96,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect, QMetaType::QPointF, QMetaType::QPointF,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QRectF, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QRectF,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QCursor,    2,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      19, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      20, QMetaType::QBrush, 0x00015103, uint(-1), 0,
      21, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::QRectF, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,
      25, 0x80000000 | 26, 0x0001510b, uint(-1), 0,
      27, 0x80000000 | 28, 0x0001510b, uint(-1), 0,
      29, 0x80000000 | 30, 0x0001510b, uint(-1), 0,
      31, 0x80000000 | 32, 0x0001510b, uint(-1), 0,
      33, 0x80000000 | 32, 0x0001510b, uint(-1), 0,
      34, 0x80000000 | 35, 0x0001510b, uint(-1), 0,
      36, 0x80000000 | 37, 0x0001510b, uint(-1), 0,
      38, 0x80000000 | 39, 0x0001510b, uint(-1), 0,

 // enums: name, alias, flags, count, data
      32,   32, 0x0,    3,  187,
      30,   43, 0x1,    2,  193,
      28,   28, 0x0,    3,  197,
      35,   35, 0x0,    5,  203,
      39,   54, 0x1,    3,  213,

 // enum data: key, value
      40, uint(QGraphicsView::NoAnchor),
      41, uint(QGraphicsView::AnchorViewCenter),
      42, uint(QGraphicsView::AnchorUnderMouse),
      44, uint(QGraphicsView::CacheNone),
      45, uint(QGraphicsView::CacheBackground),
      46, uint(QGraphicsView::NoDrag),
      47, uint(QGraphicsView::ScrollHandDrag),
      48, uint(QGraphicsView::RubberBandDrag),
      49, uint(QGraphicsView::FullViewportUpdate),
      50, uint(QGraphicsView::MinimalViewportUpdate),
      51, uint(QGraphicsView::SmartViewportUpdate),
      52, uint(QGraphicsView::NoViewportUpdate),
      53, uint(QGraphicsView::BoundingRectViewportUpdate),
      55, uint(QGraphicsView::DontSavePainterState),
      56, uint(QGraphicsView::DontAdjustForAntialiasing),
      57, uint(QGraphicsView::IndirectPainting),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN13QGraphicsViewE[] = {
    QMetaObject::SuperData::link<QPainter::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QGraphicsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_ZN13QGraphicsViewE.offsetsAndSizes,
    qt_meta_data_ZN13QGraphicsViewE,
    qt_static_metacall,
    qt_meta_extradata_ZN13QGraphicsViewE,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QGraphicsViewE_t,
        // property 'backgroundBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'foregroundBrush'
        QtPrivate::TypeAndForceComplete<QBrush, std::true_type>,
        // property 'interactive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sceneRect'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // property 'alignment'
        QtPrivate::TypeAndForceComplete<Qt::Alignment, std::true_type>,
        // property 'renderHints'
        QtPrivate::TypeAndForceComplete<QPainter::RenderHints, std::true_type>,
        // property 'dragMode'
        QtPrivate::TypeAndForceComplete<DragMode, std::true_type>,
        // property 'cacheMode'
        QtPrivate::TypeAndForceComplete<CacheMode, std::true_type>,
        // property 'transformationAnchor'
        QtPrivate::TypeAndForceComplete<ViewportAnchor, std::true_type>,
        // property 'resizeAnchor'
        QtPrivate::TypeAndForceComplete<ViewportAnchor, std::true_type>,
        // property 'viewportUpdateMode'
        QtPrivate::TypeAndForceComplete<ViewportUpdateMode, std::true_type>,
        // property 'rubberBandSelectionMode'
        QtPrivate::TypeAndForceComplete<Qt::ItemSelectionMode, std::true_type>,
        // property 'optimizationFlags'
        QtPrivate::TypeAndForceComplete<OptimizationFlags, std::true_type>,
        // enum 'ViewportAnchor'
        QtPrivate::TypeAndForceComplete<QGraphicsView::ViewportAnchor, std::true_type>,
        // enum 'CacheMode'
        QtPrivate::TypeAndForceComplete<QGraphicsView::CacheMode, std::true_type>,
        // enum 'DragMode'
        QtPrivate::TypeAndForceComplete<QGraphicsView::DragMode, std::true_type>,
        // enum 'ViewportUpdateMode'
        QtPrivate::TypeAndForceComplete<QGraphicsView::ViewportUpdateMode, std::true_type>,
        // enum 'OptimizationFlags'
        QtPrivate::TypeAndForceComplete<QGraphicsView::OptimizationFlags, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QGraphicsView, std::true_type>,
        // method 'rubberBandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QRect, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPointF, std::false_type>,
        // method 'updateScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QRectF> &, std::false_type>,
        // method 'invalidateScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QGraphicsScene::SceneLayers, std::false_type>,
        // method 'invalidateScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'invalidateScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSceneRect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'setupViewport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method '_q_setViewportCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCursor &, std::false_type>,
        // method '_q_unsetViewportCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QGraphicsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->rubberBandChanged((*reinterpret_cast< std::add_pointer_t<QRect>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[3]))); break;
        case 1: _t->updateScene((*reinterpret_cast< std::add_pointer_t<QList<QRectF>>>(_a[1]))); break;
        case 2: _t->invalidateScene((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QGraphicsScene::SceneLayers>>(_a[2]))); break;
        case 3: _t->invalidateScene((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 4: _t->invalidateScene(); break;
        case 5: _t->updateSceneRect((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        case 6: _t->setupViewport((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 7: _t->d_func()->_q_setViewportCursor((*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[1]))); break;
        case 8: _t->d_func()->_q_unsetViewportCursor(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QRectF> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QGraphicsView::*)(QRect , QPointF , QPointF );
            if (_q_method_type _q_method = &QGraphicsView::rubberBandChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->backgroundBrush(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->foregroundBrush(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->sceneRect(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 5: *reinterpret_cast<int*>(_v) = QFlag(_t->renderHints()); break;
        case 6: *reinterpret_cast< DragMode*>(_v) = _t->dragMode(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(_t->cacheMode()); break;
        case 8: *reinterpret_cast< ViewportAnchor*>(_v) = _t->transformationAnchor(); break;
        case 9: *reinterpret_cast< ViewportAnchor*>(_v) = _t->resizeAnchor(); break;
        case 10: *reinterpret_cast< ViewportUpdateMode*>(_v) = _t->viewportUpdateMode(); break;
        case 11: *reinterpret_cast< Qt::ItemSelectionMode*>(_v) = _t->rubberBandSelectionMode(); break;
        case 12: *reinterpret_cast<int*>(_v) = QFlag(_t->optimizationFlags()); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setForegroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSceneRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: _t->setRenderHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 6: _t->setDragMode(*reinterpret_cast< DragMode*>(_v)); break;
        case 7: _t->setCacheMode(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 8: _t->setTransformationAnchor(*reinterpret_cast< ViewportAnchor*>(_v)); break;
        case 9: _t->setResizeAnchor(*reinterpret_cast< ViewportAnchor*>(_v)); break;
        case 10: _t->setViewportUpdateMode(*reinterpret_cast< ViewportUpdateMode*>(_v)); break;
        case 11: _t->setRubberBandSelectionMode(*reinterpret_cast< Qt::ItemSelectionMode*>(_v)); break;
        case 12: _t->setOptimizationFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    }
}

const QMetaObject *QGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QGraphicsViewE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QGraphicsView::rubberBandChanged(QRect _t1, QPointF _t2, QPointF _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
