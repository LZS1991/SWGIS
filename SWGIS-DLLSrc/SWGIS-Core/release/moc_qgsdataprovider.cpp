/****************************************************************************
** Meta object code from reading C++ file 'qgsdataprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsdataprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsdataprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsDataProvider_t {
    QByteArrayData data[11];
    char stringdata[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDataProvider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDataProvider_t qt_meta_stringdata_QgsDataProvider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsDataProvider"
QT_MOC_LITERAL(1, 16, 20), // "fullExtentCalculated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "dataChanged"
QT_MOC_LITERAL(4, 50, 7), // "changed"
QT_MOC_LITERAL(5, 58, 14), // "DataCapability"
QT_MOC_LITERAL(6, 73, 18), // "NoDataCapabilities"
QT_MOC_LITERAL(7, 92, 4), // "File"
QT_MOC_LITERAL(8, 97, 3), // "Dir"
QT_MOC_LITERAL(9, 101, 8), // "Database"
QT_MOC_LITERAL(10, 110, 3) // "Net"

    },
    "QgsDataProvider\0fullExtentCalculated\0"
    "\0dataChanged\0changed\0DataCapability\0"
    "NoDataCapabilities\0File\0Dir\0Database\0"
    "Net"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDataProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       3,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // enums: name, flags, count, data
       5, 0x0,    5,   38,

 // enum data: key, value
       6, uint(QgsDataProvider::NoDataCapabilities),
       7, uint(QgsDataProvider::File),
       8, uint(QgsDataProvider::Dir),
       9, uint(QgsDataProvider::Database),
      10, uint(QgsDataProvider::Net),

       0        // eod
};

void QgsDataProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsDataProvider *_t = static_cast<QgsDataProvider *>(_o);
        switch (_id) {
        case 0: _t->fullExtentCalculated(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->dataChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsDataProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataProvider::fullExtentCalculated)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsDataProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataProvider::dataChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsDataProvider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsDataProvider::dataChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QgsDataProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsDataProvider.data,
      qt_meta_data_QgsDataProvider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDataProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDataProvider.stringdata))
        return static_cast<void*>(const_cast< QgsDataProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsDataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsDataProvider::fullExtentCalculated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsDataProvider::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsDataProvider::dataChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
