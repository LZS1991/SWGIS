/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerstylemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaplayerstylemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerstylemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapLayerStyleManager_t {
    QByteArrayData data[10];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerStyleManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerStyleManager_t qt_meta_stringdata_QgsMapLayerStyleManager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QgsMapLayerStyleManager"
QT_MOC_LITERAL(1, 24, 10), // "styleAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "name"
QT_MOC_LITERAL(4, 41, 12), // "styleRemoved"
QT_MOC_LITERAL(5, 54, 12), // "styleRenamed"
QT_MOC_LITERAL(6, 67, 7), // "oldName"
QT_MOC_LITERAL(7, 75, 7), // "newName"
QT_MOC_LITERAL(8, 83, 19), // "currentStyleChanged"
QT_MOC_LITERAL(9, 103, 11) // "currentName"

    },
    "QgsMapLayerStyleManager\0styleAdded\0\0"
    "name\0styleRemoved\0styleRenamed\0oldName\0"
    "newName\0currentStyleChanged\0currentName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerStyleManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    2,   40,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void QgsMapLayerStyleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerStyleManager *_t = static_cast<QgsMapLayerStyleManager *>(_o);
        switch (_id) {
        case 0: _t->styleAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->styleRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->styleRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->currentStyleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapLayerStyleManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerStyleManager::styleAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMapLayerStyleManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerStyleManager::styleRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsMapLayerStyleManager::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerStyleManager::styleRenamed)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsMapLayerStyleManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerStyleManager::currentStyleChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QgsMapLayerStyleManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayerStyleManager.data,
      qt_meta_data_QgsMapLayerStyleManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapLayerStyleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerStyleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerStyleManager.stringdata))
        return static_cast<void*>(const_cast< QgsMapLayerStyleManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayerStyleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsMapLayerStyleManager::styleAdded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayerStyleManager::styleRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayerStyleManager::styleRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsMapLayerStyleManager::currentStyleChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
