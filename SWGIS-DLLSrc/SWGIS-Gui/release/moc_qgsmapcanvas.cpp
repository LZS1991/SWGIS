/****************************************************************************
** Meta object code from reading C++ file 'qgsmapcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Gui/qgsmapcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmapcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapCanvas_t {
    QByteArrayData data[66];
    char stringdata[886];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCanvas_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCanvas_t qt_meta_stringdata_QgsMapCanvas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QgsMapCanvas"
QT_MOC_LITERAL(1, 13, 13), // "xyCoordinates"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "QgsPoint"
QT_MOC_LITERAL(4, 37, 1), // "p"
QT_MOC_LITERAL(5, 39, 12), // "scaleChanged"
QT_MOC_LITERAL(6, 52, 14), // "extentsChanged"
QT_MOC_LITERAL(7, 67, 15), // "rotationChanged"
QT_MOC_LITERAL(8, 83, 14), // "renderComplete"
QT_MOC_LITERAL(9, 98, 9), // "QPainter*"
QT_MOC_LITERAL(10, 108, 18), // "mapCanvasRefreshed"
QT_MOC_LITERAL(11, 127, 14), // "renderStarting"
QT_MOC_LITERAL(12, 142, 13), // "layersChanged"
QT_MOC_LITERAL(13, 156, 10), // "keyPressed"
QT_MOC_LITERAL(14, 167, 10), // "QKeyEvent*"
QT_MOC_LITERAL(15, 178, 1), // "e"
QT_MOC_LITERAL(16, 180, 11), // "keyReleased"
QT_MOC_LITERAL(17, 192, 10), // "mapToolSet"
QT_MOC_LITERAL(18, 203, 11), // "QgsMapTool*"
QT_MOC_LITERAL(19, 215, 4), // "tool"
QT_MOC_LITERAL(20, 220, 7), // "newTool"
QT_MOC_LITERAL(21, 228, 7), // "oldTool"
QT_MOC_LITERAL(22, 236, 16), // "selectionChanged"
QT_MOC_LITERAL(23, 253, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(24, 266, 5), // "layer"
QT_MOC_LITERAL(25, 272, 21), // "zoomLastStatusChanged"
QT_MOC_LITERAL(26, 294, 21), // "zoomNextStatusChanged"
QT_MOC_LITERAL(27, 316, 29), // "hasCrsTransformEnabledChanged"
QT_MOC_LITERAL(28, 346, 4), // "flag"
QT_MOC_LITERAL(29, 351, 21), // "destinationCrsChanged"
QT_MOC_LITERAL(30, 373, 15), // "mapUnitsChanged"
QT_MOC_LITERAL(31, 389, 19), // "currentLayerChanged"
QT_MOC_LITERAL(32, 409, 26), // "layerStyleOverridesChanged"
QT_MOC_LITERAL(33, 436, 14), // "messageEmitted"
QT_MOC_LITERAL(34, 451, 5), // "title"
QT_MOC_LITERAL(35, 457, 7), // "message"
QT_MOC_LITERAL(36, 465, 27), // "QgsMessageBar::MessageLevel"
QT_MOC_LITERAL(37, 493, 7), // "refresh"
QT_MOC_LITERAL(38, 501, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(39, 522, 11), // "saveAsImage"
QT_MOC_LITERAL(40, 534, 11), // "theFileName"
QT_MOC_LITERAL(41, 546, 8), // "QPixmap*"
QT_MOC_LITERAL(42, 555, 7), // "QPixmap"
QT_MOC_LITERAL(43, 563, 16), // "layerStateChange"
QT_MOC_LITERAL(44, 580, 14), // "layerCrsChange"
QT_MOC_LITERAL(45, 595, 13), // "setRenderFlag"
QT_MOC_LITERAL(46, 609, 7), // "theFlag"
QT_MOC_LITERAL(47, 617, 10), // "renderFlag"
QT_MOC_LITERAL(48, 628, 22), // "hasCrsTransformEnabled"
QT_MOC_LITERAL(49, 651, 13), // "stopRendering"
QT_MOC_LITERAL(50, 665, 11), // "readProject"
QT_MOC_LITERAL(51, 677, 12), // "QDomDocument"
QT_MOC_LITERAL(52, 690, 12), // "writeProject"
QT_MOC_LITERAL(53, 703, 13), // "QDomDocument&"
QT_MOC_LITERAL(54, 717, 21), // "getDatumTransformInfo"
QT_MOC_LITERAL(55, 739, 18), // "const QgsMapLayer*"
QT_MOC_LITERAL(56, 758, 2), // "ml"
QT_MOC_LITERAL(57, 761, 9), // "srcAuthId"
QT_MOC_LITERAL(58, 771, 10), // "destAuthId"
QT_MOC_LITERAL(59, 782, 15), // "rotationEnabled"
QT_MOC_LITERAL(60, 798, 14), // "enableRotation"
QT_MOC_LITERAL(61, 813, 7), // "enabled"
QT_MOC_LITERAL(62, 821, 16), // "mapToolDestroyed"
QT_MOC_LITERAL(63, 838, 19), // "rendererJobFinished"
QT_MOC_LITERAL(64, 858, 16), // "mapUpdateTimeout"
QT_MOC_LITERAL(65, 875, 10) // "refreshMap"

    },
    "QgsMapCanvas\0xyCoordinates\0\0QgsPoint\0"
    "p\0scaleChanged\0extentsChanged\0"
    "rotationChanged\0renderComplete\0QPainter*\0"
    "mapCanvasRefreshed\0renderStarting\0"
    "layersChanged\0keyPressed\0QKeyEvent*\0"
    "e\0keyReleased\0mapToolSet\0QgsMapTool*\0"
    "tool\0newTool\0oldTool\0selectionChanged\0"
    "QgsMapLayer*\0layer\0zoomLastStatusChanged\0"
    "zoomNextStatusChanged\0"
    "hasCrsTransformEnabledChanged\0flag\0"
    "destinationCrsChanged\0mapUnitsChanged\0"
    "currentLayerChanged\0layerStyleOverridesChanged\0"
    "messageEmitted\0title\0message\0"
    "QgsMessageBar::MessageLevel\0refresh\0"
    "selectionChangedSlot\0saveAsImage\0"
    "theFileName\0QPixmap*\0QPixmap\0"
    "layerStateChange\0layerCrsChange\0"
    "setRenderFlag\0theFlag\0renderFlag\0"
    "hasCrsTransformEnabled\0stopRendering\0"
    "readProject\0QDomDocument\0writeProject\0"
    "QDomDocument&\0getDatumTransformInfo\0"
    "const QgsMapLayer*\0ml\0srcAuthId\0"
    "destAuthId\0rotationEnabled\0enableRotation\0"
    "enabled\0mapToolDestroyed\0rendererJobFinished\0"
    "mapUpdateTimeout\0refreshMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       5,    1,  227,    2, 0x06 /* Public */,
       6,    0,  230,    2, 0x06 /* Public */,
       7,    1,  231,    2, 0x06 /* Public */,
       8,    1,  234,    2, 0x06 /* Public */,
      10,    0,  237,    2, 0x06 /* Public */,
      11,    0,  238,    2, 0x06 /* Public */,
      12,    0,  239,    2, 0x06 /* Public */,
      13,    1,  240,    2, 0x06 /* Public */,
      16,    1,  243,    2, 0x06 /* Public */,
      17,    1,  246,    2, 0x06 /* Public */,
      17,    2,  249,    2, 0x06 /* Public */,
      22,    1,  254,    2, 0x06 /* Public */,
      25,    1,  257,    2, 0x06 /* Public */,
      26,    1,  260,    2, 0x06 /* Public */,
      27,    1,  263,    2, 0x06 /* Public */,
      29,    0,  266,    2, 0x06 /* Public */,
      30,    0,  267,    2, 0x06 /* Public */,
      31,    1,  268,    2, 0x06 /* Public */,
      32,    0,  271,    2, 0x06 /* Public */,
      33,    3,  272,    2, 0x06 /* Public */,
      33,    2,  279,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      37,    0,  284,    2, 0x0a /* Public */,
      38,    0,  285,    2, 0x0a /* Public */,
      39,    3,  286,    2, 0x0a /* Public */,
      39,    2,  293,    2, 0x2a /* Public | MethodCloned */,
      39,    1,  298,    2, 0x2a /* Public | MethodCloned */,
      43,    0,  301,    2, 0x0a /* Public */,
      44,    0,  302,    2, 0x0a /* Public */,
      45,    1,  303,    2, 0x0a /* Public */,
      47,    0,  306,    2, 0x0a /* Public */,
      48,    0,  307,    2, 0x0a /* Public */,
      49,    0,  308,    2, 0x0a /* Public */,
      50,    1,  309,    2, 0x0a /* Public */,
      52,    1,  312,    2, 0x0a /* Public */,
      54,    3,  315,    2, 0x0a /* Public */,
      59,    0,  322,    2, 0x0a /* Public */,
      60,    1,  323,    2, 0x0a /* Public */,
      62,    0,  326,    2, 0x08 /* Private */,
      63,    0,  327,    2, 0x08 /* Private */,
      64,    0,  328,    2, 0x08 /* Private */,
      65,    0,  329,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 36,   34,   35,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   34,   35,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 41, QMetaType::QString,   40,   42,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 41,   40,   42,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 53,    2,
    QMetaType::Void, 0x80000000 | 55, QMetaType::QString, QMetaType::QString,   56,   57,   58,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCanvas *_t = static_cast<QgsMapCanvas *>(_o);
        switch (_id) {
        case 0: _t->xyCoordinates((*reinterpret_cast< const QgsPoint(*)>(_a[1]))); break;
        case 1: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->extentsChanged(); break;
        case 3: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->renderComplete((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 5: _t->mapCanvasRefreshed(); break;
        case 6: _t->renderStarting(); break;
        case 7: _t->layersChanged(); break;
        case 8: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 9: _t->keyReleased((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: _t->mapToolSet((*reinterpret_cast< QgsMapTool*(*)>(_a[1]))); break;
        case 11: _t->mapToolSet((*reinterpret_cast< QgsMapTool*(*)>(_a[1])),(*reinterpret_cast< QgsMapTool*(*)>(_a[2]))); break;
        case 12: _t->selectionChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 13: _t->zoomLastStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->zoomNextStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->hasCrsTransformEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->destinationCrsChanged(); break;
        case 17: _t->mapUnitsChanged(); break;
        case 18: _t->currentLayerChanged((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 19: _t->layerStyleOverridesChanged(); break;
        case 20: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QgsMessageBar::MessageLevel(*)>(_a[3]))); break;
        case 21: _t->messageEmitted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->refresh(); break;
        case 23: _t->selectionChangedSlot(); break;
        case 24: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 25: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QPixmap*(*)>(_a[2]))); break;
        case 26: _t->saveAsImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->layerStateChange(); break;
        case 28: _t->layerCrsChange(); break;
        case 29: _t->setRenderFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: { bool _r = _t->renderFlag();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->hasCrsTransformEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: _t->stopRendering(); break;
        case 33: _t->readProject((*reinterpret_cast< const QDomDocument(*)>(_a[1]))); break;
        case 34: _t->writeProject((*reinterpret_cast< QDomDocument(*)>(_a[1]))); break;
        case 35: _t->getDatumTransformInfo((*reinterpret_cast< const QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 36: { bool _r = _t->rotationEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: _t->enableRotation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->mapToolDestroyed(); break;
        case 39: _t->rendererJobFinished(); break;
        case 40: _t->mapUpdateTimeout(); break;
        case 41: _t->refreshMap(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapCanvas::*_t)(const QgsPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::xyCoordinates)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::scaleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::extentsChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::rotationChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QPainter * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::renderComplete)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::mapCanvasRefreshed)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::renderStarting)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::layersChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::keyPressed)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::keyReleased)) {
                *result = 9;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapTool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::mapToolSet)) {
                *result = 10;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapTool * , QgsMapTool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::mapToolSet)) {
                *result = 11;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::selectionChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::zoomLastStatusChanged)) {
                *result = 13;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::zoomNextStatusChanged)) {
                *result = 14;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::hasCrsTransformEnabledChanged)) {
                *result = 15;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::destinationCrsChanged)) {
                *result = 16;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::mapUnitsChanged)) {
                *result = 17;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::currentLayerChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::layerStyleOverridesChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (QgsMapCanvas::*_t)(const QString & , const QString & , QgsMessageBar::MessageLevel );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapCanvas::messageEmitted)) {
                *result = 20;
            }
        }
    }
}

