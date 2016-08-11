/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreelayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreelayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreelayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeLayer_t {
    QByteArrayData data[9];
    char stringdata[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeLayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeLayer_t qt_meta_stringdata_QgsLayerTreeLayer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsLayerTreeLayer"
QT_MOC_LITERAL(1, 18, 11), // "layerLoaded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "layerWillBeUnloaded"
QT_MOC_LITERAL(4, 51, 19), // "registryLayersAdded"
QT_MOC_LITERAL(5, 71, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(6, 91, 6), // "layers"
QT_MOC_LITERAL(7, 98, 27), // "registryLayersWillBeRemoved"
QT_MOC_LITERAL(8, 126, 8) // "layerIds"

    },
    "QgsLayerTreeLayer\0layerLoaded\0\0"
    "layerWillBeUnloaded\0registryLayersAdded\0"
    "QList<QgsMapLayer*>\0layers\0"
    "registryLayersWillBeRemoved\0layerIds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x09 /* Protected */,
       7,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QStringList,    8,

       0        // eod
};

void QgsLayerTreeLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeLayer *_t = static_cast<QgsLayerTreeLayer *>(_o);
        switch (_id) {
        case 0: _t->layerLoaded(); break;
        case 1: _t->layerWillBeUnloaded(); break;
        case 2: _t->registryLayersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 3: _t->registryLayersWillBeRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsLayerTreeLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeLayer::layerLoaded)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsLayerTreeLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeLayer::layerWillBeUnloaded)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsLayerTreeLayer::staticMetaObject = {
    { &QgsLayerTreeNode::staticMetaObject, qt_meta_stringdata_QgsLayerTreeLayer.data,
      qt_meta_data_QgsLayerTreeLayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeLayer.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeLayer*>(this));
    return QgsLayerTreeNode::qt_metacast(_clname);
}

int QgsLayerTreeLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeLayer::layerLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsLayerTreeLayer::layerWillBeUnloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
