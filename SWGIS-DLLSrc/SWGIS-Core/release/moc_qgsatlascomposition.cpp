/****************************************************************************
** Meta object code from reading C++ file 'qgsatlascomposition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgsatlascomposition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsatlascomposition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsAtlasComposition_t {
    QByteArrayData data[23];
    char stringdata[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsAtlasComposition_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsAtlasComposition_t qt_meta_stringdata_QgsAtlasComposition = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QgsAtlasComposition"
QT_MOC_LITERAL(1, 20, 16), // "parameterChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "toggled"
QT_MOC_LITERAL(4, 46, 16), // "statusMsgChanged"
QT_MOC_LITERAL(5, 63, 7), // "message"
QT_MOC_LITERAL(6, 71, 20), // "coverageLayerChanged"
QT_MOC_LITERAL(7, 92, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(8, 108, 5), // "layer"
QT_MOC_LITERAL(9, 114, 11), // "renderBegun"
QT_MOC_LITERAL(10, 126, 11), // "renderEnded"
QT_MOC_LITERAL(11, 138, 14), // "featureChanged"
QT_MOC_LITERAL(12, 153, 11), // "QgsFeature*"
QT_MOC_LITERAL(13, 165, 7), // "feature"
QT_MOC_LITERAL(14, 173, 21), // "numberFeaturesChanged"
QT_MOC_LITERAL(15, 195, 11), // "numFeatures"
QT_MOC_LITERAL(16, 207, 14), // "refreshFeature"
QT_MOC_LITERAL(17, 222, 11), // "nextFeature"
QT_MOC_LITERAL(18, 234, 11), // "prevFeature"
QT_MOC_LITERAL(19, 246, 11), // "lastFeature"
QT_MOC_LITERAL(20, 258, 12), // "firstFeature"
QT_MOC_LITERAL(21, 271, 12), // "removeLayers"
QT_MOC_LITERAL(22, 284, 6) // "layers"

    },
    "QgsAtlasComposition\0parameterChanged\0"
    "\0toggled\0statusMsgChanged\0message\0"
    "coverageLayerChanged\0QgsVectorLayer*\0"
    "layer\0renderBegun\0renderEnded\0"
    "featureChanged\0QgsFeature*\0feature\0"
    "numberFeaturesChanged\0numFeatures\0"
    "refreshFeature\0nextFeature\0prevFeature\0"
    "lastFeature\0firstFeature\0removeLayers\0"
    "layers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsAtlasComposition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       4,    1,   88,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,
       9,    0,   94,    2, 0x06 /* Public */,
      10,    0,   95,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,
      14,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  102,    2, 0x0a /* Public */,
      17,    0,  103,    2, 0x0a /* Public */,
      18,    0,  104,    2, 0x0a /* Public */,
      19,    0,  105,    2, 0x0a /* Public */,
      20,    0,  106,    2, 0x0a /* Public */,
      21,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   22,

       0        // eod
};

void QgsAtlasComposition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsAtlasComposition *_t = static_cast<QgsAtlasComposition *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged(); break;
        case 1: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->statusMsgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->coverageLayerChanged((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1]))); break;
        case 4: _t->renderBegun(); break;
        case 5: _t->renderEnded(); break;
        case 6: _t->featureChanged((*reinterpret_cast< QgsFeature*(*)>(_a[1]))); break;
        case 7: _t->numberFeaturesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->refreshFeature(); break;
        case 9: _t->nextFeature(); break;
        case 10: _t->prevFeature(); break;
        case 11: _t->lastFeature(); break;
        case 12: _t->firstFeature(); break;
        case 13: _t->removeLayers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsAtlasComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::parameterChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::toggled)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::statusMsgChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)(QgsVectorLayer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::coverageLayerChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::renderBegun)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::renderEnded)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)(QgsFeature * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::featureChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsAtlasComposition::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsAtlasComposition::numberFeaturesChanged)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject QgsAtlasComposition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsAtlasComposition.data,
      qt_meta_data_QgsAtlasComposition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsAtlasComposition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsAtlasComposition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsAtlasComposition.stringdata))
        return static_cast<void*>(const_cast< QgsAtlasComposition*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsAtlasComposition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QgsAtlasComposition::parameterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsAtlasComposition::toggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsAtlasComposition::statusMsgChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsAtlasComposition::coverageLayerChanged(QgsVectorLayer * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsAtlasComposition::renderBegun()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsAtlasComposition::renderEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QgsAtlasComposition::featureChanged(QgsFeature * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsAtlasComposition::numberFeaturesChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
