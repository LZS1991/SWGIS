/****************************************************************************
** Meta object code from reading C++ file 'qgsgml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsgml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsGml_t {
    QByteArrayData data[9];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGml_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGml_t qt_meta_stringdata_QgsGml = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QgsGml"
QT_MOC_LITERAL(1, 7, 16), // "dataReadProgress"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "progress"
QT_MOC_LITERAL(4, 34, 16), // "totalStepsUpdate"
QT_MOC_LITERAL(5, 51, 10), // "totalSteps"
QT_MOC_LITERAL(6, 62, 20), // "dataProgressAndSteps"
QT_MOC_LITERAL(7, 83, 11), // "setFinished"
QT_MOC_LITERAL(8, 95, 19) // "handleProgressEvent"

    },
    "QgsGml\0dataReadProgress\0\0progress\0"
    "totalStepsUpdate\0totalSteps\0"
    "dataProgressAndSteps\0setFinished\0"
    "handleProgressEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGml[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x08 /* Private */,
       8,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    5,

       0        // eod
};

void QgsGml::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGml *_t = static_cast<QgsGml *>(_o);
        switch (_id) {
        case 0: _t->dataReadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->totalStepsUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->dataProgressAndSteps((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setFinished(); break;
        case 4: _t->handleProgressEvent((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsGml::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGml::dataReadProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsGml::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGml::totalStepsUpdate)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsGml::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGml::dataProgressAndSteps)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QgsGml::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsGml.data,
      qt_meta_data_QgsGml,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsGml::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGml::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGml.stringdata))
        return static_cast<void*>(const_cast< QgsGml*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsGml::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsGml::dataReadProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsGml::totalStepsUpdate(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsGml::dataProgressAndSteps(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
