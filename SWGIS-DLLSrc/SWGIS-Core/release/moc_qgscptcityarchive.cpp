/****************************************************************************
** Meta object code from reading C++ file 'qgscptcityarchive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/symbology-ng/qgscptcityarchive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscptcityarchive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsCptCityDataItem_t {
    QByteArrayData data[14];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityDataItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityDataItem_t qt_meta_stringdata_QgsCptCityDataItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsCptCityDataItem"
QT_MOC_LITERAL(1, 19, 16), // "beginInsertItems"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "QgsCptCityDataItem*"
QT_MOC_LITERAL(4, 57, 6), // "parent"
QT_MOC_LITERAL(5, 64, 5), // "first"
QT_MOC_LITERAL(6, 70, 4), // "last"
QT_MOC_LITERAL(7, 75, 14), // "endInsertItems"
QT_MOC_LITERAL(8, 90, 16), // "beginRemoveItems"
QT_MOC_LITERAL(9, 107, 14), // "endRemoveItems"
QT_MOC_LITERAL(10, 122, 20), // "emitBeginInsertItems"
QT_MOC_LITERAL(11, 143, 18), // "emitEndInsertItems"
QT_MOC_LITERAL(12, 162, 20), // "emitBeginRemoveItems"
QT_MOC_LITERAL(13, 183, 18) // "emitEndRemoveItems"

    },
    "QgsCptCityDataItem\0beginInsertItems\0"
    "\0QgsCptCityDataItem*\0parent\0first\0"
    "last\0endInsertItems\0beginRemoveItems\0"
    "endRemoveItems\0emitBeginInsertItems\0"
    "emitEndInsertItems\0emitBeginRemoveItems\0"
    "emitEndRemoveItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityDataItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,
       8,    3,   62,    2, 0x06 /* Public */,
       9,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   70,    2, 0x0a /* Public */,
      11,    0,   77,    2, 0x0a /* Public */,
      12,    3,   78,    2, 0x0a /* Public */,
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void QgsCptCityDataItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCptCityDataItem *_t = static_cast<QgsCptCityDataItem *>(_o);
        switch (_id) {
        case 0: _t->beginInsertItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->endInsertItems(); break;
        case 2: _t->beginRemoveItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->endRemoveItems(); break;
        case 4: _t->emitBeginInsertItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->emitEndInsertItems(); break;
        case 6: _t->emitBeginRemoveItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->emitEndRemoveItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsCptCityDataItem::*_t)(QgsCptCityDataItem * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCptCityDataItem::beginInsertItems)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsCptCityDataItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCptCityDataItem::endInsertItems)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsCptCityDataItem::*_t)(QgsCptCityDataItem * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCptCityDataItem::beginRemoveItems)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsCptCityDataItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCptCityDataItem::endRemoveItems)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QgsCptCityDataItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCptCityDataItem.data,
      qt_meta_data_QgsCptCityDataItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityDataItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityDataItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityDataItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityDataItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCptCityDataItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QgsCptCityDataItem::beginInsertItems(QgsCptCityDataItem * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsCptCityDataItem::endInsertItems()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsCptCityDataItem::beginRemoveItems(QgsCptCityDataItem * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsCptCityDataItem::endRemoveItems()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsCptCityColorRampItem_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityColorRampItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityColorRampItem_t qt_meta_stringdata_QgsCptCityColorRampItem = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsCptCityColorRampItem"

    },
    "QgsCptCityColorRampItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityColorRampItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsCptCityColorRampItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCptCityColorRampItem::staticMetaObject = {
    { &QgsCptCityDataItem::staticMetaObject, qt_meta_stringdata_QgsCptCityColorRampItem.data,
      qt_meta_data_QgsCptCityColorRampItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityColorRampItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityColorRampItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityColorRampItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityColorRampItem*>(this));
    return QgsCptCityDataItem::qt_metacast(_clname);
}

int QgsCptCityColorRampItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCptCityDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsCptCityCollectionItem_t {
    QByteArrayData data[1];
    char stringdata[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityCollectionItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityCollectionItem_t qt_meta_stringdata_QgsCptCityCollectionItem = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QgsCptCityCollectionItem"

    },
    "QgsCptCityCollectionItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityCollectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsCptCityCollectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCptCityCollectionItem::staticMetaObject = {
    { &QgsCptCityDataItem::staticMetaObject, qt_meta_stringdata_QgsCptCityCollectionItem.data,
      qt_meta_data_QgsCptCityCollectionItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityCollectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityCollectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityCollectionItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityCollectionItem*>(this));
    return QgsCptCityDataItem::qt_metacast(_clname);
}

int QgsCptCityCollectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCptCityDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsCptCityDirectoryItem_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityDirectoryItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityDirectoryItem_t qt_meta_stringdata_QgsCptCityDirectoryItem = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsCptCityDirectoryItem"

    },
    "QgsCptCityDirectoryItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityDirectoryItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsCptCityDirectoryItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCptCityDirectoryItem::staticMetaObject = {
    { &QgsCptCityCollectionItem::staticMetaObject, qt_meta_stringdata_QgsCptCityDirectoryItem.data,
      qt_meta_data_QgsCptCityDirectoryItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityDirectoryItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityDirectoryItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityDirectoryItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityDirectoryItem*>(this));
    return QgsCptCityCollectionItem::qt_metacast(_clname);
}

int QgsCptCityDirectoryItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCptCityCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsCptCitySelectionItem_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCitySelectionItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCitySelectionItem_t qt_meta_stringdata_QgsCptCitySelectionItem = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsCptCitySelectionItem"

    },
    "QgsCptCitySelectionItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCitySelectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsCptCitySelectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCptCitySelectionItem::staticMetaObject = {
    { &QgsCptCityCollectionItem::staticMetaObject, qt_meta_stringdata_QgsCptCitySelectionItem.data,
      qt_meta_data_QgsCptCitySelectionItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCitySelectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCitySelectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCitySelectionItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCitySelectionItem*>(this));
    return QgsCptCityCollectionItem::qt_metacast(_clname);
}

int QgsCptCitySelectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCptCityCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsCptCityAllRampsItem_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityAllRampsItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityAllRampsItem_t qt_meta_stringdata_QgsCptCityAllRampsItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QgsCptCityAllRampsItem"

    },
    "QgsCptCityAllRampsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityAllRampsItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsCptCityAllRampsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsCptCityAllRampsItem::staticMetaObject = {
    { &QgsCptCityCollectionItem::staticMetaObject, qt_meta_stringdata_QgsCptCityAllRampsItem.data,
      qt_meta_data_QgsCptCityAllRampsItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityAllRampsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityAllRampsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityAllRampsItem.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityAllRampsItem*>(this));
    return QgsCptCityCollectionItem::qt_metacast(_clname);
}

int QgsCptCityAllRampsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsCptCityCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsCptCityBrowserModel_t {
    QByteArrayData data[10];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCptCityBrowserModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCptCityBrowserModel_t qt_meta_stringdata_QgsCptCityBrowserModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsCptCityBrowserModel"
QT_MOC_LITERAL(1, 23, 16), // "beginInsertItems"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "QgsCptCityDataItem*"
QT_MOC_LITERAL(4, 61, 6), // "parent"
QT_MOC_LITERAL(5, 68, 5), // "first"
QT_MOC_LITERAL(6, 74, 4), // "last"
QT_MOC_LITERAL(7, 79, 14), // "endInsertItems"
QT_MOC_LITERAL(8, 94, 16), // "beginRemoveItems"
QT_MOC_LITERAL(9, 111, 14) // "endRemoveItems"

    },
    "QgsCptCityBrowserModel\0beginInsertItems\0"
    "\0QgsCptCityDataItem*\0parent\0first\0"
    "last\0endInsertItems\0beginRemoveItems\0"
    "endRemoveItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCptCityBrowserModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,
       8,    3,   42,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void QgsCptCityBrowserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCptCityBrowserModel *_t = static_cast<QgsCptCityBrowserModel *>(_o);
        switch (_id) {
        case 0: _t->beginInsertItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->endInsertItems(); break;
        case 2: _t->beginRemoveItems((*reinterpret_cast< QgsCptCityDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->endRemoveItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsCptCityDataItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsCptCityBrowserModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsCptCityBrowserModel.data,
      qt_meta_data_QgsCptCityBrowserModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCptCityBrowserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCptCityBrowserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCptCityBrowserModel.stringdata))
        return static_cast<void*>(const_cast< QgsCptCityBrowserModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsCptCityBrowserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
