/****************************************************************************
** Meta object code from reading C++ file 'qgslegendmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgslegendmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslegendmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLegendModel_t {
    QByteArrayData data[13];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLegendModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLegendModel_t qt_meta_stringdata_QgsLegendModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsLegendModel"
QT_MOC_LITERAL(1, 15, 13), // "layersChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "removeLayer"
QT_MOC_LITERAL(4, 42, 7), // "layerId"
QT_MOC_LITERAL(5, 50, 8), // "addLayer"
QT_MOC_LITERAL(6, 59, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(7, 72, 11), // "theMapLayer"
QT_MOC_LITERAL(8, 84, 16), // "scaleDenominator"
QT_MOC_LITERAL(9, 101, 4), // "rule"
QT_MOC_LITERAL(10, 106, 14), // "QStandardItem*"
QT_MOC_LITERAL(11, 121, 10), // "parentItem"
QT_MOC_LITERAL(12, 132, 11) // "updateLayer"

    },
    "QgsLegendModel\0layersChanged\0\0removeLayer\0"
    "layerId\0addLayer\0QgsMapLayer*\0theMapLayer\0"
    "scaleDenominator\0rule\0QStandardItem*\0"
    "parentItem\0updateLayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLegendModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    4,   53,    2, 0x0a /* Public */,
       5,    3,   62,    2, 0x2a /* Public | MethodCloned */,
       5,    2,   69,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   74,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::QString, 0x80000000 | 10,    7,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Double,    7,    8,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void QgsLegendModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLegendModel *_t = static_cast<QgsLegendModel *>(_o);
        switch (_id) {
        case 0: _t->layersChanged(); break;
        case 1: _t->removeLayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QStandardItem*(*)>(_a[4]))); break;
        case 3: _t->addLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->addLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->addLayer((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 6: _t->updateLayer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsLegendModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLegendModel::layersChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsLegendModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_QgsLegendModel.data,
      qt_meta_data_QgsLegendModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLegendModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLegendModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLegendModel.stringdata))
        return static_cast<void*>(const_cast< QgsLegendModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int QgsLegendModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QgsLegendModel::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
