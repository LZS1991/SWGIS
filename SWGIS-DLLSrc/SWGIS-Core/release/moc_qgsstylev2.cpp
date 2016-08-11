/****************************************************************************
** Meta object code from reading C++ file 'qgsstylev2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/symbology-ng/qgsstylev2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsstylev2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsStyleV2_t {
    QByteArrayData data[6];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsStyleV2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsStyleV2_t qt_meta_stringdata_QgsStyleV2 = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsStyleV2"
QT_MOC_LITERAL(1, 11, 11), // "symbolSaved"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 12), // "QgsSymbolV2*"
QT_MOC_LITERAL(5, 42, 6) // "symbol"

    },
    "QgsStyleV2\0symbolSaved\0\0name\0QgsSymbolV2*\0"
    "symbol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsStyleV2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QgsStyleV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsStyleV2 *_t = static_cast<QgsStyleV2 *>(_o);
        switch (_id) {
        case 0: _t->symbolSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QgsSymbolV2*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsStyleV2::*_t)(const QString & , QgsSymbolV2 * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsStyleV2::symbolSaved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsStyleV2::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsStyleV2.data,
      qt_meta_data_QgsStyleV2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsStyleV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsStyleV2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsStyleV2.stringdata))
        return static_cast<void*>(const_cast< QgsStyleV2*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsStyleV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QgsStyleV2::symbolSaved(const QString & _t1, QgsSymbolV2 * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
