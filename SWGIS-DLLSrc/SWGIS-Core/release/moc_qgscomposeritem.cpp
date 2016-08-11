/****************************************************************************
** Meta object code from reading C++ file 'qgscomposeritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposeritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposeritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerItem_t {
    QByteArrayData data[17];
    char stringdata[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerItem_t qt_meta_stringdata_QgsComposerItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsComposerItem"
QT_MOC_LITERAL(1, 16, 19), // "itemRotationChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "newRotation"
QT_MOC_LITERAL(4, 49, 11), // "sizeChanged"
QT_MOC_LITERAL(5, 61, 12), // "frameChanged"
QT_MOC_LITERAL(6, 74, 11), // "lockChanged"
QT_MOC_LITERAL(7, 86, 11), // "setRotation"
QT_MOC_LITERAL(8, 98, 1), // "r"
QT_MOC_LITERAL(9, 100, 15), // "setItemRotation"
QT_MOC_LITERAL(10, 116, 14), // "adjustPosition"
QT_MOC_LITERAL(11, 131, 7), // "repaint"
QT_MOC_LITERAL(12, 139, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(13, 166, 38), // "QgsComposerObject::DataDefine..."
QT_MOC_LITERAL(14, 205, 8), // "property"
QT_MOC_LITERAL(15, 214, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(16, 242, 7) // "context"

    },
    "QgsComposerItem\0itemRotationChanged\0"
    "\0newRotation\0sizeChanged\0frameChanged\0"
    "lockChanged\0setRotation\0r\0setItemRotation\0"
    "adjustPosition\0repaint\0"
    "refreshDataDefinedProperty\0"
    "QgsComposerObject::DataDefinedProperty\0"
    "property\0const QgsExpressionContext*\0"
    "context"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    0,   72,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   75,    2, 0x0a /* Public */,
       9,    2,   78,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    2,   87,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   95,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    8,   10,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void QgsComposerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerItem *_t = static_cast<QgsComposerItem *>(_o);
        switch (_id) {
        case 0: _t->itemRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->frameChanged(); break;
        case 3: _t->lockChanged(); break;
        case 4: _t->setRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setItemRotation((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: _t->setItemRotation((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->repaint(); break;
        case 8: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 9: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 10: _t->refreshDataDefinedProperty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposerItem::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerItem::itemRotationChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsComposerItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerItem::sizeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsComposerItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerItem::frameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsComposerItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerItem::lockChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QgsComposerItem::staticMetaObject = {
    { &QgsComposerObject::staticMetaObject, qt_meta_stringdata_QgsComposerItem.data,
      qt_meta_data_QgsComposerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerItem.stringdata))
        return static_cast<void*>(const_cast< QgsComposerItem*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< QgsComposerItem*>(this));
    return QgsComposerObject::qt_metacast(_clname);
}

int QgsComposerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsComposerItem::itemRotationChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsComposerItem::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsComposerItem::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsComposerItem::lockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
