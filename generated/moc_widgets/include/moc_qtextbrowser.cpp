/****************************************************************************
** Meta object code from reading C++ file 'qtextbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/widgets/qtextbrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextbrowser.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QTextBrowserE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12QTextBrowserE = QtMocHelpers::stringData(
    "QTextBrowser",
    "backwardAvailable",
    "",
    "forwardAvailable",
    "historyChanged",
    "sourceChanged",
    "highlighted",
    "anchorClicked",
    "setSource",
    "name",
    "QTextDocument::ResourceType",
    "type",
    "backward",
    "forward",
    "home",
    "reload",
    "source",
    "sourceType",
    "searchPaths",
    "openExternalLinks",
    "openLinks"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12QTextBrowserE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    6 /* Public */,
       3,    1,   89,    2, 0x06,    8 /* Public */,
       4,    0,   92,    2, 0x06,   10 /* Public */,
       5,    1,   93,    2, 0x06,   11 /* Public */,
       6,    1,   96,    2, 0x06,   13 /* Public */,
       7,    1,   99,    2, 0x06,   15 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    2,  102,    2, 0x0a,   17 /* Public */,
       8,    1,  107,    2, 0x2a,   20 /* Public | MethodCloned */,
      12,    0,  110,    2, 0x0a,   22 /* Public */,
      13,    0,  111,    2, 0x0a,   23 /* Public */,
      14,    0,  112,    2, 0x0a,   24 /* Public */,
      15,    0,  113,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      16, QMetaType::QUrl, 0x00015103, uint(-1), 0,
      17, 0x80000000 | 10, 0x00015009, uint(-1), 0,
      18, QMetaType::QStringList, 0x00015103, uint(-1), 0,
      19, QMetaType::Bool, 0x00015103, uint(-1), 0,
      20, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN12QTextBrowserE[] = {
    QMetaObject::SuperData::link<QTextDocument::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject QTextBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_ZN12QTextBrowserE.offsetsAndSizes,
    qt_meta_data_ZN12QTextBrowserE,
    qt_static_metacall,
    qt_meta_extradata_ZN12QTextBrowserE,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12QTextBrowserE_t,
        // property 'source'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'sourceType'
        QtPrivate::TypeAndForceComplete<QTextDocument::ResourceType, std::true_type>,
        // property 'searchPaths'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'openExternalLinks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'openLinks'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTextBrowser, std::true_type>,
        // method 'backwardAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'forwardAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'historyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'highlighted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'anchorClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'setSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextDocument::ResourceType, std::false_type>,
        // method 'setSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'backward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'home'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QTextBrowser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->backwardAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->forwardAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->historyChanged(); break;
        case 3: _t->sourceChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 4: _t->highlighted((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 5: _t->anchorClicked((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 6: _t->setSource((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTextDocument::ResourceType>>(_a[2]))); break;
        case 7: _t->setSource((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->backward(); break;
        case 9: _t->forward(); break;
        case 10: _t->home(); break;
        case 11: _t->reload(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QTextBrowser::*)(bool );
            if (_q_method_type _q_method = &QTextBrowser::backwardAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QTextBrowser::*)(bool );
            if (_q_method_type _q_method = &QTextBrowser::forwardAvailable; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QTextBrowser::*)();
            if (_q_method_type _q_method = &QTextBrowser::historyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QTextBrowser::*)(const QUrl & );
            if (_q_method_type _q_method = &QTextBrowser::sourceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QTextBrowser::*)(const QUrl & );
            if (_q_method_type _q_method = &QTextBrowser::highlighted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QTextBrowser::*)(const QUrl & );
            if (_q_method_type _q_method = &QTextBrowser::anchorClicked; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QTextDocument::ResourceType*>(_v) = _t->sourceType(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->searchPaths(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->openExternalLinks(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->openLinks(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setSearchPaths(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: _t->setOpenExternalLinks(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setOpenLinks(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12QTextBrowserE.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int QTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QTextBrowser::backwardAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTextBrowser::forwardAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextBrowser::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QTextBrowser::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextBrowser::highlighted(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextBrowser::anchorClicked(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
