/****************************************************************************
** Meta object code from reading C++ file 'qfiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qtbase/src/widgets/dialogs/qfiledialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfiledialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11QFileDialogE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11QFileDialogE = QtMocHelpers::stringData(
    "QFileDialog",
    "fileSelected",
    "",
    "file",
    "filesSelected",
    "files",
    "currentChanged",
    "path",
    "directoryEntered",
    "directory",
    "urlSelected",
    "url",
    "urlsSelected",
    "QList<QUrl>",
    "urls",
    "currentUrlChanged",
    "directoryUrlEntered",
    "filterSelected",
    "filter",
    "viewMode",
    "ViewMode",
    "fileMode",
    "FileMode",
    "acceptMode",
    "AcceptMode",
    "defaultSuffix",
    "options",
    "Options",
    "supportedSchemes",
    "Detail",
    "List",
    "AnyFile",
    "ExistingFile",
    "Directory",
    "ExistingFiles",
    "AcceptOpen",
    "AcceptSave",
    "Option",
    "ShowDirsOnly",
    "DontResolveSymlinks",
    "DontConfirmOverwrite",
    "DontUseNativeDialog",
    "ReadOnly",
    "HideNameFilterDetails",
    "DontUseCustomDirectoryIcons"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11QFileDialogE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   95, // properties
       5,  125, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,   12 /* Public */,
       4,    1,   71,    2, 0x06,   14 /* Public */,
       6,    1,   74,    2, 0x06,   16 /* Public */,
       8,    1,   77,    2, 0x06,   18 /* Public */,
      10,    1,   80,    2, 0x06,   20 /* Public */,
      12,    1,   83,    2, 0x06,   22 /* Public */,
      15,    1,   86,    2, 0x06,   24 /* Public */,
      16,    1,   89,    2, 0x06,   26 /* Public */,
      17,    1,   92,    2, 0x06,   28 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QString,   18,

 // properties: name, type, flags, notifyId, revision
      19, 0x80000000 | 20, 0x0001510b, uint(-1), 0,
      21, 0x80000000 | 22, 0x0001510b, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,
      25, QMetaType::QString, 0x00015103, uint(-1), 0,
      26, 0x80000000 | 27, 0x0001510b, uint(-1), 0,
      28, QMetaType::QStringList, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      20,   20, 0x0,    2,  150,
      22,   22, 0x0,    4,  154,
      24,   24, 0x0,    2,  162,
      37,   37, 0x0,    7,  166,
      27,   37, 0x1,    7,  180,

 // enum data: key, value
      29, uint(QFileDialog::Detail),
      30, uint(QFileDialog::List),
      31, uint(QFileDialog::AnyFile),
      32, uint(QFileDialog::ExistingFile),
      33, uint(QFileDialog::Directory),
      34, uint(QFileDialog::ExistingFiles),
      35, uint(QFileDialog::AcceptOpen),
      36, uint(QFileDialog::AcceptSave),
      38, uint(QFileDialog::ShowDirsOnly),
      39, uint(QFileDialog::DontResolveSymlinks),
      40, uint(QFileDialog::DontConfirmOverwrite),
      41, uint(QFileDialog::DontUseNativeDialog),
      42, uint(QFileDialog::ReadOnly),
      43, uint(QFileDialog::HideNameFilterDetails),
      44, uint(QFileDialog::DontUseCustomDirectoryIcons),
      38, uint(QFileDialog::ShowDirsOnly),
      39, uint(QFileDialog::DontResolveSymlinks),
      40, uint(QFileDialog::DontConfirmOverwrite),
      41, uint(QFileDialog::DontUseNativeDialog),
      42, uint(QFileDialog::ReadOnly),
      43, uint(QFileDialog::HideNameFilterDetails),
      44, uint(QFileDialog::DontUseCustomDirectoryIcons),

       0        // eod
};

Q_CONSTINIT const QMetaObject QFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN11QFileDialogE.offsetsAndSizes,
    qt_meta_data_ZN11QFileDialogE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11QFileDialogE_t,
        // property 'viewMode'
        QtPrivate::TypeAndForceComplete<ViewMode, std::true_type>,
        // property 'fileMode'
        QtPrivate::TypeAndForceComplete<FileMode, std::true_type>,
        // property 'acceptMode'
        QtPrivate::TypeAndForceComplete<AcceptMode, std::true_type>,
        // property 'defaultSuffix'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'options'
        QtPrivate::TypeAndForceComplete<Options, std::true_type>,
        // property 'supportedSchemes'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // enum 'ViewMode'
        QtPrivate::TypeAndForceComplete<QFileDialog::ViewMode, std::true_type>,
        // enum 'FileMode'
        QtPrivate::TypeAndForceComplete<QFileDialog::FileMode, std::true_type>,
        // enum 'AcceptMode'
        QtPrivate::TypeAndForceComplete<QFileDialog::AcceptMode, std::true_type>,
        // enum 'Option'
        QtPrivate::TypeAndForceComplete<QFileDialog::Option, std::true_type>,
        // enum 'Options'
        QtPrivate::TypeAndForceComplete<QFileDialog::Options, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFileDialog, std::true_type>,
        // method 'fileSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filesSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'directoryEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'urlSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'urlsSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>,
        // method 'currentUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'directoryUrlEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'filterSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_ASSERT(_o == nullptr || staticMetaObject.cast(_o));
    auto *_t = static_cast<QFileDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->filesSelected((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->directoryEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->urlSelected((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 5: _t->urlsSelected((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 6: _t->currentUrlChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 7: _t->directoryUrlEntered((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->filterSelected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QFileDialog::*)(const QString & );
            if (_q_method_type _q_method = &QFileDialog::fileSelected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QStringList & );
            if (_q_method_type _q_method = &QFileDialog::filesSelected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QString & );
            if (_q_method_type _q_method = &QFileDialog::currentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QString & );
            if (_q_method_type _q_method = &QFileDialog::directoryEntered; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QUrl & );
            if (_q_method_type _q_method = &QFileDialog::urlSelected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QList<QUrl> & );
            if (_q_method_type _q_method = &QFileDialog::urlsSelected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QUrl & );
            if (_q_method_type _q_method = &QFileDialog::currentUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QUrl & );
            if (_q_method_type _q_method = &QFileDialog::directoryUrlEntered; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (QFileDialog::*)(const QString & );
            if (_q_method_type _q_method = &QFileDialog::filterSelected; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ViewMode*>(_v) = _t->viewMode(); break;
        case 1: *reinterpret_cast< FileMode*>(_v) = _t->fileMode(); break;
        case 2: *reinterpret_cast< AcceptMode*>(_v) = _t->acceptMode(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->defaultSuffix(); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(_t->options()); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->supportedSchemes(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 1: _t->setFileMode(*reinterpret_cast< FileMode*>(_v)); break;
        case 2: _t->setAcceptMode(*reinterpret_cast< AcceptMode*>(_v)); break;
        case 3: _t->setDefaultSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 5: _t->setSupportedSchemes(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11QFileDialogE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QFileDialog::fileSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileDialog::filesSelected(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileDialog::currentChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QFileDialog::directoryEntered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QFileDialog::urlSelected(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QFileDialog::urlsSelected(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QFileDialog::currentUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QFileDialog::directoryUrlEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QFileDialog::filterSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
