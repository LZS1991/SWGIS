/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayerlegend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaplayerlegend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayerlegend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapLayerLegend_t {
    QByteArrayData data[3];
    char stringdata[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayerLegend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayerLegend_t qt_meta_stringdata_QgsMapLayerLegend = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsMapLayerLegend"
QT_MOC_LITERAL(1, 18, 12), // "itemsChanged"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "QgsMapLayerLegend\0itemsChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayerLegend[] = {

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

void QgsMapLayerLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayerLegend *_t = static_cast<QgsMapLayerLegend *>(_o);
        switch (_id) {
        case 0: _t->itemsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapLayerLegend::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayerLegend::itemsChanged)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsMapLayerLegend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayerLegend.data,
      qt_meta_data_QgsMapLayerLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapLayerLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayerLegend.stringdata))
        return static_cast<void*>(const_cast< QgsMapLayerLegend*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QgsMapLayerLegend::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QgsDefaultVectorLayerLegend_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDefaultVectorLayerLegend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDefaultVectorLayerLegend_t qt_meta_stringdata_QgsDefaultVectorLayerLegend = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QgsDefaultVectorLayerLegend"

    },
    "QgsDefaultVectorLayerLegend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDefaultVectorLayerLegend[] = {

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

void QgsDefaultVectorLayerLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDefaultVectorLayerLegend::staticMetaObject = {
    { &QgsMapLayerLegend::staticMetaObject, qt_meta_stringdata_QgsDefaultVectorLayerLegend.data,
      qt_meta_data_QgsDefaultVectorLayerLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDefaultVectorLayerLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDefaultVectorLayerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDefaultVectorLayerLegend.stringdata))
        return static_cast<void*>(const_cast< QgsDefaultVectorLayerLegend*>(this));
    return QgsMapLayerLegend::qt_metacast(_clname);
}

int QgsDefaultVectorLayerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerLegend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsDefaultRasterLayerLegend_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDefaultRasterLayerLegend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDefaultRasterLayerLegend_t qt_meta_stringdata_QgsDefaultRasterLayerLegend = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QgsDefaultRasterLayerLegend"

    },
    "QgsDefaultRasterLayerLegend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDefaultRasterLayerLegend[] = {

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

void QgsDefaultRasterLayerLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDefaultRasterLayerLegend::staticMetaObject = {
    { &QgsMapLayerLegend::staticMetaObject, qt_meta_stringdata_QgsDefaultRasterLayerLegend.data,
      qt_meta_data_QgsDefaultRasterLayerLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDefaultRasterLayerLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDefaultRasterLayerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDefaultRasterLayerLegend.stringdata))
        return static_cast<void*>(const_cast< QgsDefaultRasterLayerLegend*>(this));
    return QgsMapLayerLegend::qt_metacast(_clname);
}

int QgsDefaultRasterLayerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerLegend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QgsDefaultPluginLayerLegend_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsDefaultPluginLayerLegend_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsDefaultPluginLayerLegend_t qt_meta_stringdata_QgsDefaultPluginLayerLegend = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QgsDefaultPluginLayerLegend"

    },
    "QgsDefaultPluginLayerLegend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsDefaultPluginLayerLegend[] = {

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

void QgsDefaultPluginLayerLegend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsDefaultPluginLayerLegend::staticMetaObject = {
    { &QgsMapLayerLegend::staticMetaObject, qt_meta_stringdata_QgsDefaultPluginLayerLegend.data,
      qt_meta_data_QgsDefaultPluginLayerLegend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsDefaultPluginLayerLegend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsDefaultPluginLayerLegend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsDefaultPluginLayerLegend.stringdata))
        return static_cast<void*>(const_cast< QgsDefaultPluginLayerLegend*>(this));
    return QgsMapLayerLegend::qt_metacast(_clname);
}

int QgsDefaultPluginLayerLegend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayerLegend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
