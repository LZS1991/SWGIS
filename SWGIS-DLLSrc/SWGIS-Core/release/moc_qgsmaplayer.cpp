/****************************************************************************
** Meta object code from reading C++ file 'qgsmaplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapLayer_t {
    QByteArrayData data[31];
    char stringdata[470];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapLayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapLayer_t qt_meta_stringdata_QgsMapLayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QgsMapLayer"
QT_MOC_LITERAL(1, 12, 15), // "drawingProgress"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "theProgress"
QT_MOC_LITERAL(4, 41, 13), // "theTotalSteps"
QT_MOC_LITERAL(5, 55, 13), // "statusChanged"
QT_MOC_LITERAL(6, 69, 9), // "theStatus"
QT_MOC_LITERAL(7, 79, 16), // "layerNameChanged"
QT_MOC_LITERAL(8, 96, 15), // "layerCrsChanged"
QT_MOC_LITERAL(9, 112, 16), // "repaintRequested"
QT_MOC_LITERAL(10, 129, 21), // "screenUpdateRequested"
QT_MOC_LITERAL(11, 151, 18), // "recalculateExtents"
QT_MOC_LITERAL(12, 170, 11), // "dataChanged"
QT_MOC_LITERAL(13, 182, 16), // "blendModeChanged"
QT_MOC_LITERAL(14, 199, 25), // "QPainter::CompositionMode"
QT_MOC_LITERAL(15, 225, 9), // "blendMode"
QT_MOC_LITERAL(16, 235, 15), // "rendererChanged"
QT_MOC_LITERAL(17, 251, 13), // "legendChanged"
QT_MOC_LITERAL(18, 265, 21), // "invalidTransformInput"
QT_MOC_LITERAL(19, 287, 15), // "setMinimumScale"
QT_MOC_LITERAL(20, 303, 11), // "theMinScale"
QT_MOC_LITERAL(21, 315, 15), // "setMaximumScale"
QT_MOC_LITERAL(22, 331, 11), // "theMaxScale"
QT_MOC_LITERAL(23, 343, 23), // "setScaleBasedVisibility"
QT_MOC_LITERAL(24, 367, 7), // "enabled"
QT_MOC_LITERAL(25, 375, 26), // "toggleScaleBasedVisibility"
QT_MOC_LITERAL(26, 402, 17), // "theVisibilityFlag"
QT_MOC_LITERAL(27, 420, 15), // "clearCacheImage"
QT_MOC_LITERAL(28, 436, 14), // "triggerRepaint"
QT_MOC_LITERAL(29, 451, 8), // "metadata"
QT_MOC_LITERAL(30, 460, 9) // "timestamp"

    },
    "QgsMapLayer\0drawingProgress\0\0theProgress\0"
    "theTotalSteps\0statusChanged\0theStatus\0"
    "layerNameChanged\0layerCrsChanged\0"
    "repaintRequested\0screenUpdateRequested\0"
    "recalculateExtents\0dataChanged\0"
    "blendModeChanged\0QPainter::CompositionMode\0"
    "blendMode\0rendererChanged\0legendChanged\0"
    "invalidTransformInput\0setMinimumScale\0"
    "theMinScale\0setMaximumScale\0theMaxScale\0"
    "setScaleBasedVisibility\0enabled\0"
    "toggleScaleBasedVisibility\0theVisibilityFlag\0"
    "clearCacheImage\0triggerRepaint\0metadata\0"
    "timestamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,
       5,    1,  119,    2, 0x06 /* Public */,
       7,    0,  122,    2, 0x06 /* Public */,
       8,    0,  123,    2, 0x06 /* Public */,
       9,    0,  124,    2, 0x06 /* Public */,
      10,    0,  125,    2, 0x06 /* Public */,
      11,    0,  126,    2, 0x06 /* Public */,
      12,    0,  127,    2, 0x06 /* Public */,
      13,    1,  128,    2, 0x06 /* Public */,
      16,    0,  131,    2, 0x06 /* Public */,
      17,    0,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  133,    2, 0x0a /* Public */,
      19,    1,  134,    2, 0x0a /* Public */,
      21,    1,  137,    2, 0x0a /* Public */,
      23,    1,  140,    2, 0x0a /* Public */,
      25,    1,  143,    2, 0x0a /* Public */,
      27,    0,  146,    2, 0x0a /* Public */,
      28,    0,  147,    2, 0x0a /* Public */,
      29,    0,  148,    2, 0x0a /* Public */,
      30,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   20,
    QMetaType::Void, QMetaType::Float,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QDateTime,

       0        // eod
};

void QgsMapLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapLayer *_t = static_cast<QgsMapLayer *>(_o);
        switch (_id) {
        case 0: _t->drawingProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->layerNameChanged(); break;
        case 3: _t->layerCrsChanged(); break;
        case 4: _t->repaintRequested(); break;
        case 5: _t->screenUpdateRequested(); break;
        case 6: _t->recalculateExtents(); break;
        case 7: _t->dataChanged(); break;
        case 8: _t->blendModeChanged((*reinterpret_cast< QPainter::CompositionMode(*)>(_a[1]))); break;
        case 9: _t->rendererChanged(); break;
        case 10: _t->legendChanged(); break;
        case 11: _t->invalidTransformInput(); break;
        case 12: _t->setMinimumScale((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 13: _t->setMaximumScale((*reinterpret_cast< const float(*)>(_a[1]))); break;
        case 14: _t->setScaleBasedVisibility((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 15: _t->toggleScaleBasedVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->clearCacheImage(); break;
        case 17: _t->triggerRepaint(); break;
        case 18: { QString _r = _t->metadata();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QDateTime _r = _t->timestamp();
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapLayer::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::drawingProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::statusChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::layerNameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::layerCrsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::repaintRequested)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::screenUpdateRequested)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::recalculateExtents)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::dataChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)(QPainter::CompositionMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::blendModeChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::rendererChanged)) {
                *result = 9;
            }
        }
        {
            typedef void (QgsMapLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapLayer::legendChanged)) {
                *result = 10;
            }
        }
    }
}

const QMetaObject QgsMapLayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapLayer.data,
      qt_meta_data_QgsMapLayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapLayer.stringdata))
        return static_cast<void*>(const_cast< QgsMapLayer*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QgsMapLayer::drawingProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapLayer::statusChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapLayer::layerNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsMapLayer::layerCrsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QgsMapLayer::repaintRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsMapLayer::screenUpdateRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QgsMapLayer::recalculateExtents()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QgsMapLayer::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QgsMapLayer::blendModeChanged(QPainter::CompositionMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsMapLayer::rendererChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void QgsMapLayer::legendChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
