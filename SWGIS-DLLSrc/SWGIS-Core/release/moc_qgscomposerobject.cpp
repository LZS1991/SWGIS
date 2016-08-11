/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerObject_t {
    QByteArrayData data[10];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerObject_t qt_meta_stringdata_QgsComposerObject = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsComposerObject"
QT_MOC_LITERAL(1, 18, 11), // "itemChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "repaint"
QT_MOC_LITERAL(4, 39, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(5, 66, 19), // "DataDefinedProperty"
QT_MOC_LITERAL(6, 86, 8), // "property"
QT_MOC_LITERAL(7, 95, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(8, 123, 7), // "context"
QT_MOC_LITERAL(9, 131, 29) // "prepareDataDefinedExpressions"

    },
    "QgsComposerObject\0itemChanged\0\0repaint\0"
    "refreshDataDefinedProperty\0"
    "DataDefinedProperty\0property\0"
    "const QgsExpressionContext*\0context\0"
    "prepareDataDefinedExpressions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    2,   46,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   54,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsComposerObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerObject *_t = static_cast<QgsComposerObject *>(_o);
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->repaint(); break;
        case 2: _t->refreshDataDefinedProperty((*reinterpret_cast< const DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 3: _t->refreshDataDefinedProperty((*reinterpret_cast< const DataDefinedProperty(*)>(_a[1]))); break;
        case 4: _t->refreshDataDefinedProperty(); break;
        case 5: _t->prepareDataDefinedExpressions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposerObject::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerObject::itemChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsComposerObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsComposerObject.data,
      qt_meta_data_QgsComposerObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerObject.stringdata))
        return static_cast<void*>(const_cast< QgsComposerObject*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsComposerObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QgsComposerObject::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