const QMetaObject QgsMapCanvas::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_QgsMapCanvas.data,
      qt_meta_data_QgsMapCanvas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvas.stringdata))
        return static_cast<void*>(const_cast< QgsMapCanvas*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int QgsMapCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void QgsMapCanvas::xyCoordinates(const QgsPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapCanvas::scaleChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapCanvas::extentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsMapCanvas::rotationChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsMapCanvas::renderComplete(QPainter * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsMapCanvas::mapCanvasRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QgsMapCanvas::renderStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QgsMapCanvas::layersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QgsMapCanvas::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsMapCanvas::keyReleased(QKeyEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsMapCanvas::mapToolSet(QgsMapTool * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsMapCanvas::mapToolSet(QgsMapTool * _t1, QgsMapTool * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsMapCanvas::selectionChanged(QgsMapLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsMapCanvas::zoomLastStatusChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsMapCanvas::zoomNextStatusChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsMapCanvas::hasCrsTransformEnabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsMapCanvas::destinationCrsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void QgsMapCanvas::mapUnitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void QgsMapCanvas::currentLayerChanged(QgsMapLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QgsMapCanvas::layerStyleOverridesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void QgsMapCanvas::messageEmitted(const QString & _t1, const QString & _t2, QgsMessageBar::MessageLevel _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
struct qt_meta_stringdata_QgsMapCanvasRendererSync_t {
    QByteArrayData data[13];
    char stringdata[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapCanvasRendererSync_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapCanvasRendererSync_t qt_meta_stringdata_QgsMapCanvasRendererSync = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QgsMapCanvasRendererSync"
QT_MOC_LITERAL(1, 25, 11), // "onExtentC2R"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "onExtentR2C"
QT_MOC_LITERAL(4, 50, 13), // "onMapUnitsC2R"
QT_MOC_LITERAL(5, 64, 13), // "onMapUnitsR2C"
QT_MOC_LITERAL(6, 78, 16), // "onMapRotationC2R"
QT_MOC_LITERAL(7, 95, 16), // "onMapRotationR2C"
QT_MOC_LITERAL(8, 112, 17), // "onCrsTransformC2R"
QT_MOC_LITERAL(9, 130, 17), // "onCrsTransformR2C"
QT_MOC_LITERAL(10, 148, 12), // "onDestCrsC2R"
QT_MOC_LITERAL(11, 161, 12), // "onDestCrsR2C"
QT_MOC_LITERAL(12, 174, 11) // "onLayersC2R"

    },
    "QgsMapCanvasRendererSync\0onExtentC2R\0"
    "\0onExtentR2C\0onMapUnitsC2R\0onMapUnitsR2C\0"
    "onMapRotationC2R\0onMapRotationR2C\0"
    "onCrsTransformC2R\0onCrsTransformR2C\0"
    "onDestCrsC2R\0onDestCrsR2C\0onLayersC2R"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapCanvasRendererSync[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    0,   72,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    0,   77,    2, 0x09 /* Protected */,
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    0,   79,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMapCanvasRendererSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapCanvasRendererSync *_t = static_cast<QgsMapCanvasRendererSync *>(_o);
        switch (_id) {
        case 0: _t->onExtentC2R(); break;
        case 1: _t->onExtentR2C(); break;
        case 2: _t->onMapUnitsC2R(); break;
        case 3: _t->onMapUnitsR2C(); break;
        case 4: _t->onMapRotationC2R(); break;
        case 5: _t->onMapRotationR2C(); break;
        case 6: _t->onCrsTransformC2R(); break;
        case 7: _t->onCrsTransformR2C(); break;
        case 8: _t->onDestCrsC2R(); break;
        case 9: _t->onDestCrsR2C(); break;
        case 10: _t->onLayersC2R(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QgsMapCanvasRendererSync::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapCanvasRendererSync.data,
      qt_meta_data_QgsMapCanvasRendererSync,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapCanvasRendererSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapCanvasRendererSync::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapCanvasRendererSync.stringdata))
        return static_cast<void*>(const_cast< QgsMapCanvasRendererSync*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapCanvasRendererSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
