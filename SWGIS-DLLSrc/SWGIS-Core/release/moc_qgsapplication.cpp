/****************************************************************************
** Meta object code from reading C++ file 'qgsapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsApplication_t {
    QByteArrayData data[8];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsApplication_t qt_meta_stringdata_QgsApplication = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsApplication"
QT_MOC_LITERAL(1, 15, 9), // "preNotify"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "receiver"
QT_MOC_LITERAL(4, 35, 7), // "QEvent*"
QT_MOC_LITERAL(5, 43, 5), // "event"
QT_MOC_LITERAL(6, 49, 5), // "bool*"
QT_MOC_LITERAL(7, 55, 4) // "done"

    },
    "QgsApplication\0preNotify\0\0receiver\0"
    "QEvent*\0event\0bool*\0done"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsApplication[] = {

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
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4, 0x80000000 | 6,    3,    5,    7,

       0        // eod
};

void QgsApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsApplication *_t = static_cast<QgsApplication *>(_o);
        switch (_id) {
        case 0: _t->preNotify((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsApplication::*_t)(QObject * , QEvent * , bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsApplication::preNotify)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_QgsApplication.data,
      qt_meta_data_QgsApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsApplication.stringdata))
        return static_cast<void*>(const_cast< QgsApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int QgsApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
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
void QgsApplication::preNotify(QObject * _t1, QEvent * _t2, bool * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE