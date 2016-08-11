/****************************************************************************
** Meta object code from reading C++ file 'qgspointlocator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgspointlocator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgspointlocator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsPointLocator_t {
    QByteArrayData data[9];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPointLocator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPointLocator_t qt_meta_stringdata_QgsPointLocator = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsPointLocator"
QT_MOC_LITERAL(1, 16, 14), // "onFeatureAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "QgsFeatureId"
QT_MOC_LITERAL(4, 45, 3), // "fid"
QT_MOC_LITERAL(5, 49, 16), // "onFeatureDeleted"
QT_MOC_LITERAL(6, 66, 17), // "onGeometryChanged"
QT_MOC_LITERAL(7, 84, 12), // "QgsGeometry&"
QT_MOC_LITERAL(8, 97, 4) // "geom"

    },
    "QgsPointLocator\0onFeatureAdded\0\0"
    "QgsFeatureId\0fid\0onFeatureDeleted\0"
    "onGeometryChanged\0QgsGeometry&\0geom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPointLocator[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

       0        // eod
};

void QgsPointLocator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsPointLocator *_t = static_cast<QgsPointLocator *>(_o);
        switch (_id) {
        case 0: _t->onFeatureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 1: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 2: _t->onGeometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< QgsGeometry(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsPointLocator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsPointLocator.data,
      qt_meta_data_QgsPointLocator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsPointLocator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPointLocator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPointLocator.stringdata))
        return static_cast<void*>(const_cast< QgsPointLocator*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsPointLocator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
