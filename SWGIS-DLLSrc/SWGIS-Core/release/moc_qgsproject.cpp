/****************************************************************************
** Meta object code from reading C++ file 'qgsproject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsproject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsproject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsProject_t {
    QByteArrayData data[22];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProject_t qt_meta_stringdata_QgsProject = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QgsProject"
QT_MOC_LITERAL(1, 11, 11), // "readProject"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "QDomDocument"
QT_MOC_LITERAL(4, 37, 12), // "writeProject"
QT_MOC_LITERAL(5, 50, 13), // "QDomDocument&"
QT_MOC_LITERAL(6, 64, 12), // "readMapLayer"
QT_MOC_LITERAL(7, 77, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(8, 90, 8), // "mapLayer"
QT_MOC_LITERAL(9, 99, 11), // "QDomElement"
QT_MOC_LITERAL(10, 111, 9), // "layerNode"
QT_MOC_LITERAL(11, 121, 13), // "writeMapLayer"
QT_MOC_LITERAL(12, 135, 12), // "QDomElement&"
QT_MOC_LITERAL(13, 148, 9), // "layerElem"
QT_MOC_LITERAL(14, 158, 3), // "doc"
QT_MOC_LITERAL(15, 162, 12), // "projectSaved"
QT_MOC_LITERAL(16, 175, 24), // "oldProjectVersionWarning"
QT_MOC_LITERAL(17, 200, 11), // "layerLoaded"
QT_MOC_LITERAL(18, 212, 1), // "i"
QT_MOC_LITERAL(19, 214, 1), // "n"
QT_MOC_LITERAL(20, 216, 12), // "loadingLayer"
QT_MOC_LITERAL(21, 229, 19) // "snapSettingsChanged"

    },
    "QgsProject\0readProject\0\0QDomDocument\0"
    "writeProject\0QDomDocument&\0readMapLayer\0"
    "QgsMapLayer*\0mapLayer\0QDomElement\0"
    "layerNode\0writeMapLayer\0QDomElement&\0"
    "layerElem\0doc\0projectSaved\0"
    "oldProjectVersionWarning\0layerLoaded\0"
    "i\0n\0loadingLayer\0snapSettingsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    2,   65,    2, 0x06 /* Public */,
      11,    3,   70,    2, 0x06 /* Public */,
      15,    0,   77,    2, 0x06 /* Public */,
      16,    1,   78,    2, 0x06 /* Public */,
      17,    2,   81,    2, 0x06 /* Public */,
      20,    1,   86,    2, 0x06 /* Public */,
      21,    0,   89,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 12, 0x80000000 | 5,    8,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void QgsProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProject *_t = static_cast<QgsProject *>(_o);
        switch (_id) {
        case 0: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 1: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 2: _t->readMapLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QDomElement(*)>(_a[2]))); break;
        case 3: _t->writeMapLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2])),(*reinterpret_cast< QDomDocument(*)>(_a[3]))); break;
        case 4: _t->projectSaved(); break;
        case 5: _t->oldProjectVersionWarning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->layerLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->loadingLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->snapSettingsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsProject::*_t)(const QDomDocument & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::readProject)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsProject::*_t)(QDomDocument & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::writeProject)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * , const QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::readMapLayer)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsProject::*_t)(QgsMapLayer * , QDomElement & , QDomDocument & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::writeMapLayer)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::projectSaved)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::oldProjectVersionWarning)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsProject::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::layerLoaded)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsProject::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::loadingLayer)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsProject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProject::snapSettingsChanged)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject QgsProject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsProject.data,
      qt_meta_data_QgsProject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProject.stringdata))
        return static_cast<void*>(const_cast< QgsProject*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QgsProject::readProject(const QDomDocument & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProject::writeProject(QDomDocument & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsProject::readMapLayer(QgsMapLayer * _t1, const QDomElement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsProject::writeMapLayer(QgsMapLayer * _t1, QDomElement & _t2, QDomDocument & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsProject::projectSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsProject::oldProjectVersionWarning(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsProject::layerLoaded(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsProject::loadingLayer(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsProject::snapSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
