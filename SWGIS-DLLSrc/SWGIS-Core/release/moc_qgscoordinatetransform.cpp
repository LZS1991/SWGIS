/****************************************************************************
** Meta object code from reading C++ file 'qgscoordinatetransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgscoordinatetransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscoordinatetransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsCoordinateTransform_t {
    QByteArrayData data[10];
    char stringdata[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCoordinateTransform_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCoordinateTransform_t qt_meta_stringdata_QgsCoordinateTransform = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QgsCoordinateTransform"
QT_MOC_LITERAL(1, 23, 21), // "invalidTransformInput"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "initialise"
QT_MOC_LITERAL(4, 57, 7), // "readXML"
QT_MOC_LITERAL(5, 65, 9), // "QDomNode&"
QT_MOC_LITERAL(6, 75, 7), // "theNode"
QT_MOC_LITERAL(7, 83, 8), // "writeXML"
QT_MOC_LITERAL(8, 92, 13), // "QDomDocument&"
QT_MOC_LITERAL(9, 106, 6) // "theDoc"

    },
    "QgsCoordinateTransform\0invalidTransformInput\0"
    "\0initialise\0readXML\0QDomNode&\0theNode\0"
    "writeXML\0QDomDocument&\0theDoc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCoordinateTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       7,    2,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 5,    6,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 8,    6,    9,

       0        // eod
};

void QgsCoordinateTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCoordinateTransform *_t = static_cast<QgsCoordinateTransform *>(_o);
        switch (_id) {
        case 0: _t->invalidTransformInput(); break;
        case 1: _t->initialise(); break;
        case 2: { bool _r = _t->readXML((*reinterpret_cast< QDomNode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->writeXML((*reinterpret_cast< QDomNode(*)>(_a[1])),(*reinterpret_cast< QDomDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsCoordinateTransform::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCoordinateTransform::invalidTransformInput)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsCoordinateTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCoordinateTransform.data,
      qt_meta_data_QgsCoordinateTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCoordinateTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCoordinateTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCoordinateTransform.stringdata))
        return static_cast<void*>(const_cast< QgsCoordinateTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCoordinateTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QgsCoordinateTransform::invalidTransformInput()const
{
    QMetaObject::activate(const_cast< QgsCoordinateTransform *>(this), &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
