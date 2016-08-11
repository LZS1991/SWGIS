/****************************************************************************
** Meta object code from reading C++ file 'qgslayertreenode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/layertree/qgslayertreenode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgslayertreenode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsLayerTreeNode_t {
    QByteArrayData data[17];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsLayerTreeNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsLayerTreeNode_t qt_meta_stringdata_QgsLayerTreeNode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QgsLayerTreeNode"
QT_MOC_LITERAL(1, 17, 15), // "willAddChildren"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "QgsLayerTreeNode*"
QT_MOC_LITERAL(4, 52, 4), // "node"
QT_MOC_LITERAL(5, 57, 9), // "indexFrom"
QT_MOC_LITERAL(6, 67, 7), // "indexTo"
QT_MOC_LITERAL(7, 75, 13), // "addedChildren"
QT_MOC_LITERAL(8, 89, 18), // "willRemoveChildren"
QT_MOC_LITERAL(9, 108, 15), // "removedChildren"
QT_MOC_LITERAL(10, 124, 17), // "visibilityChanged"
QT_MOC_LITERAL(11, 142, 14), // "Qt::CheckState"
QT_MOC_LITERAL(12, 157, 5), // "state"
QT_MOC_LITERAL(13, 163, 21), // "customPropertyChanged"
QT_MOC_LITERAL(14, 185, 3), // "key"
QT_MOC_LITERAL(15, 189, 15), // "expandedChanged"
QT_MOC_LITERAL(16, 205, 8) // "expanded"

    },
    "QgsLayerTreeNode\0willAddChildren\0\0"
    "QgsLayerTreeNode*\0node\0indexFrom\0"
    "indexTo\0addedChildren\0willRemoveChildren\0"
    "removedChildren\0visibilityChanged\0"
    "Qt::CheckState\0state\0customPropertyChanged\0"
    "key\0expandedChanged\0expanded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsLayerTreeNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       7,    3,   56,    2, 0x06 /* Public */,
       8,    3,   63,    2, 0x06 /* Public */,
       9,    3,   70,    2, 0x06 /* Public */,
      10,    2,   77,    2, 0x06 /* Public */,
      13,    2,   82,    2, 0x06 /* Public */,
      15,    2,   87,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 11,    4,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   16,

       0        // eod
};

void QgsLayerTreeNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsLayerTreeNode *_t = static_cast<QgsLayerTreeNode *>(_o);
        switch (_id) {
        case 0: _t->willAddChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->addedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->willRemoveChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->removedChildren((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->visibilityChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 5: _t->customPropertyChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->expandedChanged((*reinterpret_cast< QgsLayerTreeNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsLayerTreeNode* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::willAddChildren)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::addedChildren)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::willRemoveChildren)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::removedChildren)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , Qt::CheckState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::visibilityChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::customPropertyChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsLayerTreeNode::*_t)(QgsLayerTreeNode * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsLayerTreeNode::expandedChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject QgsLayerTreeNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsLayerTreeNode.data,
      qt_meta_data_QgsLayerTreeNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsLayerTreeNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsLayerTreeNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsLayerTreeNode.stringdata))
        return static_cast<void*>(const_cast< QgsLayerTreeNode*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsLayerTreeNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsLayerTreeNode::willAddChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsLayerTreeNode::addedChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QgsLayerTreeNode::willRemoveChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsLayerTreeNode::removedChildren(QgsLayerTreeNode * _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsLayerTreeNode::visibilityChanged(QgsLayerTreeNode * _t1, Qt::CheckState _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsLayerTreeNode::customPropertyChanged(QgsLayerTreeNode * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsLayerTreeNode::expandedChanged(QgsLayerTreeNode * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
