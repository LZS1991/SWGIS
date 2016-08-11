/****************************************************************************
** Meta object code from reading C++ file 'qgsofflineediting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsofflineediting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsofflineediting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsOfflineEditing_t {
    QByteArrayData data[36];
    char stringdata[581];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsOfflineEditing_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsOfflineEditing_t qt_meta_stringdata_QgsOfflineEditing = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QgsOfflineEditing"
QT_MOC_LITERAL(1, 18, 15), // "progressStarted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 20), // "layerProgressUpdated"
QT_MOC_LITERAL(4, 56, 5), // "layer"
QT_MOC_LITERAL(5, 62, 9), // "numLayers"
QT_MOC_LITERAL(6, 72, 15), // "progressModeSet"
QT_MOC_LITERAL(7, 88, 31), // "QgsOfflineEditing::ProgressMode"
QT_MOC_LITERAL(8, 120, 4), // "mode"
QT_MOC_LITERAL(9, 125, 7), // "maximum"
QT_MOC_LITERAL(10, 133, 15), // "progressUpdated"
QT_MOC_LITERAL(11, 149, 8), // "progress"
QT_MOC_LITERAL(12, 158, 15), // "progressStopped"
QT_MOC_LITERAL(13, 174, 7), // "warning"
QT_MOC_LITERAL(14, 182, 5), // "title"
QT_MOC_LITERAL(15, 188, 7), // "message"
QT_MOC_LITERAL(16, 196, 10), // "layerAdded"
QT_MOC_LITERAL(17, 207, 12), // "QgsMapLayer*"
QT_MOC_LITERAL(18, 220, 24), // "committedAttributesAdded"
QT_MOC_LITERAL(19, 245, 11), // "qgisLayerId"
QT_MOC_LITERAL(20, 257, 15), // "QList<QgsField>"
QT_MOC_LITERAL(21, 273, 15), // "addedAttributes"
QT_MOC_LITERAL(22, 289, 22), // "committedFeaturesAdded"
QT_MOC_LITERAL(23, 312, 14), // "QgsFeatureList"
QT_MOC_LITERAL(24, 327, 13), // "addedFeatures"
QT_MOC_LITERAL(25, 341, 24), // "committedFeaturesRemoved"
QT_MOC_LITERAL(26, 366, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(27, 380, 17), // "deletedFeatureIds"
QT_MOC_LITERAL(28, 398, 31), // "committedAttributeValuesChanges"
QT_MOC_LITERAL(29, 430, 23), // "QgsChangedAttributesMap"
QT_MOC_LITERAL(30, 454, 15), // "changedAttrsMap"
QT_MOC_LITERAL(31, 470, 26), // "committedGeometriesChanges"
QT_MOC_LITERAL(32, 497, 14), // "QgsGeometryMap"
QT_MOC_LITERAL(33, 512, 17), // "changedGeometries"
QT_MOC_LITERAL(34, 530, 25), // "startListenFeatureChanges"
QT_MOC_LITERAL(35, 556, 24) // "stopListenFeatureChanges"

    },
    "QgsOfflineEditing\0progressStarted\0\0"
    "layerProgressUpdated\0layer\0numLayers\0"
    "progressModeSet\0QgsOfflineEditing::ProgressMode\0"
    "mode\0maximum\0progressUpdated\0progress\0"
    "progressStopped\0warning\0title\0message\0"
    "layerAdded\0QgsMapLayer*\0"
    "committedAttributesAdded\0qgisLayerId\0"
    "QList<QgsField>\0addedAttributes\0"
    "committedFeaturesAdded\0QgsFeatureList\0"
    "addedFeatures\0committedFeaturesRemoved\0"
    "QgsFeatureIds\0deletedFeatureIds\0"
    "committedAttributeValuesChanges\0"
    "QgsChangedAttributesMap\0changedAttrsMap\0"
    "committedGeometriesChanges\0QgsGeometryMap\0"
    "changedGeometries\0startListenFeatureChanges\0"
    "stopListenFeatureChanges"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsOfflineEditing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    2,   85,    2, 0x06 /* Public */,
       6,    2,   90,    2, 0x06 /* Public */,
      10,    1,   95,    2, 0x06 /* Public */,
      12,    0,   98,    2, 0x06 /* Public */,
      13,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  104,    2, 0x08 /* Private */,
      18,    2,  107,    2, 0x08 /* Private */,
      22,    2,  112,    2, 0x08 /* Private */,
      25,    2,  117,    2, 0x08 /* Private */,
      28,    2,  122,    2, 0x08 /* Private */,
      31,    2,  127,    2, 0x08 /* Private */,
      34,    0,  132,    2, 0x08 /* Private */,
      35,    0,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,    4,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   19,   24,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   19,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 29,   19,   30,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 32,   19,   33,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsOfflineEditing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsOfflineEditing *_t = static_cast<QgsOfflineEditing *>(_o);
        switch (_id) {
        case 0: _t->progressStarted(); break;
        case 1: _t->layerProgressUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->progressModeSet((*reinterpret_cast< QgsOfflineEditing::ProgressMode(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->progressUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->progressStopped(); break;
        case 5: _t->warning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->layerAdded((*reinterpret_cast< QgsMapLayer*(*)>(_a[1]))); break;
        case 7: _t->committedAttributesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsField>(*)>(_a[2]))); break;
        case 8: _t->committedFeaturesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureList(*)>(_a[2]))); break;
        case 9: _t->committedFeaturesRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2]))); break;
        case 10: _t->committedAttributeValuesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsChangedAttributesMap(*)>(_a[2]))); break;
        case 11: _t->committedGeometriesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsGeometryMap(*)>(_a[2]))); break;
        case 12: _t->startListenFeatureChanges(); break;
        case 13: _t->stopListenFeatureChanges(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsMapLayer* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsField> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeatureList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsOfflineEditing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::progressStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsOfflineEditing::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::layerProgressUpdated)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsOfflineEditing::*_t)(QgsOfflineEditing::ProgressMode , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::progressModeSet)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsOfflineEditing::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::progressUpdated)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsOfflineEditing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::progressStopped)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsOfflineEditing::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsOfflineEditing::warning)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QgsOfflineEditing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsOfflineEditing.data,
      qt_meta_data_QgsOfflineEditing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsOfflineEditing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsOfflineEditing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsOfflineEditing.stringdata))
        return static_cast<void*>(const_cast< QgsOfflineEditing*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsOfflineEditing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QgsOfflineEditing::progressStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsOfflineEditing::layerProgressUpdated(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsOfflineEditing::progressModeSet(QgsOfflineEditing::ProgressMode _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsOfflineEditing::progressUpdated(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsOfflineEditing::progressStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsOfflineEditing::warning(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
