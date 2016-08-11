/****************************************************************************
** Meta object code from reading C++ file 'qgsmapoverviewcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Gui/qgsmapoverviewcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapoverviewcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapOverviewCanvas_t {
    QByteArrayData data[8];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapOverviewCanvas_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapOverviewCanvas_t qt_meta_stringdata_QgsMapOverviewCanvas = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QgsMapOverviewCanvas"
QT_MOC_LITERAL(1, 21, 14), // "drawExtentRect"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "hasCrsTransformEnabled"
QT_MOC_LITERAL(4, 60, 4), // "flag"
QT_MOC_LITERAL(5, 65, 21), // "destinationSrsChanged"
QT_MOC_LITERAL(6, 87, 20), // "mapRenderingFinished"
QT_MOC_LITERAL(7, 108, 21) // "layerRepaintRequested"

    },
    "QgsMapOverviewCanvas\0drawExtentRect\0"
    "\0hasCrsTransformEnabled\0flag\0"
    "destinationSrsChanged\0mapRenderingFinished\0"
    "layerRepaintRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapOverviewCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapOverviewCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapOverviewCanvas *_t = static_cast<QgsMapOverviewCanvas *>(_o);
        switch (_id) {
        case 0: _t->drawExtentRect(); break;
        case 1: _t->hasCrsTransformEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->destinationSrsChanged(); break;
        case 3: _t->mapRenderingFinished(); break;
        case 4: _t->layerRepaintRequested(); break;
        default: ;
        }
    }
}

const QMetaObject QgsMapOverviewCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsMapOverviewCanvas.data,
      qt_meta_data_QgsMapOverviewCanvas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapOverviewCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapOverviewCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapOverviewCanvas.stringdata))
        return static_cast<void*>(const_cast< QgsMapOverviewCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsMapOverviewCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QgsPanningWidget_t {
    QByteArrayData data[1];
    char stringdata[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsPanningWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsPanningWidget_t qt_meta_stringdata_QgsPanningWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QgsPanningWidget"

    },
    "QgsPanningWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsPanningWidget[] = {

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

void QgsPanningWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QgsPanningWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsPanningWidget.data,
      qt_meta_data_QgsPanningWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsPanningWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsPanningWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsPanningWidget.stringdata))
        return static_cast<void*>(const_cast< QgsPanningWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsPanningWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
