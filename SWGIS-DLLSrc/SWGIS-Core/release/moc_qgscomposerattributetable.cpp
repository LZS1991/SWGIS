/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerattributetable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerattributetable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerattributetable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerAttributeTable_t {
    QByteArrayData data[4];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerAttributeTable_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerAttributeTable_t qt_meta_stringdata_QgsComposerAttributeTable = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QgsComposerAttributeTable"
QT_MOC_LITERAL(1, 26, 11), // "removeLayer"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7) // "layerId"

    },
    "QgsComposerAttributeTable\0removeLayer\0"
    "\0layerId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerAttributeTable[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QgsComposerAttributeTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerAttributeTable *_t = static_cast<QgsComposerAttributeTable *>(_o);
        switch (_id) {
        case 0: _t->removeLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsComposerAttributeTable::staticMetaObject = {
    { &QgsComposerTable::staticMetaObject, qt_meta_stringdata_QgsComposerAttributeTable.data,
      qt_meta_data_QgsComposerAttributeTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerAttributeTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerAttributeTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerAttributeTable.stringdata))
        return static_cast<void*>(const_cast< QgsComposerAttributeTable*>(this));
    return QgsComposerTable::qt_metacast(_clname);
}

int QgsComposerAttributeTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerTable::qt_metacall(_c, _id, _a);
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
