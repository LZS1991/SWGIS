/****************************************************************************
** Meta object code from reading C++ file 'qgsvisibilitypresetcollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsvisibilitypresetcollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvisibilitypresetcollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsVisibilityPresetCollection_t {
    QByteArrayData data[8];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVisibilityPresetCollection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVisibilityPresetCollection_t qt_meta_stringdata_QgsVisibilityPresetCollection = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QgsVisibilityPresetCollection"
QT_MOC_LITERAL(1, 30, 14), // "presetsChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "registryLayersRemoved"
QT_MOC_LITERAL(4, 68, 8), // "layerIDs"
QT_MOC_LITERAL(5, 77, 17), // "layerStyleRenamed"
QT_MOC_LITERAL(6, 95, 7), // "oldName"
QT_MOC_LITERAL(7, 103, 7) // "newName"

    },
    "QgsVisibilityPresetCollection\0"
    "presetsChanged\0\0registryLayersRemoved\0"
    "layerIDs\0layerStyleRenamed\0oldName\0"
    "newName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVisibilityPresetCollection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       5,    2,   33,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void QgsVisibilityPresetCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVisibilityPresetCollection *_t = static_cast<QgsVisibilityPresetCollection *>(_o);
        switch (_id) {
        case 0: _t->presetsChanged(); break;
        case 1: _t->registryLayersRemoved((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->layerStyleRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsVisibilityPresetCollection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVisibilityPresetCollection::presetsChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsVisibilityPresetCollection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsVisibilityPresetCollection.data,
      qt_meta_data_QgsVisibilityPresetCollection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsVisibilityPresetCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVisibilityPresetCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVisibilityPresetCollection.stringdata))
        return static_cast<void*>(const_cast< QgsVisibilityPresetCollection*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsVisibilityPresetCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsVisibilityPresetCollection::presetsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
