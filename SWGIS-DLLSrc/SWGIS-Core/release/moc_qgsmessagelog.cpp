/****************************************************************************
** Meta object code from reading C++ file 'qgsmessagelog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmessagelog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmessagelog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMessageLog_t {
    QByteArrayData data[8];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMessageLog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMessageLog_t qt_meta_stringdata_QgsMessageLog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsMessageLog"
QT_MOC_LITERAL(1, 14, 15), // "messageReceived"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "message"
QT_MOC_LITERAL(4, 39, 3), // "tag"
QT_MOC_LITERAL(5, 43, 27), // "QgsMessageLog::MessageLevel"
QT_MOC_LITERAL(6, 71, 5), // "level"
QT_MOC_LITERAL(7, 77, 8) // "received"

    },
    "QgsMessageLog\0messageReceived\0\0message\0"
    "tag\0QgsMessageLog::MessageLevel\0level\0"
    "received"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMessageLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       1,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QgsMessageLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMessageLog *_t = static_cast<QgsMessageLog *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsMessageLog::MessageLevel(*)>(_a[3]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMessageLog::*_t)(const QString & , const QString & , QgsMessageLog::MessageLevel );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMessageLog::messageReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMessageLog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMessageLog::messageReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsMessageLog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMessageLog.data,
      qt_meta_data_QgsMessageLog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMessageLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMessageLog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageLog.stringdata))
        return static_cast<void*>(const_cast< QgsMessageLog*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMessageLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsMessageLog::messageReceived(const QString & _t1, const QString & _t2, QgsMessageLog::MessageLevel _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMessageLog::messageReceived(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QgsMessageLogConsole_t {
    QByteArrayData data[7];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMessageLogConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMessageLogConsole_t qt_meta_stringdata_QgsMessageLogConsole = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsMessageLogConsole"
QT_MOC_LITERAL(1, 21, 10), // "logMessage"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "message"
QT_MOC_LITERAL(4, 41, 3), // "tag"
QT_MOC_LITERAL(5, 45, 27), // "QgsMessageLog::MessageLevel"
QT_MOC_LITERAL(6, 73, 5) // "level"

    },
    "QgsMessageLogConsole\0logMessage\0\0"
    "message\0tag\0QgsMessageLog::MessageLevel\0"
    "level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMessageLogConsole[] = {

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
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,

       0        // eod
};

void QgsMessageLogConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMessageLogConsole *_t = static_cast<QgsMessageLogConsole *>(_o);
        switch (_id) {
        case 0: _t->logMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsMessageLog::MessageLevel(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsMessageLogConsole::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMessageLogConsole.data,
      qt_meta_data_QgsMessageLogConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMessageLogConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMessageLogConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageLogConsole.stringdata))
        return static_cast<void*>(const_cast< QgsMessageLogConsole*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMessageLogConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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