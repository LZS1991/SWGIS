/****************************************************************************
** Meta object code from reading C++ file 'qgstracer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgstracer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstracer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsTracer_t {
    QByteArrayData data[12];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsTracer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsTracer_t qt_meta_stringdata_QgsTracer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QgsTracer"
QT_MOC_LITERAL(1, 10, 15), // "invalidateGraph"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "onFeatureAdded"
QT_MOC_LITERAL(4, 42, 12), // "QgsFeatureId"
QT_MOC_LITERAL(5, 55, 3), // "fid"
QT_MOC_LITERAL(6, 59, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(7, 76, 17), // "onGeometryChanged"
QT_MOC_LITERAL(8, 94, 12), // "QgsGeometry&"
QT_MOC_LITERAL(9, 107, 4), // "geom"
QT_MOC_LITERAL(10, 112, 16), // "onLayerDestroyed"
QT_MOC_LITERAL(11, 129, 3) // "obj"

    },
    "QgsTracer\0invalidateGraph\0\0onFeatureAdded\0"
    "QgsFeatureId\0fid\0onFeatureDeleted\0"
    "onGeometryChanged\0QgsGeometry&\0geom\0"
    "onLayerDestroyed\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsTracer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       7,    2,   46,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 8,    5,    9,
    QMetaType::Void, QMetaType::QObjectStar,   11,

       0        // eod
};

void QgsTracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsTracer *_t = static_cast<QgsTracer *>(_o);
        switch (_id) {
        case 0: _t->invalidateGraph(); break;
        case 1: _t->onFeatureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 3: _t->onGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< QgsGeometry(*)>(_a[2]))); break;
        case 4: _t->onLayerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsTracer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsTracer.data,
      qt_meta_data_QgsTracer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsTracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsTracer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsTracer.stringdata))
        return static_cast<void*>(const_cast< QgsTracer*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsTracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
