/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerregistry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaplayerregistry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerregistry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapLayerRegistry_t {
    QByteArrayData data[18];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerRegistry_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerRegistry_t qt_meta_stringdata_QgsMapLayerRegistry = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsMapLayerRegistry"
QT_MOC_LITERAL(1, 20, 19), // "layersWillBeRemoved"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "theLayerIds"
QT_MOC_LITERAL(4, 53, 19), // "QList<QgsMapLayer*>"
QT_MOC_LITERAL(5, 73, 6), // "layers"
QT_MOC_LITERAL(6, 80, 18), // "layerWillBeRemoved"
QT_MOC_LITERAL(7, 99, 10), // "theLayerId"
QT_MOC_LITERAL(8, 110, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(9, 123, 5), // "layer"
QT_MOC_LITERAL(10, 129, 13), // "layersRemoved"
QT_MOC_LITERAL(11, 143, 12), // "layerRemoved"
QT_MOC_LITERAL(12, 156, 9), // "removeAll"
QT_MOC_LITERAL(13, 166, 11), // "layersAdded"
QT_MOC_LITERAL(14, 178, 12), // "theMapLayers"
QT_MOC_LITERAL(15, 191, 13), // "layerWasAdded"
QT_MOC_LITERAL(16, 205, 11), // "theMapLayer"
QT_MOC_LITERAL(17, 217, 17) // "legendLayersAdded"

    },
    "QgsMapLayerRegistry\0layersWillBeRemoved\0"
    "\0theLayerIds\0QList<QgsMapLayer*>\0"
    "layers\0layerWillBeRemoved\0theLayerId\0"
    "QgsMapLayer*\0layer\0layersRemoved\0"
    "layerRemoved\0removeAll\0layersAdded\0"
    "theMapLayers\0layerWasAdded\0theMapLayer\0"
    "legendLayersAdded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerRegistry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       1,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
      10,    1,   76,    2, 0x06 /* Public */,
      11,    1,   79,    2, 0x06 /* Public */,
      12,    0,   82,    2, 0x06 /* Public */,
      13,    1,   83,    2, 0x06 /* Public */,
      15,    1,   86,    2, 0x06 /* Public */,
      17,    1,   89,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   14,
    QMetaType::Void, 0x80000000 | 8,   16,
    QMetaType::Void, 0x80000000 | 4,   14,

       0        // eod
};

void QgsMapLayerRegistry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerRegistry *_t = static_cast<QgsMapLayerRegistry *>(_o);
        switch (_id) {
        case 0: _t->layersWillBeRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->layersWillBeRemoved((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 2: _t->layerWillBeRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->layerWillBeRemoved((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 4: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->layerRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removeAll(); break;
        case 7: _t->layersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        case 8: _t->layerWasAdded((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 9: _t->legendLayersAdded((*reinterpret_cast< const QList<QgsMapLayer*>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layersWillBeRemoved)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layersWillBeRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layerWillBeRemoved)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layerWillBeRemoved)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layersRemoved)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layerRemoved)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::removeAll)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layersAdded)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::layerWasAdded)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsMapLayerRegistry::*_t)(const QList<QgsMapLayer*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerRegistry::legendLayersAdded)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject QgsMapLayerRegistry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayerRegistry.data,
      qt_meta_data_QgsMapLayerRegistry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapLayerRegistry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerRegistry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerRegistry.stringdata))
        return static_cast<void*>(const_cast< QgsMapLayerRegistry*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayerRegistry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QgsMapLayerRegistry::layersWillBeRemoved(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayerRegistry::layersWillBeRemoved(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayerRegistry::layerWillBeRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsMapLayerRegistry::layerWillBeRemoved(QgsMapLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsMapLayerRegistry::layersRemoved(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapLayerRegistry::layerRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsMapLayerRegistry::removeAll()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QgsMapLayerRegistry::layersAdded(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsMapLayerRegistry::layerWasAdded(QgsMapLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsMapLayerRegistry::legendLayersAdded(const QList<QgsMapLayer*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
