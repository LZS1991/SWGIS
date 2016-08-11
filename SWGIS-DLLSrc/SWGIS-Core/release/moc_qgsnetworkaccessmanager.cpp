/****************************************************************************
** Meta object code from reading C++ file 'qgsnetworkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsnetworkaccessmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsnetworkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsNetworkAccessManager_t {
    QByteArrayData data[16];
    char stringdata[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsNetworkAccessManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsNetworkAccessManager_t qt_meta_stringdata_QgsNetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsNetworkAccessManager"
QT_MOC_LITERAL(1, 24, 23), // "requestAboutToBeCreated"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 32), // "QNetworkAccessManager::Operation"
QT_MOC_LITERAL(4, 82, 15), // "QNetworkRequest"
QT_MOC_LITERAL(5, 98, 10), // "QIODevice*"
QT_MOC_LITERAL(6, 109, 14), // "requestCreated"
QT_MOC_LITERAL(7, 124, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 139, 15), // "requestTimedOut"
QT_MOC_LITERAL(9, 155, 11), // "requestSent"
QT_MOC_LITERAL(10, 167, 5), // "reply"
QT_MOC_LITERAL(11, 173, 6), // "sender"
QT_MOC_LITERAL(12, 180, 7), // "sendGet"
QT_MOC_LITERAL(13, 188, 7), // "request"
QT_MOC_LITERAL(14, 196, 11), // "deleteReply"
QT_MOC_LITERAL(15, 208, 12) // "abortRequest"

    },
    "QgsNetworkAccessManager\0requestAboutToBeCreated\0"
    "\0QNetworkAccessManager::Operation\0"
    "QNetworkRequest\0QIODevice*\0requestCreated\0"
    "QNetworkReply*\0requestTimedOut\0"
    "requestSent\0reply\0sender\0sendGet\0"
    "request\0deleteReply\0abortRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsNetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,
       9,    2,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   67,    2, 0x0a /* Public */,
      14,    1,   70,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QObjectStar,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,   13,
    QMetaType::Void, 0x80000000 | 7,   10,
    QMetaType::Void,

       0        // eod
};

void QgsNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsNetworkAccessManager *_t = static_cast<QgsNetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->requestAboutToBeCreated((*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3]))); break;
        case 1: _t->requestCreated((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->requestTimedOut((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->requestSent((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 4: _t->sendGet((*reinterpret_cast< const QNetworkRequest(*)>(_a[1]))); break;
        case 5: _t->deleteReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->abortRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsNetworkAccessManager::*_t)(QNetworkAccessManager::Operation , const QNetworkRequest & , QIODevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsNetworkAccessManager::requestAboutToBeCreated)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsNetworkAccessManager::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsNetworkAccessManager::requestCreated)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsNetworkAccessManager::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsNetworkAccessManager::requestTimedOut)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsNetworkAccessManager::*_t)(QNetworkReply * , QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsNetworkAccessManager::requestSent)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QgsNetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_QgsNetworkAccessManager.data,
      qt_meta_data_QgsNetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsNetworkAccessManager.stringdata))
        return static_cast<void*>(const_cast< QgsNetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int QgsNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsNetworkAccessManager::requestAboutToBeCreated(QNetworkAccessManager::Operation _t1, const QNetworkRequest & _t2, QIODevice * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsNetworkAccessManager::requestCreated(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsNetworkAccessManager::requestTimedOut(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsNetworkAccessManager::requestSent(QNetworkReply * _t1, QObject * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
