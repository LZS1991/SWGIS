/****************************************************************************
** Meta object code from reading C++ file 'qgsrasterdataprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/raster/qgsrasterdataprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrasterdataprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsImageFetcher_t {
    QByteArrayData data[9];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsImageFetcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsImageFetcher_t qt_meta_stringdata_QgsImageFetcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsImageFetcher"
QT_MOC_LITERAL(1, 16, 6), // "finish"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "legend"
QT_MOC_LITERAL(4, 31, 8), // "progress"
QT_MOC_LITERAL(5, 40, 8), // "received"
QT_MOC_LITERAL(6, 49, 5), // "total"
QT_MOC_LITERAL(7, 55, 5), // "error"
QT_MOC_LITERAL(8, 61, 3) // "msg"

    },
    "QgsImageFetcher\0finish\0\0legend\0progress\0"
    "received\0total\0error\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsImageFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void QgsImageFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsImageFetcher *_t = static_cast<QgsImageFetcher *>(_o);
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsImageFetcher::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsImageFetcher::finish)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsImageFetcher::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsImageFetcher::progress)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsImageFetcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsImageFetcher::error)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QgsImageFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsImageFetcher.data,
      qt_meta_data_QgsImageFetcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsImageFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsImageFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsImageFetcher.stringdata))
        return static_cast<void*>(const_cast< QgsImageFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsImageFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsImageFetcher::finish(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsImageFetcher::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsImageFetcher::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QgsRasterDataProvider_t {
    QByteArrayData data[8];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterDataProvider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterDataProvider_t qt_meta_stringdata_QgsRasterDataProvider = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsRasterDataProvider"
QT_MOC_LITERAL(1, 22, 8), // "progress"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "theType"
QT_MOC_LITERAL(4, 40, 11), // "theProgress"
QT_MOC_LITERAL(5, 52, 10), // "theMessage"
QT_MOC_LITERAL(6, 63, 14), // "progressUpdate"
QT_MOC_LITERAL(7, 78, 13) // "statusChanged"

    },
    "QgsRasterDataProvider\0progress\0\0theType\0"
    "theProgress\0theMessage\0progressUpdate\0"
    "statusChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterDataProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       6,    1,   36,    2, 0x06 /* Public */,
       7,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QgsRasterDataProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRasterDataProvider *_t = static_cast<QgsRasterDataProvider *>(_o);
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->progressUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsRasterDataProvider::*_t)(int , double , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsRasterDataProvider::progress)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsRasterDataProvider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsRasterDataProvider::progressUpdate)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsRasterDataProvider::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsRasterDataProvider::statusChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QgsRasterDataProvider::staticMetaObject = {
    { &QgsDataProvider::staticMetaObject, qt_meta_stringdata_QgsRasterDataProvider.data,
      qt_meta_data_QgsRasterDataProvider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsRasterDataProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterDataProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterDataProvider.stringdata))
        return static_cast<void*>(const_cast< QgsRasterDataProvider*>(this));
    if (!strcmp(_clname, "QgsRasterInterface"))
        return static_cast< QgsRasterInterface*>(const_cast< QgsRasterDataProvider*>(this));
    return QgsDataProvider::qt_metacast(_clname);
}

int QgsRasterDataProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsDataProvider::qt_metacall(_c, _id, _a);
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
void QgsRasterDataProvider::progress(int _t1, double _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsRasterDataProvider::progressUpdate(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsRasterDataProvider::statusChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
