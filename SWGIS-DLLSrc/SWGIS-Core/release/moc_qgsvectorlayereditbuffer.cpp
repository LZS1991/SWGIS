/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayereditbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsvectorlayereditbuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayereditbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsVectorLayerEditBuffer_t {
    QByteArrayData data[35];
    char stringdata[576];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayerEditBuffer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayerEditBuffer_t qt_meta_stringdata_QgsVectorLayerEditBuffer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsVectorLayerEditBuffer"
QT_MOC_LITERAL(1, 25, 13), // "layerModified"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "featureAdded"
QT_MOC_LITERAL(4, 53, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 66, 3), // "fid"
QT_MOC_LITERAL(6, 70, 14), // "featureDeleted"
QT_MOC_LITERAL(7, 85, 15), // "geometryChanged"
QT_MOC_LITERAL(8, 101, 12), // "QgsGeometry&"
QT_MOC_LITERAL(9, 114, 4), // "geom"
QT_MOC_LITERAL(10, 119, 21), // "attributeValueChanged"
QT_MOC_LITERAL(11, 141, 3), // "idx"
QT_MOC_LITERAL(12, 145, 14), // "attributeAdded"
QT_MOC_LITERAL(13, 160, 16), // "attributeDeleted"
QT_MOC_LITERAL(14, 177, 26), // "committedAttributesDeleted"
QT_MOC_LITERAL(15, 204, 7), // "layerId"
QT_MOC_LITERAL(16, 212, 16), // "QgsAttributeList"
QT_MOC_LITERAL(17, 229, 17), // "deletedAttributes"
QT_MOC_LITERAL(18, 247, 24), // "committedAttributesAdded"
QT_MOC_LITERAL(19, 272, 15), // "QList<QgsField>"
QT_MOC_LITERAL(20, 288, 15), // "addedAttributes"
QT_MOC_LITERAL(21, 304, 22), // "committedFeaturesAdded"
QT_MOC_LITERAL(22, 327, 14), // "QgsFeatureList"
QT_MOC_LITERAL(23, 342, 13), // "addedFeatures"
QT_MOC_LITERAL(24, 356, 24), // "committedFeaturesRemoved"
QT_MOC_LITERAL(25, 381, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(26, 395, 17), // "deletedFeatureIds"
QT_MOC_LITERAL(27, 413, 31), // "committedAttributeValuesChanges"
QT_MOC_LITERAL(28, 445, 23), // "QgsChangedAttributesMap"
QT_MOC_LITERAL(29, 469, 23), // "changedAttributesValues"
QT_MOC_LITERAL(30, 493, 26), // "committedGeometriesChanges"
QT_MOC_LITERAL(31, 520, 14), // "QgsGeometryMap"
QT_MOC_LITERAL(32, 535, 17), // "changedGeometries"
QT_MOC_LITERAL(33, 553, 16), // "undoIndexChanged"
QT_MOC_LITERAL(34, 570, 5) // "index"

    },
    "QgsVectorLayerEditBuffer\0layerModified\0"
    "\0featureAdded\0QgsFeatureId\0fid\0"
    "featureDeleted\0geometryChanged\0"
    "QgsGeometry&\0geom\0attributeValueChanged\0"
    "idx\0attributeAdded\0attributeDeleted\0"
    "committedAttributesDeleted\0layerId\0"
    "QgsAttributeList\0deletedAttributes\0"
    "committedAttributesAdded\0QList<QgsField>\0"
    "addedAttributes\0committedFeaturesAdded\0"
    "QgsFeatureList\0addedFeatures\0"
    "committedFeaturesRemoved\0QgsFeatureIds\0"
    "deletedFeatureIds\0committedAttributeValuesChanges\0"
    "QgsChangedAttributesMap\0changedAttributesValues\0"
    "committedGeometriesChanges\0QgsGeometryMap\0"
    "changedGeometries\0undoIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayerEditBuffer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       7,    2,   91,    2, 0x06 /* Public */,
      10,    3,   96,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,
      13,    1,  106,    2, 0x06 /* Public */,
      14,    2,  109,    2, 0x06 /* Public */,
      18,    2,  114,    2, 0x06 /* Public */,
      21,    2,  119,    2, 0x06 /* Public */,
      24,    2,  124,    2, 0x06 /* Public */,
      27,    2,  129,    2, 0x06 /* Public */,
      30,    2,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    1,  139,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int, QMetaType::QVariant,    5,   11,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16,   15,   17,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   15,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   15,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 25,   15,   26,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 28,   15,   29,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 31,   15,   32,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   34,

       0        // eod
};

void QgsVectorLayerEditBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayerEditBuffer *_t = static_cast<QgsVectorLayerEditBuffer *>(_o);
        switch (_id) {
        case 0: _t->layerModified(); break;
        case 1: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 3: _t->geometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< QgsGeometry(*)>(_a[2]))); break;
        case 4: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 5: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->committedAttributesDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsAttributeList(*)>(_a[2]))); break;
        case 8: _t->committedAttributesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsField>(*)>(_a[2]))); break;
        case 9: _t->committedFeaturesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureList(*)>(_a[2]))); break;
        case 10: _t->committedFeaturesRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2]))); break;
        case 11: _t->committedAttributeValuesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsChangedAttributesMap(*)>(_a[2]))); break;
        case 12: _t->committedGeometriesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsGeometryMap(*)>(_a[2]))); break;
        case 13: _t->undoIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsField> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeatureList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::layerModified)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::featureAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::featureDeleted)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId , QgsGeometry & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::geometryChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(QgsFeatureId , int , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeValueChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeAdded)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::attributeDeleted)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsAttributeList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributesDeleted)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QList<QgsField> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributesAdded)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsFeatureList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedFeaturesAdded)) {
                *result = 9;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedFeaturesRemoved)) {
                *result = 10;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsChangedAttributesMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedAttributeValuesChanges)) {
                *result = 11;
            }
        }
        {
            typedef void (QgsVectorLayerEditBuffer::*_t)(const QString & , const QgsGeometryMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayerEditBuffer::committedGeometriesChanges)) {
                *result = 12;
            }
        }
    }
}

const QMetaObject QgsVectorLayerEditBuffer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsVectorLayerEditBuffer.data,
      qt_meta_data_QgsVectorLayerEditBuffer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsVectorLayerEditBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayerEditBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayerEditBuffer.stringdata))
        return static_cast<void*>(const_cast< QgsVectorLayerEditBuffer*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsVectorLayerEditBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayerEditBuffer::layerModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsVectorLayerEditBuffer::featureAdded(QgsFeatureId _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsVectorLayerEditBuffer::featureDeleted(QgsFeatureId _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsVectorLayerEditBuffer::geometryChanged(QgsFeatureId _t1, QgsGeometry & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsVectorLayerEditBuffer::attributeValueChanged(QgsFeatureId _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsVectorLayerEditBuffer::attributeAdded(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsVectorLayerEditBuffer::attributeDeleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsVectorLayerEditBuffer::committedAttributesDeleted(const QString & _t1, const QgsAttributeList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsVectorLayerEditBuffer::committedAttributesAdded(const QString & _t1, const QList<QgsField> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsVectorLayerEditBuffer::committedFeaturesAdded(const QString & _t1, const QgsFeatureList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsVectorLayerEditBuffer::committedFeaturesRemoved(const QString & _t1, const QgsFeatureIds & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsVectorLayerEditBuffer::committedAttributeValuesChanges(const QString & _t1, const QgsChangedAttributesMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsVectorLayerEditBuffer::committedGeometriesChanges(const QString & _t1, const QgsGeometryMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
