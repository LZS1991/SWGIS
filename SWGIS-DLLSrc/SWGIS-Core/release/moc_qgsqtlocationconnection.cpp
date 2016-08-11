/****************************************************************************
** Meta object code from reading C++ file 'qgsqtlocationconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/gps/qgsqtlocationconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsqtlocationconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsQtLocationConnection_t {
    QByteArrayData data[11];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsQtLocationConnection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsQtLocationConnection_t qt_meta_stringdata_QgsQtLocationConnection = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsQtLocationConnection"
QT_MOC_LITERAL(1, 24, 28), // "broadcastConnectionAvailable"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 9), // "parseData"
QT_MOC_LITERAL(4, 64, 15), // "positionUpdated"
QT_MOC_LITERAL(5, 80, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(6, 97, 4), // "info"
QT_MOC_LITERAL(7, 102, 23), // "satellitesInViewUpdated"
QT_MOC_LITERAL(8, 126, 24), // "QList<QGeoSatelliteInfo>"
QT_MOC_LITERAL(9, 151, 10), // "satellites"
QT_MOC_LITERAL(10, 162, 22) // "satellitesInUseUpdated"

    },
    "QgsQtLocationConnection\0"
    "broadcastConnectionAvailable\0\0parseData\0"
    "positionUpdated\0QGeoPositionInfo\0info\0"
    "satellitesInViewUpdated\0"
    "QList<QGeoSatelliteInfo>\0satellites\0"
    "satellitesInUseUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsQtLocationConnection[] = {

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
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    1,   41,    2, 0x09 /* Protected */,
       7,    1,   44,    2, 0x09 /* Protected */,
      10,    1,   47,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QgsQtLocationConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsQtLocationConnection *_t = static_cast<QgsQtLocationConnection *>(_o);
        switch (_id) {
        case 0: _t->broadcastConnectionAvailable(); break;
        case 1: _t->parseData(); break;
        case 2: _t->positionUpdated((*reinterpret_cast< const QGeoPositionInfo(*)>(_a[1]))); break;
        case 3: _t->satellitesInViewUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        case 4: _t->satellitesInUseUpdated((*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsQtLocationConnection::staticMetaObject = {
    { &QgsGPSConnection::staticMetaObject, qt_meta_stringdata_QgsQtLocationConnection.data,
      qt_meta_data_QgsQtLocationConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsQtLocationConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsQtLocationConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsQtLocationConnection.stringdata))
        return static_cast<void*>(const_cast< QgsQtLocationConnection*>(this));
    return QgsGPSConnection::qt_metacast(_clname);
}

int QgsQtLocationConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsGPSConnection::qt_metacall(_c, _id, _a);
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
