/****************************************************************************
** Meta object code from reading C++ file 'qgsgeometryvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsgeometryvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgeometryvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsGeometryValidator_t {
    QByteArrayData data[5];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGeometryValidator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGeometryValidator_t qt_meta_stringdata_QgsGeometryValidator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsGeometryValidator"
QT_MOC_LITERAL(1, 21, 10), // "errorFound"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "QgsGeometry::Error"
QT_MOC_LITERAL(4, 52, 8) // "addError"

    },
    "QgsGeometryValidator\0errorFound\0\0"
    "QgsGeometry::Error\0addError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGeometryValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QgsGeometryValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGeometryValidator *_t = static_cast<QgsGeometryValidator *>(_o);
        switch (_id) {
        case 0: _t->errorFound((*reinterpret_cast< const QgsGeometry::Error(*)>(_a[1]))); break;
        case 1: _t->addError((*reinterpret_cast< const QgsGeometry::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsGeometryValidator::*_t)(const QgsGeometry::Error & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsGeometryValidator::errorFound)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsGeometryValidator::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QgsGeometryValidator.data,
      qt_meta_data_QgsGeometryValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsGeometryValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGeometryValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGeometryValidator.stringdata))
        return static_cast<void*>(const_cast< QgsGeometryValidator*>(this));
    return QThread::qt_metacast(_clname);
}

int QgsGeometryValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QgsGeometryValidator::errorFound(const QgsGeometry::Error & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
