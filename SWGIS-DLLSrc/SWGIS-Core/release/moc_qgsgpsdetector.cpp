/****************************************************************************
** Meta object code from reading C++ file 'qgsgpsdetector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/gps/qgsgpsdetector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgpsdetector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsGPSDetector_t {
    QByteArrayData data[8];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGPSDetector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGPSDetector_t qt_meta_stringdata_QgsGPSDetector = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsGPSDetector"
QT_MOC_LITERAL(1, 15, 8), // "detected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "QgsGPSConnection*"
QT_MOC_LITERAL(4, 43, 15), // "detectionFailed"
QT_MOC_LITERAL(5, 59, 7), // "advance"
QT_MOC_LITERAL(6, 67, 17), // "QgsGPSInformation"
QT_MOC_LITERAL(7, 85, 13) // "connDestroyed"

    },
    "QgsGPSDetector\0detected\0\0QgsGPSConnection*\0"
    "detectionFailed\0advance\0QgsGPSInformation\0"
    "connDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGPSDetector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       1,    1,   44,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void QgsGPSDetector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGPSDetector *_t = static_cast<QgsGPSDetector *>(_o);
        switch (_id) {
        case 0: _t->detected((*reinterpret_cast< QgsGPSConnection*(*)>(_a[1]))); break;
        case 1: _t->detectionFailed(); break;
        case 2: _t->advance(); break;
        case 3: _t->detected((*reinterpret_cast< const QgsGPSInformation(*)>(_a[1]))); break;
        case 4: _t->connDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsGPSDetector::*_t)(QgsGPSConnection * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGPSDetector::detected)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsGPSDetector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGPSDetector::detectionFailed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsGPSDetector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGPSDetector.data,
      qt_meta_data_QgsGPSDetector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsGPSDetector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGPSDetector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGPSDetector.stringdata))
        return static_cast<void*>(const_cast< QgsGPSDetector*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsGPSDetector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsGPSDetector::detected(QgsGPSConnection * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGPSDetector::detectionFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
