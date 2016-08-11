/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/gps/qgsgpsconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsGPSConnection_t {
    QByteArrayData data[8];
    char stringdata[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGPSConnection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGPSConnection_t qt_meta_stringdata_QgsGPSConnection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsGPSConnection"
QT_MOC_LITERAL(1, 17, 12), // "stateChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "QgsGPSInformation"
QT_MOC_LITERAL(4, 49, 4), // "info"
QT_MOC_LITERAL(5, 54, 20), // "nmeaSentenceReceived"
QT_MOC_LITERAL(6, 75, 9), // "substring"
QT_MOC_LITERAL(7, 85, 9) // "parseData"

    },
    "QgsGPSConnection\0stateChanged\0\0"
    "QgsGPSInformation\0info\0nmeaSentenceReceived\0"
    "substring\0parseData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGPSConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsGPSConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGPSConnection *_t = static_cast<QgsGPSConnection *>(_o);
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< const QgsGPSInformation(*)>(_a[1]))); break;
        case 1: _t->nmeaSentenceReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->parseData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsGPSConnection::*_t)(const QgsGPSInformation & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGPSConnection::stateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsGPSConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGPSConnection::nmeaSentenceReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsGPSConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGPSConnection.data,
      qt_meta_data_QgsGPSConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsGPSConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGPSConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGPSConnection.stringdata))
        return static_cast<void*>(const_cast< QgsGPSConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsGPSConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsGPSConnection::stateChanged(const QgsGPSInformation & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGPSConnection::nmeaSentenceReceived(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
