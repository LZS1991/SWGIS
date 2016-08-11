/****************************************************************************
** Meta object code from reading C++ file 'qgscredentials.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgscredentials.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscredentials.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsCredentialsNone_t {
    QByteArrayData data[3];
    char stringdata[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCredentialsNone_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCredentialsNone_t qt_meta_stringdata_QgsCredentialsNone = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsCredentialsNone"
QT_MOC_LITERAL(1, 19, 9), // "destroyed"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "QgsCredentialsNone\0destroyed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCredentialsNone[] = {

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

void QgsCredentialsNone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCredentialsNone *_t = static_cast<QgsCredentialsNone *>(_o);
        switch (_id) {
        case 0: _t->destroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsCredentialsNone::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCredentialsNone::destroyed)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsCredentialsNone::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCredentialsNone.data,
      qt_meta_data_QgsCredentialsNone,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCredentialsNone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCredentialsNone::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCredentialsNone.stringdata))
        return static_cast<void*>(const_cast< QgsCredentialsNone*>(this));
    if (!strcmp(_clname, "QgsCredentials"))
        return static_cast< QgsCredentials*>(const_cast< QgsCredentialsNone*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCredentialsNone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsCredentialsNone::destroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsCredentialsConsole_t {
    QByteArrayData data[3];
    char stringdata[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsCredentialsConsole_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsCredentialsConsole_t qt_meta_stringdata_QgsCredentialsConsole = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsCredentialsConsole"
QT_MOC_LITERAL(1, 22, 9), // "destroyed"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "QgsCredentialsConsole\0destroyed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsCredentialsConsole[] = {

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

void QgsCredentialsConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsCredentialsConsole *_t = static_cast<QgsCredentialsConsole *>(_o);
        switch (_id) {
        case 0: _t->destroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsCredentialsConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsCredentialsConsole::destroyed)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsCredentialsConsole::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsCredentialsConsole.data,
      qt_meta_data_QgsCredentialsConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsCredentialsConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsCredentialsConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsCredentialsConsole.stringdata))
        return static_cast<void*>(const_cast< QgsCredentialsConsole*>(this));
    if (!strcmp(_clname, "QgsCredentials"))
        return static_cast< QgsCredentials*>(const_cast< QgsCredentialsConsole*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsCredentialsConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsCredentialsConsole::destroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
