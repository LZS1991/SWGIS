/****************************************************************************
** Meta object code from reading C++ file 'qgsmaprendererjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaprendererjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaprendererjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapRendererJob_t {
    QByteArrayData data[3];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapRendererJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapRendererJob_t qt_meta_stringdata_QgsMapRendererJob = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsMapRendererJob"
QT_MOC_LITERAL(1, 18, 8), // "finished"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "QgsMapRendererJob\0finished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapRendererJob[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QgsMapRendererJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapRendererJob *_t = static_cast<QgsMapRendererJob *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapRendererJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRendererJob::finished)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsMapRendererJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapRendererJob.data,
      qt_meta_data_QgsMapRendererJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapRendererJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapRendererJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapRendererJob.stringdata))
        return static_cast<void*>(const_cast< QgsMapRendererJob*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapRendererJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsMapRendererJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsMapRendererQImageJob_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapRendererQImageJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapRendererQImageJob_t qt_meta_stringdata_QgsMapRendererQImageJob = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QgsMapRendererQImageJob"

    },
    "QgsMapRendererQImageJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapRendererQImageJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsMapRendererQImageJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsMapRendererQImageJob::staticMetaObject = {
    { &QgsMapRendererJob::staticMetaObject, qt_meta_stringdata_QgsMapRendererQImageJob.data,
      qt_meta_data_QgsMapRendererQImageJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapRendererQImageJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapRendererQImageJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapRendererQImageJob.stringdata))
        return static_cast<void*>(const_cast< QgsMapRendererQImageJob*>(this));
    return QgsMapRendererJob::qt_metacast(_clname);
}

int QgsMapRendererQImageJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapRendererJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
