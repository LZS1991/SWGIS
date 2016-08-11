/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeModel_t {
    QByteArrayData data[19];
    char stringdata[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeModel_t qt_meta_stringdata_QgsLayerTreeModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLayerTreeModel"
QT_MOC_LITERAL(1, 18, 19), // "nodeWillAddChildren"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(4, 57, 4), // "node"
QT_MOC_LITERAL(5, 62, 9), // "indexFrom"
QT_MOC_LITERAL(6, 72, 7), // "indexTo"
QT_MOC_LITERAL(7, 80, 17), // "nodeAddedChildren"
QT_MOC_LITERAL(8, 98, 22), // "nodeWillRemoveChildren"
QT_MOC_LITERAL(9, 121, 19), // "nodeRemovedChildren"
QT_MOC_LITERAL(10, 141, 21), // "nodeVisibilityChanged"
QT_MOC_LITERAL(11, 163, 25), // "nodeCustomPropertyChanged"
QT_MOC_LITERAL(12, 189, 3), // "key"
QT_MOC_LITERAL(13, 193, 15), // "nodeLayerLoaded"
QT_MOC_LITERAL(14, 209, 23), // "nodeLayerWillBeUnloaded"
QT_MOC_LITERAL(15, 233, 18), // "layerLegendChanged"
QT_MOC_LITERAL(16, 252, 16), // "layerNeedsUpdate"
QT_MOC_LITERAL(17, 269, 21), // "legendNodeDataChanged"
QT_MOC_LITERAL(18, 291, 28) // "invalidateLegendMapBasedData"

    },
    "QgsLayerTreeModel\0nodeWillAddChildren\0"
    "\0QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0nodeAddedChildren\0"
    "nodeWillRemoveChildren\0nodeRemovedChildren\0"
    "nodeVisibilityChanged\0nodeCustomPropertyChanged\0"
    "key\0nodeLayerLoaded\0nodeLayerWillBeUnloaded\0"
    "layerLegendChanged\0layerNeedsUpdate\0"
    "legendNodeDataChanged\0"
    "invalidateLegendMapBasedData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x09 /* Protected */,
       7,    3,   81,    2, 0x09 /* Protected */,
       8,    3,   88,    2, 0x09 /* Protected */,
       9,    0,   95,    2, 0x09 /* Protected */,
      10,    1,   96,    2, 0x09 /* Protected */,
      11,    2,   99,    2, 0x09 /* Protected */,
      13,    0,  104,    2, 0x09 /* Protected */,
      14,    0,  105,    2, 0x09 /* Protected */,
      15,    0,  106,    2, 0x09 /* Protected */,
      16,    0,  107,    2, 0x09 /* Protected */,
      17,    0,  108,    2, 0x09 /* Protected */,
      18,    0,  109,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsLayerTreeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeModel *_t = static_cast<QgsLayerTreeModel *>(_o);
        switch (_id) {
        case 0: _t->nodeWillAddChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->nodeAddedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->nodeWillRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->nodeRemovedChildren(); break;
        case 4: _t->nodeVisibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1]))); break;
        case 5: _t->nodeCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->nodeLayerLoaded(); break;
        case 7: _t->nodeLayerWillBeUnloaded(); break;
        case 8: _t->layerLegendChanged(); break;
        case 9: _t->layerNeedsUpdate(); break;
        case 10: _t->legendNodeDataChanged(); break;
        case 11: _t->invalidateLegendMapBasedData(); break;
        default: ;
        }
    }
}

const QMetaObject QgsLayerTreeModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QgsLayerTreeModel.data,
      qt_meta_data_QgsLayerTreeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeModel.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QgsLayerTreeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
