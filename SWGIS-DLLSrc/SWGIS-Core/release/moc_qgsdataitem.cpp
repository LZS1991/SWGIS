/****************************************************************************
** Meta object code from reading C++ file 'qgsdataitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsdataitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdataitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsAnimatedIcon_t {
    QByteArrayData data[4];
    char stringdata[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAnimatedIcon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAnimatedIcon_t qt_meta_stringdata_QgsAnimatedIcon = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsAnimatedIcon"
QT_MOC_LITERAL(1, 16, 12), // "frameChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14) // "onFrameChanged"

    },
    "QgsAnimatedIcon\0frameChanged\0\0"
    "onFrameChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAnimatedIcon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsAnimatedIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAnimatedIcon *_t = static_cast<QgsAnimatedIcon *>(_o);
        switch (_id) {
        case 0: _t->frameChanged(); break;
        case 1: _t->onFrameChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsAnimatedIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAnimatedIcon::frameChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsAnimatedIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAnimatedIcon.data,
      qt_meta_data_QgsAnimatedIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsAnimatedIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAnimatedIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAnimatedIcon.stringdata))
        return static_cast<void*>(const_cast< QgsAnimatedIcon*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsAnimatedIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsAnimatedIcon::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsDataItem_t {
    QByteArrayData data[38];
    char stringdata[443];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataItem_t qt_meta_stringdata_QgsDataItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsDataItem"
QT_MOC_LITERAL(1, 12, 16), // "beginInsertItems"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "QgsDataItem*"
QT_MOC_LITERAL(4, 43, 6), // "parent"
QT_MOC_LITERAL(5, 50, 5), // "first"
QT_MOC_LITERAL(6, 56, 4), // "last"
QT_MOC_LITERAL(7, 61, 14), // "endInsertItems"
QT_MOC_LITERAL(8, 76, 16), // "beginRemoveItems"
QT_MOC_LITERAL(9, 93, 14), // "endRemoveItems"
QT_MOC_LITERAL(10, 108, 11), // "dataChanged"
QT_MOC_LITERAL(11, 120, 4), // "item"
QT_MOC_LITERAL(12, 125, 12), // "stateChanged"
QT_MOC_LITERAL(13, 138, 18), // "QgsDataItem::State"
QT_MOC_LITERAL(14, 157, 8), // "oldState"
QT_MOC_LITERAL(15, 166, 11), // "deleteLater"
QT_MOC_LITERAL(16, 178, 8), // "populate"
QT_MOC_LITERAL(17, 187, 10), // "foreground"
QT_MOC_LITERAL(18, 198, 10), // "depopulate"
QT_MOC_LITERAL(19, 209, 7), // "refresh"
QT_MOC_LITERAL(20, 217, 20), // "emitBeginInsertItems"
QT_MOC_LITERAL(21, 238, 18), // "emitEndInsertItems"
QT_MOC_LITERAL(22, 257, 20), // "emitBeginRemoveItems"
QT_MOC_LITERAL(23, 278, 18), // "emitEndRemoveItems"
QT_MOC_LITERAL(24, 297, 15), // "emitDataChanged"
QT_MOC_LITERAL(25, 313, 16), // "emitStateChanged"
QT_MOC_LITERAL(26, 330, 15), // "childrenCreated"
QT_MOC_LITERAL(27, 346, 4), // "Type"
QT_MOC_LITERAL(28, 351, 10), // "Collection"
QT_MOC_LITERAL(29, 362, 9), // "Directory"
QT_MOC_LITERAL(30, 372, 5), // "Layer"
QT_MOC_LITERAL(31, 378, 5), // "Error"
QT_MOC_LITERAL(32, 384, 10), // "Favourites"
QT_MOC_LITERAL(33, 395, 7), // "Project"
QT_MOC_LITERAL(34, 403, 5), // "State"
QT_MOC_LITERAL(35, 409, 12), // "NotPopulated"
QT_MOC_LITERAL(36, 422, 10), // "Populating"
QT_MOC_LITERAL(37, 433, 9) // "Populated"

    },
    "QgsDataItem\0beginInsertItems\0\0"
    "QgsDataItem*\0parent\0first\0last\0"
    "endInsertItems\0beginRemoveItems\0"
    "endRemoveItems\0dataChanged\0item\0"
    "stateChanged\0QgsDataItem::State\0"
    "oldState\0deleteLater\0populate\0foreground\0"
    "depopulate\0refresh\0emitBeginInsertItems\0"
    "emitEndInsertItems\0emitBeginRemoveItems\0"
    "emitEndRemoveItems\0emitDataChanged\0"
    "emitStateChanged\0childrenCreated\0Type\0"
    "Collection\0Directory\0Layer\0Error\0"
    "Favourites\0Project\0State\0NotPopulated\0"
    "Populating\0Populated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       2,  166, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  109,    2, 0x06 /* Public */,
       7,    0,  116,    2, 0x06 /* Public */,
       8,    3,  117,    2, 0x06 /* Public */,
       9,    0,  124,    2, 0x06 /* Public */,
      10,    1,  125,    2, 0x06 /* Public */,
      12,    2,  128,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  133,    2, 0x0a /* Public */,
      16,    1,  134,    2, 0x0a /* Public */,
      16,    0,  137,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  138,    2, 0x0a /* Public */,
      19,    0,  139,    2, 0x0a /* Public */,
      20,    3,  140,    2, 0x0a /* Public */,
      21,    0,  147,    2, 0x0a /* Public */,
      22,    3,  148,    2, 0x0a /* Public */,
      23,    0,  155,    2, 0x0a /* Public */,
      24,    1,  156,    2, 0x0a /* Public */,
      24,    0,  159,    2, 0x0a /* Public */,
      25,    2,  160,    2, 0x0a /* Public */,
      26,    0,  165,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13,   11,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13,   11,   14,
    QMetaType::Void,

 // enums: name, flags, count, data
      27, 0x0,    6,  174,
      34, 0x0,    3,  186,

 // enum data: key, value
      28, uint(QgsDataItem::Collection),
      29, uint(QgsDataItem::Directory),
      30, uint(QgsDataItem::Layer),
      31, uint(QgsDataItem::Error),
      32, uint(QgsDataItem::Favourites),
      33, uint(QgsDataItem::Project),
      35, uint(QgsDataItem::NotPopulated),
      36, uint(QgsDataItem::Populating),
      37, uint(QgsDataItem::Populated),

       0        // eod
};

void QgsDataItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDataItem *_t = static_cast<QgsDataItem *>(_o);
        switch (_id) {
        case 0: _t->beginInsertItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->endInsertItems(); break;
        case 2: _t->beginRemoveItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->endRemoveItems(); break;
        case 4: _t->dataChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< QgsDataItem::State(*)>(_a[2]))); break;
        case 6: _t->deleteLater(); break;
        case 7: _t->populate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->populate(); break;
        case 9: _t->depopulate(); break;
        case 10: _t->refresh(); break;
        case 11: _t->emitBeginInsertItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->emitEndInsertItems(); break;
        case 13: _t->emitBeginRemoveItems((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->emitEndRemoveItems(); break;
        case 15: _t->emitDataChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1]))); break;
        case 16: _t->emitDataChanged(); break;
        case 17: _t->emitStateChanged((*reinterpret_cast< QgsDataItem*(*)>(_a[1])),(*reinterpret_cast< QgsDataItem::State(*)>(_a[2]))); break;
        case 18: _t->childrenCreated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsDataItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsDataItem::*_t)(QgsDataItem * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::beginInsertItems)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsDataItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::endInsertItems)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsDataItem::*_t)(QgsDataItem * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::beginRemoveItems)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsDataItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::endRemoveItems)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsDataItem::*_t)(QgsDataItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::dataChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsDataItem::*_t)(QgsDataItem * , QgsDataItem::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataItem::stateChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QgsDataItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsDataItem.data,
      qt_meta_data_QgsDataItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDataItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataItem.stringdata))
        return static_cast<void*>(const_cast< QgsDataItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsDataItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QgsDataItem::beginInsertItems(QgsDataItem * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsDataItem::endInsertItems()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsDataItem::beginRemoveItems(QgsDataItem * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsDataItem::endRemoveItems()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QgsDataItem::dataChanged(QgsDataItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsDataItem::stateChanged(QgsDataItem * _t1, QgsDataItem::State _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QgsLayerItem_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerItem_t qt_meta_stringdata_QgsLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QgsLayerItem"

    },
    "QgsLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerItem[] = {

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

void QgsLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLayerItem::staticMetaObject = {
    { &QgsDataItem::staticMetaObject, qt_meta_stringdata_QgsLayerItem.data,
      qt_meta_data_QgsLayerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerItem.stringdata))
        return static_cast<void*>(const_cast< QgsLayerItem*>(this));
    return QgsDataItem::qt_metacast(_clname);
}

int QgsLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsDataCollectionItem_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataCollectionItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataCollectionItem_t qt_meta_stringdata_QgsDataCollectionItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QgsDataCollectionItem"

    },
    "QgsDataCollectionItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataCollectionItem[] = {

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

void QgsDataCollectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDataCollectionItem::staticMetaObject = {
    { &QgsDataItem::staticMetaObject, qt_meta_stringdata_QgsDataCollectionItem.data,
      qt_meta_data_QgsDataCollectionItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDataCollectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataCollectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataCollectionItem.stringdata))
        return static_cast<void*>(const_cast< QgsDataCollectionItem*>(this));
    return QgsDataItem::qt_metacast(_clname);
}

int QgsDataCollectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsDirectoryItem_t {
    QByteArrayData data[4];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDirectoryItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDirectoryItem_t qt_meta_stringdata_QgsDirectoryItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsDirectoryItem"
QT_MOC_LITERAL(1, 17, 15), // "childrenCreated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16) // "directoryChanged"

    },
    "QgsDirectoryItem\0childrenCreated\0\0"
    "directoryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDirectoryItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsDirectoryItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDirectoryItem *_t = static_cast<QgsDirectoryItem *>(_o);
        switch (_id) {
        case 0: _t->childrenCreated(); break;
        case 1: _t->directoryChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsDirectoryItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsDirectoryItem.data,
      qt_meta_data_QgsDirectoryItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDirectoryItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDirectoryItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDirectoryItem.stringdata))
        return static_cast<void*>(const_cast< QgsDirectoryItem*>(this));
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsDirectoryItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QgsProjectItem_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProjectItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProjectItem_t qt_meta_stringdata_QgsProjectItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QgsProjectItem"

    },
    "QgsProjectItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProjectItem[] = {

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

void QgsProjectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsProjectItem::staticMetaObject = {
    { &QgsDataItem::staticMetaObject, qt_meta_stringdata_QgsProjectItem.data,
      qt_meta_data_QgsProjectItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsProjectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProjectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectItem.stringdata))
        return static_cast<void*>(const_cast< QgsProjectItem*>(this));
    return QgsDataItem::qt_metacast(_clname);
}

int QgsProjectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsErrorItem_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsErrorItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsErrorItem_t qt_meta_stringdata_QgsErrorItem = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QgsErrorItem"

    },
    "QgsErrorItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsErrorItem[] = {

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

void QgsErrorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsErrorItem::staticMetaObject = {
    { &QgsDataItem::staticMetaObject, qt_meta_stringdata_QgsErrorItem.data,
      qt_meta_data_QgsErrorItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsErrorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsErrorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsErrorItem.stringdata))
        return static_cast<void*>(const_cast< QgsErrorItem*>(this));
    return QgsDataItem::qt_metacast(_clname);
}

int QgsErrorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsDirectoryParamWidget_t {
    QByteArrayData data[3];
    char stringdata[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDirectoryParamWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDirectoryParamWidget_t qt_meta_stringdata_QgsDirectoryParamWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsDirectoryParamWidget"
QT_MOC_LITERAL(1, 24, 14), // "showHideColumn"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "QgsDirectoryParamWidget\0showHideColumn\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDirectoryParamWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsDirectoryParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDirectoryParamWidget *_t = static_cast<QgsDirectoryParamWidget *>(_o);
        switch (_id) {
        case 0: _t->showHideColumn(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsDirectoryParamWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QgsDirectoryParamWidget.data,
      qt_meta_data_QgsDirectoryParamWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDirectoryParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDirectoryParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDirectoryParamWidget.stringdata))
        return static_cast<void*>(const_cast< QgsDirectoryParamWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int QgsDirectoryParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QgsFavouritesItem_t {
    QByteArrayData data[1];
    char stringdata[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsFavouritesItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsFavouritesItem_t qt_meta_stringdata_QgsFavouritesItem = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QgsFavouritesItem"

    },
    "QgsFavouritesItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsFavouritesItem[] = {

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

void QgsFavouritesItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsFavouritesItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsFavouritesItem.data,
      qt_meta_data_QgsFavouritesItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsFavouritesItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsFavouritesItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsFavouritesItem.stringdata))
        return static_cast<void*>(const_cast< QgsFavouritesItem*>(this));
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsFavouritesItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsZipItem_t {
    QByteArrayData data[1];
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsZipItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsZipItem_t qt_meta_stringdata_QgsZipItem = {
    {
QT_MOC_LITERAL(0, 0, 10) // "QgsZipItem"

    },
    "QgsZipItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsZipItem[] = {

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

void QgsZipItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsZipItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsZipItem.data,
      qt_meta_data_QgsZipItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsZipItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsZipItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsZipItem.stringdata))
        return static_cast<void*>(const_cast< QgsZipItem*>(this));
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsZipItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
