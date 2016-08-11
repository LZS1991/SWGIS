/****************************************************************************
** Meta object code from reading C++ file 'qgscomposermap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposermap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposermap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerMap_t {
    QByteArrayData data[17];
    char stringdata[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerMap_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerMap_t qt_meta_stringdata_QgsComposerMap = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsComposerMap"
QT_MOC_LITERAL(1, 15, 13), // "extentChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "mapRotationChanged"
QT_MOC_LITERAL(4, 49, 11), // "newRotation"
QT_MOC_LITERAL(5, 61, 16), // "preparedForAtlas"
QT_MOC_LITERAL(6, 78, 26), // "layerStyleOverridesChanged"
QT_MOC_LITERAL(7, 105, 17), // "updateCachedImage"
QT_MOC_LITERAL(8, 123, 27), // "renderModeUpdateCachedImage"
QT_MOC_LITERAL(9, 151, 18), // "updateBoundingRect"
QT_MOC_LITERAL(10, 170, 21), // "overviewExtentChanged"
QT_MOC_LITERAL(11, 192, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(12, 219, 38), // "QgsComposerObject::DataDefine..."
QT_MOC_LITERAL(13, 258, 8), // "property"
QT_MOC_LITERAL(14, 267, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(15, 295, 7), // "context"
QT_MOC_LITERAL(16, 303, 13) // "layersChanged"

    },
    "QgsComposerMap\0extentChanged\0\0"
    "mapRotationChanged\0newRotation\0"
    "preparedForAtlas\0layerStyleOverridesChanged\0"
    "updateCachedImage\0renderModeUpdateCachedImage\0"
    "updateBoundingRect\0overviewExtentChanged\0"
    "refreshDataDefinedProperty\0"
    "QgsComposerObject::DataDefinedProperty\0"
    "property\0const QgsExpressionContext*\0"
    "context\0layersChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    2,   84,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   92,    2, 0x2a /* Public | MethodCloned */,
      16,    0,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsComposerMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerMap *_t = static_cast<QgsComposerMap *>(_o);
        switch (_id) {
        case 0: _t->extentChanged(); break;
        case 1: _t->mapRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->preparedForAtlas(); break;
        case 3: _t->layerStyleOverridesChanged(); break;
        case 4: _t->updateCachedImage(); break;
        case 5: _t->renderModeUpdateCachedImage(); break;
        case 6: _t->updateBoundingRect(); break;
        case 7: _t->overviewExtentChanged(); break;
        case 8: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 9: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 10: _t->refreshDataDefinedProperty(); break;
        case 11: _t->layersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposerMap::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMap::extentChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsComposerMap::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMap::mapRotationChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsComposerMap::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMap::preparedForAtlas)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsComposerMap::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMap::layerStyleOverridesChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QgsComposerMap::staticMetaObject = {
    { &QgsComposerItem::staticMetaObject, qt_meta_stringdata_QgsComposerMap.data,
      qt_meta_data_QgsComposerMap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerMap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerMap.stringdata))
        return static_cast<void*>(const_cast< QgsComposerMap*>(this));
    return QgsComposerItem::qt_metacast(_clname);
}

int QgsComposerMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerItem::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsComposerMap::extentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsComposerMap::mapRotationChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsComposerMap::preparedForAtlas()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsComposerMap::layerStyleOverridesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
