/****************************************************************************
** Meta object code from reading C++ file 'qgswmsprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-WMSProvider/qgswmsprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgswmsprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsWmsLegendDownloadHandler_t {
    QByteArrayData data[7];
    char stringdata[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsLegendDownloadHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsLegendDownloadHandler_t qt_meta_stringdata_QgsWmsLegendDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsWmsLegendDownloadHandler"
QT_MOC_LITERAL(1, 28, 7), // "errored"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 65, 4), // "code"
QT_MOC_LITERAL(5, 70, 8), // "finished"
QT_MOC_LITERAL(6, 79, 10) // "progressed"

    },
    "QgsWmsLegendDownloadHandler\0errored\0"
    "\0QNetworkReply::NetworkError\0code\0"
    "finished\0progressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsLegendDownloadHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    2,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWmsLegendDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsLegendDownloadHandler *_t = static_cast<QgsWmsLegendDownloadHandler *>(_o);
        switch (_id) {
        case 0: _t->errored((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->progressed((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsWmsLegendDownloadHandler::staticMetaObject = {
    { &QgsImageFetcher::staticMetaObject, qt_meta_stringdata_QgsWmsLegendDownloadHandler.data,
      qt_meta_data_QgsWmsLegendDownloadHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWmsLegendDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsLegendDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsLegendDownloadHandler.stringdata))
        return static_cast<void*>(const_cast< QgsWmsLegendDownloadHandler*>(this));
    return QgsImageFetcher::qt_metacast(_clname);
}

int QgsWmsLegendDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsImageFetcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QgsCachedImageFetcher_t {
    QByteArrayData data[3];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCachedImageFetcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCachedImageFetcher_t qt_meta_stringdata_QgsCachedImageFetcher = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsCachedImageFetcher"
QT_MOC_LITERAL(1, 22, 4), // "send"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "QgsCachedImageFetcher\0send\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCachedImageFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsCachedImageFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCachedImageFetcher *_t = static_cast<QgsCachedImageFetcher *>(_o);
        switch (_id) {
        case 0: _t->send(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsCachedImageFetcher::staticMetaObject = {
    { &QgsImageFetcher::staticMetaObject, qt_meta_stringdata_QgsCachedImageFetcher.data,
      qt_meta_data_QgsCachedImageFetcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCachedImageFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCachedImageFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCachedImageFetcher.stringdata))
        return static_cast<void*>(const_cast< QgsCachedImageFetcher*>(this));
    return QgsImageFetcher::qt_metacast(_clname);
}

int QgsCachedImageFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsImageFetcher::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsWmsProvider_t {
    QByteArrayData data[11];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsProvider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsProvider_t qt_meta_stringdata_QgsWmsProvider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsWmsProvider"
QT_MOC_LITERAL(1, 15, 15), // "progressChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "theProgress"
QT_MOC_LITERAL(4, 44, 13), // "theTotalSteps"
QT_MOC_LITERAL(5, 58, 11), // "dataChanged"
QT_MOC_LITERAL(6, 70, 21), // "identifyReplyFinished"
QT_MOC_LITERAL(7, 92, 29), // "getLegendGraphicReplyFinished"
QT_MOC_LITERAL(8, 122, 28), // "getLegendGraphicReplyErrored"
QT_MOC_LITERAL(9, 151, 7), // "message"
QT_MOC_LITERAL(10, 159, 29) // "getLegendGraphicReplyProgress"

    },
    "QgsWmsProvider\0progressChanged\0\0"
    "theProgress\0theTotalSteps\0dataChanged\0"
    "identifyReplyFinished\0"
    "getLegendGraphicReplyFinished\0"
    "getLegendGraphicReplyErrored\0message\0"
    "getLegendGraphicReplyProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    1,   54,    2, 0x08 /* Private */,
      10,    2,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWmsProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsProvider *_t = static_cast<QgsWmsProvider *>(_o);
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->identifyReplyFinished(); break;
        case 3: _t->getLegendGraphicReplyFinished((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: _t->getLegendGraphicReplyErrored((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->getLegendGraphicReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsWmsProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsWmsProvider::progressChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsWmsProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsWmsProvider::dataChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsWmsProvider::staticMetaObject = {
    { &QgsRasterDataProvider::staticMetaObject, qt_meta_stringdata_QgsWmsProvider.data,
      qt_meta_data_QgsWmsProvider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWmsProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsProvider.stringdata))
        return static_cast<void*>(const_cast< QgsWmsProvider*>(this));
    return QgsRasterDataProvider::qt_metacast(_clname);
}

int QgsWmsProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterDataProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QgsWmsProvider::progressChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsWmsProvider::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsWmsImageDownloadHandler_t {
    QByteArrayData data[6];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsImageDownloadHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsImageDownloadHandler_t qt_meta_stringdata_QgsWmsImageDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QgsWmsImageDownloadHandler"
QT_MOC_LITERAL(1, 27, 18), // "cacheReplyFinished"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "cacheReplyProgress"
QT_MOC_LITERAL(4, 66, 13), // "bytesReceived"
QT_MOC_LITERAL(5, 80, 10) // "bytesTotal"

    },
    "QgsWmsImageDownloadHandler\0"
    "cacheReplyFinished\0\0cacheReplyProgress\0"
    "bytesReceived\0bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsImageDownloadHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    2,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void QgsWmsImageDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsImageDownloadHandler *_t = static_cast<QgsWmsImageDownloadHandler *>(_o);
        switch (_id) {
        case 0: _t->cacheReplyFinished(); break;
        case 1: _t->cacheReplyProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsWmsImageDownloadHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWmsImageDownloadHandler.data,
      qt_meta_data_QgsWmsImageDownloadHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWmsImageDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsImageDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsImageDownloadHandler.stringdata))
        return static_cast<void*>(const_cast< QgsWmsImageDownloadHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsWmsImageDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t {
    QByteArrayData data[3];
    char stringdata[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWmsTiledImageDownloadHandler_t qt_meta_stringdata_QgsWmsTiledImageDownloadHandler = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QgsWmsTiledImageDownloadHandler"
QT_MOC_LITERAL(1, 32, 17), // "tileReplyFinished"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "QgsWmsTiledImageDownloadHandler\0"
    "tileReplyFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWmsTiledImageDownloadHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QgsWmsTiledImageDownloadHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWmsTiledImageDownloadHandler *_t = static_cast<QgsWmsTiledImageDownloadHandler *>(_o);
        switch (_id) {
        case 0: _t->tileReplyFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsWmsTiledImageDownloadHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsWmsTiledImageDownloadHandler.data,
      qt_meta_data_QgsWmsTiledImageDownloadHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWmsTiledImageDownloadHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWmsTiledImageDownloadHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWmsTiledImageDownloadHandler.stringdata))
        return static_cast<void*>(const_cast< QgsWmsTiledImageDownloadHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsWmsTiledImageDownloadHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
