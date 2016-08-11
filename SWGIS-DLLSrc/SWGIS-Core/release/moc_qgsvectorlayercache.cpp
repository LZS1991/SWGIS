/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayercache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsvectorlayercache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayercache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsVectorLayerCache_t {
    QByteArrayData data[25];
    char stringdata[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayerCache_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayerCache_t qt_meta_stringdata_QgsVectorLayerCache = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsVectorLayerCache"
QT_MOC_LITERAL(1, 20, 8), // "progress"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "i"
QT_MOC_LITERAL(4, 32, 5), // "bool&"
QT_MOC_LITERAL(5, 38, 6), // "cancel"
QT_MOC_LITERAL(6, 45, 8), // "finished"
QT_MOC_LITERAL(7, 54, 18), // "cachedLayerDeleted"
QT_MOC_LITERAL(8, 73, 21), // "attributeValueChanged"
QT_MOC_LITERAL(9, 95, 12), // "QgsFeatureId"
QT_MOC_LITERAL(10, 108, 3), // "fid"
QT_MOC_LITERAL(11, 112, 5), // "field"
QT_MOC_LITERAL(12, 118, 5), // "value"
QT_MOC_LITERAL(13, 124, 12), // "featureAdded"
QT_MOC_LITERAL(14, 137, 11), // "invalidated"
QT_MOC_LITERAL(15, 149, 23), // "onAttributeValueChanged"
QT_MOC_LITERAL(16, 173, 14), // "featureDeleted"
QT_MOC_LITERAL(17, 188, 14), // "onFeatureAdded"
QT_MOC_LITERAL(18, 203, 14), // "attributeAdded"
QT_MOC_LITERAL(19, 218, 16), // "attributeDeleted"
QT_MOC_LITERAL(20, 235, 15), // "geometryChanged"
QT_MOC_LITERAL(21, 251, 12), // "QgsGeometry&"
QT_MOC_LITERAL(22, 264, 4), // "geom"
QT_MOC_LITERAL(23, 269, 12), // "layerDeleted"
QT_MOC_LITERAL(24, 282, 10) // "invalidate"

    },
    "QgsVectorLayerCache\0progress\0\0i\0bool&\0"
    "cancel\0finished\0cachedLayerDeleted\0"
    "attributeValueChanged\0QgsFeatureId\0"
    "fid\0field\0value\0featureAdded\0invalidated\0"
    "onAttributeValueChanged\0featureDeleted\0"
    "onFeatureAdded\0attributeAdded\0"
    "attributeDeleted\0geometryChanged\0"
    "QgsGeometry&\0geom\0layerDeleted\0"
    "invalidate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayerCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,
       7,    0,   90,    2, 0x06 /* Public */,
       8,    3,   91,    2, 0x06 /* Public */,
      13,    1,   98,    2, 0x06 /* Public */,
      14,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    3,  102,    2, 0x08 /* Private */,
      16,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      19,    1,  118,    2, 0x08 /* Private */,
      20,    2,  121,    2, 0x08 /* Private */,
      23,    0,  126,    2, 0x08 /* Private */,
      24,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::QVariant,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::QVariant,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 21,   10,   22,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsVectorLayerCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayerCache *_t = static_cast<QgsVectorLayerCache *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->finished(); break;
        case 2: _t->cachedLayerDeleted(); break;
        case 3: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 4: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 5: _t->invalidated(); break;
        case 6: _t->onAttributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 7: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 8: _t->onFeatureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 9: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->geometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< QgsGeometry(*)>(_a[2]))); break;
        case 12: _t->layerDeleted(); break;
        case 13: _t->invalidate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsVectorLayerCache::*_t)(int , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::progress)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsVectorLayerCache::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsVectorLayerCache::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::cachedLayerDeleted)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsVectorLayerCache::*_t)(QgsFeatureId , int , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::attributeValueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsVectorLayerCache::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::featureAdded)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsVectorLayerCache::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerCache::invalidated)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QgsVectorLayerCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsVectorLayerCache.data,
      qt_meta_data_QgsVectorLayerCache,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsVectorLayerCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayerCache::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerCache.stringdata))
        return static_cast<void*>(const_cast< QgsVectorLayerCache*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsVectorLayerCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayerCache::progress(int _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsVectorLayerCache::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsVectorLayerCache::cachedLayerDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsVectorLayerCache::attributeValueChanged(QgsFeatureId _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsVectorLayerCache::featureAdded(QgsFeatureId _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsVectorLayerCache::invalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
