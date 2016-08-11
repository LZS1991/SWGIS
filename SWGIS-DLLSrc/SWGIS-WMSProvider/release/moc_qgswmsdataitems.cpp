/****************************************************************************
** Meta object code from reading C++ file 'qgswmsdataitems.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-WMSProvider/qgswmsdataitems.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswmsdataitems.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsWMSConnectionItem_t {
    QByteArrayData data[5];
    char stringdata[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSConnectionItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSConnectionItem_t qt_meta_stringdata_QgsWMSConnectionItem = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsWMSConnectionItem"
QT_MOC_LITERAL(1, 21, 14), // "editConnection"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "deleteConnection"
QT_MOC_LITERAL(4, 54, 11) // "deleteLater"

    },
    "QgsWMSConnectionItem\0editConnection\0"
    "\0deleteConnection\0deleteLater"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSConnectionItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsWMSConnectionItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWMSConnectionItem *_t = static_cast<QgsWMSConnectionItem *>(_o);
        switch (_id) {
        case 0: _t->editConnection(); break;
        case 1: _t->deleteConnection(); break;
        case 2: _t->deleteLater(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSConnectionItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsWMSConnectionItem.data,
      qt_meta_data_QgsWMSConnectionItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWMSConnectionItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSConnectionItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSConnectionItem.stringdata))
        return static_cast<void*>(const_cast< QgsWMSConnectionItem*>(this));
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsWMSConnectionItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataCollectionItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QgsWMSLayerItem_t {
    QByteArrayData data[1];
    char stringdata[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSLayerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSLayerItem_t qt_meta_stringdata_QgsWMSLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QgsWMSLayerItem"

    },
    "QgsWMSLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSLayerItem[] = {

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

void QgsWMSLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsWMSLayerItem.data,
      qt_meta_data_QgsWMSLayerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWMSLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSLayerItem.stringdata))
        return static_cast<void*>(const_cast< QgsWMSLayerItem*>(this));
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsWMSLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsWMTSLayerItem_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMTSLayerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMTSLayerItem_t qt_meta_stringdata_QgsWMTSLayerItem = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsWMTSLayerItem"

    },
    "QgsWMTSLayerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMTSLayerItem[] = {

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

void QgsWMTSLayerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsWMTSLayerItem::staticMetaObject = {
    { &QgsLayerItem::staticMetaObject, qt_meta_stringdata_QgsWMTSLayerItem.data,
      qt_meta_data_QgsWMTSLayerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWMTSLayerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMTSLayerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMTSLayerItem.stringdata))
        return static_cast<void*>(const_cast< QgsWMTSLayerItem*>(this));
    return QgsLayerItem::qt_metacast(_clname);
}

int QgsWMTSLayerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsWMSRootItem_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSRootItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSRootItem_t qt_meta_stringdata_QgsWMSRootItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsWMSRootItem"
QT_MOC_LITERAL(1, 15, 18), // "connectionsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13) // "newConnection"

    },
    "QgsWMSRootItem\0connectionsChanged\0\0"
    "newConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSRootItem[] = {

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

void QgsWMSRootItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWMSRootItem *_t = static_cast<QgsWMSRootItem *>(_o);
        switch (_id) {
        case 0: _t->connectionsChanged(); break;
        case 1: _t->newConnection(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWMSRootItem::staticMetaObject = {
    { &QgsDataCollectionItem::staticMetaObject, qt_meta_stringdata_QgsWMSRootItem.data,
      qt_meta_data_QgsWMSRootItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWMSRootItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSRootItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSRootItem.stringdata))
        return static_cast<void*>(const_cast< QgsWMSRootItem*>(this));
    return QgsDataCollectionItem::qt_metacast(_clname);
}

int QgsWMSRootItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
