/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreegroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreegroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreegroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeGroup_t {
    QByteArrayData data[6];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeGroup_t qt_meta_stringdata_QgsLayerTreeGroup = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLayerTreeGroup"
QT_MOC_LITERAL(1, 18, 14), // "layerDestroyed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "nodeVisibilityChanged"
QT_MOC_LITERAL(4, 56, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(5, 74, 4) // "node"

    },
    "QgsLayerTreeGroup\0layerDestroyed\0\0"
    "nodeVisibilityChanged\0QgsLayerTreeNode*\0"
    "node"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeGroup[] = {

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
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    1,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QgsLayerTreeGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeGroup *_t = static_cast<QgsLayerTreeGroup *>(_o);
        switch (_id) {
        case 0: _t->layerDestroyed(); break;
        case 1: _t->nodeVisibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsLayerTreeGroup::staticMetaObject = {
    { &QgsLayerTreeNode::staticMetaObject, qt_meta_stringdata_QgsLayerTreeGroup.data,
      qt_meta_data_QgsLayerTreeGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeGroup.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeGroup*>(this));
    return QgsLayerTreeNode::qt_metacast(_clname);
}

int QgsLayerTreeGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE