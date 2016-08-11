/****************************************************************************
** Meta object code from reading C++ file 'qgsrelationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsrelationmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrelationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsRelationManager_t {
    QByteArrayData data[11];
    char stringdata[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRelationManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRelationManager_t qt_meta_stringdata_QgsRelationManager = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsRelationManager"
QT_MOC_LITERAL(1, 19, 15), // "relationsLoaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "changed"
QT_MOC_LITERAL(4, 44, 11), // "readProject"
QT_MOC_LITERAL(5, 56, 12), // "QDomDocument"
QT_MOC_LITERAL(6, 69, 3), // "doc"
QT_MOC_LITERAL(7, 73, 12), // "writeProject"
QT_MOC_LITERAL(8, 86, 13), // "QDomDocument&"
QT_MOC_LITERAL(9, 100, 13), // "layersRemoved"
QT_MOC_LITERAL(10, 114, 6) // "layers"

    },
    "QgsRelationManager\0relationsLoaded\0\0"
    "changed\0readProject\0QDomDocument\0doc\0"
    "writeProject\0QDomDocument&\0layersRemoved\0"
    "layers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRelationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   41,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::QStringList,   10,

       0        // eod
};

void QgsRelationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRelationManager *_t = static_cast<QgsRelationManager *>(_o);
        switch (_id) {
        case 0: _t->relationsLoaded(); break;
        case 1: _t->changed(); break;
        case 2: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 3: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 4: _t->layersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsRelationManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsRelationManager::relationsLoaded)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsRelationManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsRelationManager::changed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsRelationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsRelationManager.data,
      qt_meta_data_QgsRelationManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsRelationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRelationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRelationManager.stringdata))
        return static_cast<void*>(const_cast< QgsRelationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsRelationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QgsRelationManager::relationsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsRelationManager::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
