/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreemodellegendnode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreemodellegendnode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreemodellegendnode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeModelLegendNode_t {
    QByteArrayData data[3];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeModelLegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeModelLegendNode_t qt_meta_stringdata_QgsLayerTreeModelLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QgsLayerTreeModelLegendNode"
QT_MOC_LITERAL(1, 28, 11), // "dataChanged"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "QgsLayerTreeModelLegendNode\0dataChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeModelLegendNode[] = {

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

void QgsLayerTreeModelLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeModelLegendNode *_t = static_cast<QgsLayerTreeModelLegendNode *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsLayerTreeModelLegendNode::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeModelLegendNode::dataChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsLayerTreeModelLegendNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeModelLegendNode.data,
      qt_meta_data_QgsLayerTreeModelLegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeModelLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeModelLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeModelLegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeModelLegendNode*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeModelLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsLayerTreeModelLegendNode::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsSymbolV2LegendNode_t {
    QByteArrayData data[4];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSymbolV2LegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSymbolV2LegendNode_t qt_meta_stringdata_QgsSymbolV2LegendNode = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsSymbolV2LegendNode"
QT_MOC_LITERAL(1, 22, 13), // "checkAllItems"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15) // "uncheckAllItems"

    },
    "QgsSymbolV2LegendNode\0checkAllItems\0"
    "\0uncheckAllItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSymbolV2LegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsSymbolV2LegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsSymbolV2LegendNode *_t = static_cast<QgsSymbolV2LegendNode *>(_o);
        switch (_id) {
        case 0: _t->checkAllItems(); break;
        case 1: _t->uncheckAllItems(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsSymbolV2LegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsSymbolV2LegendNode.data,
      qt_meta_data_QgsSymbolV2LegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsSymbolV2LegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSymbolV2LegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSymbolV2LegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsSymbolV2LegendNode*>(this));
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsSymbolV2LegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsSimpleLegendNode_t {
    QByteArrayData data[1];
    char stringdata[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsSimpleLegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsSimpleLegendNode_t qt_meta_stringdata_QgsSimpleLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QgsSimpleLegendNode"

    },
    "QgsSimpleLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsSimpleLegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsSimpleLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsSimpleLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsSimpleLegendNode.data,
      qt_meta_data_QgsSimpleLegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsSimpleLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsSimpleLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsSimpleLegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsSimpleLegendNode*>(this));
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsSimpleLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsImageLegendNode_t {
    QByteArrayData data[1];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsImageLegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsImageLegendNode_t qt_meta_stringdata_QgsImageLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QgsImageLegendNode"

    },
    "QgsImageLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsImageLegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsImageLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsImageLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsImageLegendNode.data,
      qt_meta_data_QgsImageLegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsImageLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsImageLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsImageLegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsImageLegendNode*>(this));
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsImageLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsRasterSymbolLegendNode_t {
    QByteArrayData data[1];
    char stringdata[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRasterSymbolLegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRasterSymbolLegendNode_t qt_meta_stringdata_QgsRasterSymbolLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QgsRasterSymbolLegendNode"

    },
    "QgsRasterSymbolLegendNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRasterSymbolLegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QgsRasterSymbolLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsRasterSymbolLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsRasterSymbolLegendNode.data,
      qt_meta_data_QgsRasterSymbolLegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsRasterSymbolLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRasterSymbolLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRasterSymbolLegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsRasterSymbolLegendNode*>(this));
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsRasterSymbolLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsWMSLegendNode_t {
    QByteArrayData data[5];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsWMSLegendNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsWMSLegendNode_t qt_meta_stringdata_QgsWMSLegendNode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsWMSLegendNode"
QT_MOC_LITERAL(1, 17, 24), // "getLegendGraphicFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 23), // "getLegendGraphicErrored"
QT_MOC_LITERAL(4, 67, 24) // "getLegendGraphicProgress"

    },
    "QgsWMSLegendNode\0getLegendGraphicFinished\0"
    "\0getLegendGraphicErrored\0"
    "getLegendGraphicProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsWMSLegendNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    2,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

void QgsWMSLegendNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsWMSLegendNode *_t = static_cast<QgsWMSLegendNode *>(_o);
        switch (_id) {
        case 0: _t->getLegendGraphicFinished((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->getLegendGraphicErrored((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->getLegendGraphicProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsWMSLegendNode::staticMetaObject = {
    { &QgsLayerTreeModelLegendNode::staticMetaObject, qt_meta_stringdata_QgsWMSLegendNode.data,
      qt_meta_data_QgsWMSLegendNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsWMSLegendNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsWMSLegendNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsWMSLegendNode.stringdata))
        return static_cast<void*>(const_cast< QgsWMSLegendNode*>(this));
    return QgsLayerTreeModelLegendNode::qt_metacast(_clname);
}

int QgsWMSLegendNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModelLegendNode::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
