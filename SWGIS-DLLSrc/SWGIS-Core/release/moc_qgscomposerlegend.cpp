/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerlegend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerlegend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLegendModelV2_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendModelV2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendModelV2_t qt_meta_stringdata_QgsLegendModelV2 = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsLegendModelV2"

    },
    "QgsLegendModelV2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendModelV2[] = {

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

void QgsLegendModelV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsLegendModelV2::staticMetaObject = {
    { &QgsLayerTreeModel::staticMetaObject, qt_meta_stringdata_QgsLegendModelV2.data,
      qt_meta_data_QgsLegendModelV2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLegendModelV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendModelV2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendModelV2.stringdata))
        return static_cast<void*>(const_cast< QgsLegendModelV2*>(this));
    return QgsLayerTreeModel::qt_metacast(_clname);
}

int QgsLegendModelV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsLayerTreeModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsComposerLegend_t {
    QByteArrayData data[13];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerLegend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerLegend_t qt_meta_stringdata_QgsComposerLegend = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsComposerLegend"
QT_MOC_LITERAL(1, 18, 20), // "synchronizeWithModel"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "invalidateCurrentMap"
QT_MOC_LITERAL(4, 61, 17), // "updateFilterByMap"
QT_MOC_LITERAL(5, 79, 29), // "mapLayerStyleOverridesChanged"
QT_MOC_LITERAL(6, 109, 12), // "onAtlasEnded"
QT_MOC_LITERAL(7, 122, 14), // "onAtlasFeature"
QT_MOC_LITERAL(8, 137, 11), // "QgsFeature*"
QT_MOC_LITERAL(9, 149, 25), // "nodeCustomPropertyChanged"
QT_MOC_LITERAL(10, 175, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(11, 193, 4), // "node"
QT_MOC_LITERAL(12, 198, 3) // "key"

    },
    "QgsComposerLegend\0synchronizeWithModel\0"
    "\0invalidateCurrentMap\0updateFilterByMap\0"
    "mapLayerStyleOverridesChanged\0"
    "onAtlasEnded\0onAtlasFeature\0QgsFeature*\0"
    "nodeCustomPropertyChanged\0QgsLayerTreeNode*\0"
    "node\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerLegend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    2,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   11,   12,

       0        // eod
};

void QgsComposerLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerLegend *_t = static_cast<QgsComposerLegend *>(_o);
        switch (_id) {
        case 0: _t->synchronizeWithModel(); break;
        case 1: _t->invalidateCurrentMap(); break;
        case 2: _t->updateFilterByMap(); break;
        case 3: _t->mapLayerStyleOverridesChanged(); break;
        case 4: _t->onAtlasEnded(); break;
        case 5: _t->onAtlasFeature((*reinterpret_cast< QgsFeature*(*)>(_a[1]))); break;
        case 6: _t->nodeCustomPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject QgsComposerLegend::staticMetaObject = {
    { &QgsComposerItem::staticMetaObject, qt_meta_stringdata_QgsComposerLegend.data,
      qt_meta_data_QgsComposerLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerLegend.stringdata))
        return static_cast<void*>(const_cast< QgsComposerLegend*>(this));
    return QgsComposerItem::qt_metacast(_clname);
}

int QgsComposerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
