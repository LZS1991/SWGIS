/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerattributetablemodelv2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerattributetablemodelv2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerattributetablemodelv2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2_t {
    QByteArrayData data[1];
    char stringdata[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2_t qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2 = {
    {
QT_MOC_LITERAL(0, 0, 38) // "QgsComposerAttributeTableColu..."

    },
    "QgsComposerAttributeTableColumnModelV2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerAttributeTableColumnModelV2[] = {

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

void QgsComposerAttributeTableColumnModelV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsComposerAttributeTableColumnModelV2::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2.data,
      qt_meta_data_QgsComposerAttributeTableColumnModelV2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerAttributeTableColumnModelV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerAttributeTableColumnModelV2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerAttributeTableColumnModelV2.stringdata))
        return static_cast<void*>(const_cast< QgsComposerAttributeTableColumnModelV2*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int QgsComposerAttributeTableColumnModelV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2_t {
    QByteArrayData data[1];
    char stringdata[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2_t qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2 = {
    {
QT_MOC_LITERAL(0, 0, 39) // "QgsComposerTableSortColumnsPr..."

    },
    "QgsComposerTableSortColumnsProxyModelV2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerTableSortColumnsProxyModelV2[] = {

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

void QgsComposerTableSortColumnsProxyModelV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsComposerTableSortColumnsProxyModelV2::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2.data,
      qt_meta_data_QgsComposerTableSortColumnsProxyModelV2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerTableSortColumnsProxyModelV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerTableSortColumnsProxyModelV2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerTableSortColumnsProxyModelV2.stringdata))
        return static_cast<void*>(const_cast< QgsComposerTableSortColumnsProxyModelV2*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int QgsComposerTableSortColumnsProxyModelV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE