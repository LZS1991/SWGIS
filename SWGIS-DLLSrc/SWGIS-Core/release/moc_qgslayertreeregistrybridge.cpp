/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreeregistrybridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreeregistrybridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreeregistrybridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeRegistryBridge_t {
    QByteArrayData data[15];
    char stringdata[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeRegistryBridge_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeRegistryBridge_t qt_meta_stringdata_QgsLayerTreeRegistryBridge = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsLayerTreeRegistryBridge"
QT_MOC_LITERAL(1, 27, 22), // "addedLayersToLayerTree"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(4, 71, 6), // "layers"
QT_MOC_LITERAL(5, 78, 11), // "layersAdded"
QT_MOC_LITERAL(6, 90, 19), // "layersWillBeRemoved"
QT_MOC_LITERAL(7, 110, 8), // "layerIds"
QT_MOC_LITERAL(8, 119, 23), // "groupWillRemoveChildren"
QT_MOC_LITERAL(9, 143, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(10, 161, 4), // "node"
QT_MOC_LITERAL(11, 166, 9), // "indexFrom"
QT_MOC_LITERAL(12, 176, 7), // "indexTo"
QT_MOC_LITERAL(13, 184, 20), // "groupRemovedChildren"
QT_MOC_LITERAL(14, 205, 24) // "removeLayersFromRegistry"

    },
    "QgsLayerTreeRegistryBridge\0"
    "addedLayersToLayerTree\0\0QList<QgsMapLayer*>\0"
    "layers\0layersAdded\0layersWillBeRemoved\0"
    "layerIds\0groupWillRemoveChildren\0"
    "QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0groupRemovedChildren\0"
    "removeLayersFromRegistry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeRegistryBridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x09 /* Protected */,
       6,    1,   50,    2, 0x09 /* Protected */,
       8,    3,   53,    2, 0x09 /* Protected */,
      13,    0,   60,    2, 0x09 /* Protected */,
      14,    1,   61,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    7,

       0        // eod
};

void QgsLayerTreeRegistryBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeRegistryBridge *_t = static_cast<QgsLayerTreeRegistryBridge *>(_o);
        switch (_id) {
        case 0: _t->addedLayersToLayerTree((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 1: _t->layersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 2: _t->layersWillBeRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->groupWillRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->groupRemovedChildren(); break;
        case 5: _t->removeLayersFromRegistry((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsLayerTreeRegistryBridge::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeRegistryBridge::addedLayersToLayerTree)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsLayerTreeRegistryBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeRegistryBridge.data,
      qt_meta_data_QgsLayerTreeRegistryBridge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeRegistryBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeRegistryBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeRegistryBridge.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeRegistryBridge*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeRegistryBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeRegistryBridge::addedLayersToLayerTree(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
