/****************************************************************************
** Meta object code from reading C++ file 'qgsmaprenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsmaprenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmaprenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMapRenderer_t {
    QByteArrayData data[21];
    char stringdata[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMapRenderer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMapRenderer_t qt_meta_stringdata_QgsMapRenderer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsMapRenderer"
QT_MOC_LITERAL(1, 15, 15), // "drawingProgress"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "current"
QT_MOC_LITERAL(4, 40, 5), // "total"
QT_MOC_LITERAL(5, 46, 22), // "hasCrsTransformEnabled"
QT_MOC_LITERAL(6, 69, 4), // "flag"
QT_MOC_LITERAL(7, 74, 29), // "hasCrsTransformEnabledChanged"
QT_MOC_LITERAL(8, 104, 21), // "destinationSrsChanged"
QT_MOC_LITERAL(9, 126, 9), // "updateMap"
QT_MOC_LITERAL(10, 136, 15), // "mapUnitsChanged"
QT_MOC_LITERAL(11, 152, 9), // "drawError"
QT_MOC_LITERAL(12, 162, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(13, 175, 14), // "extentsChanged"
QT_MOC_LITERAL(14, 190, 15), // "rotationChanged"
QT_MOC_LITERAL(15, 206, 27), // "datumTransformInfoRequested"
QT_MOC_LITERAL(16, 234, 18), // "const QgsMapLayer*"
QT_MOC_LITERAL(17, 253, 2), // "ml"
QT_MOC_LITERAL(18, 256, 9), // "srcAuthId"
QT_MOC_LITERAL(19, 266, 10), // "destAuthId"
QT_MOC_LITERAL(20, 277, 17) // "onDrawingProgress"

    },
    "QgsMapRenderer\0drawingProgress\0\0current\0"
    "total\0hasCrsTransformEnabled\0flag\0"
    "hasCrsTransformEnabledChanged\0"
    "destinationSrsChanged\0updateMap\0"
    "mapUnitsChanged\0drawError\0QgsMapLayer*\0"
    "extentsChanged\0rotationChanged\0"
    "datumTransformInfoRequested\0"
    "const QgsMapLayer*\0ml\0srcAuthId\0"
    "destAuthId\0onDrawingProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMapRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    0,   81,    2, 0x06 /* Public */,
      10,    0,   82,    2, 0x06 /* Public */,
      11,    1,   83,    2, 0x06 /* Public */,
      13,    0,   86,    2, 0x06 /* Public */,
      14,    1,   87,    2, 0x06 /* Public */,
      15,    3,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString, QMetaType::QString,   17,   18,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void QgsMapRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMapRenderer *_t = static_cast<QgsMapRenderer *>(_o);
        switch (_id) {
        case 0: _t->drawingProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->hasCrsTransformEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->hasCrsTransformEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->destinationSrsChanged(); break;
        case 4: _t->updateMap(); break;
        case 5: _t->mapUnitsChanged(); break;
        case 6: _t->drawError((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 7: _t->extentsChanged(); break;
        case 8: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->datumTransformInfoRequested((*reinterpret_cast< const QgsMapLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->onDrawingProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMapRenderer::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::drawingProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::hasCrsTransformEnabled)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::hasCrsTransformEnabledChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::destinationSrsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::updateMap)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::mapUnitsChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)(QgsMapLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::drawError)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::extentsChanged)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::rotationChanged)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsMapRenderer::*_t)(const QgsMapLayer * , const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMapRenderer::datumTransformInfoRequested)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject QgsMapRenderer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsMapRenderer.data,
      qt_meta_data_QgsMapRenderer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMapRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMapRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMapRenderer.stringdata))
        return static_cast<void*>(const_cast< QgsMapRenderer*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsMapRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QgsMapRenderer::drawingProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMapRenderer::hasCrsTransformEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsMapRenderer::hasCrsTransformEnabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsMapRenderer::destinationSrsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QgsMapRenderer::updateMap()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsMapRenderer::mapUnitsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QgsMapRenderer::drawError(QgsMapLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsMapRenderer::extentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QgsMapRenderer::rotationChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsMapRenderer::datumTransformInfoRequested(const QgsMapLayer * _t1, const QString & _t2, const QString & _t3)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QgsMapRenderer *>(this), &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
