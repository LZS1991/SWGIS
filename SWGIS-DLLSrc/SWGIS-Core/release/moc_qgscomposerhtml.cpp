/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerhtml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerhtml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerhtml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerHtml_t {
    QByteArrayData data[13];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerHtml_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerHtml_t qt_meta_stringdata_QgsComposerHtml = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QgsComposerHtml"
QT_MOC_LITERAL(1, 16, 8), // "loadHtml"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "useCache"
QT_MOC_LITERAL(4, 35, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(5, 63, 7), // "context"
QT_MOC_LITERAL(6, 71, 21), // "recalculateFrameSizes"
QT_MOC_LITERAL(7, 93, 24), // "refreshExpressionContext"
QT_MOC_LITERAL(8, 118, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(9, 145, 38), // "QgsComposerObject::DataDefine..."
QT_MOC_LITERAL(10, 184, 8), // "property"
QT_MOC_LITERAL(11, 193, 11), // "frameLoaded"
QT_MOC_LITERAL(12, 205, 2) // "ok"

    },
    "QgsComposerHtml\0loadHtml\0\0useCache\0"
    "const QgsExpressionContext*\0context\0"
    "recalculateFrameSizes\0refreshExpressionContext\0"
    "refreshDataDefinedProperty\0"
    "QgsComposerObject::DataDefinedProperty\0"
    "property\0frameLoaded\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerHtml[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       1,    1,   69,    2, 0x2a /* Public | MethodCloned */,
       1,    0,   72,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    2,   75,    2, 0x0a /* Public */,
       8,    1,   80,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   83,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   84,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void QgsComposerHtml::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerHtml *_t = static_cast<QgsComposerHtml *>(_o);
        switch (_id) {
        case 0: _t->loadHtml((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 1: _t->loadHtml((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->loadHtml(); break;
        case 3: _t->recalculateFrameSizes(); break;
        case 4: _t->refreshExpressionContext(); break;
        case 5: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 6: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 7: _t->refreshDataDefinedProperty(); break;
        case 8: _t->frameLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->frameLoaded(); break;
        default: ;
        }
    }
}

const QMetaObject QgsComposerHtml::staticMetaObject = {
    { &QgsComposerMultiFrame::staticMetaObject, qt_meta_stringdata_QgsComposerHtml.data,
      qt_meta_data_QgsComposerHtml,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerHtml::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerHtml::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerHtml.stringdata))
        return static_cast<void*>(const_cast< QgsComposerHtml*>(this));
    return QgsComposerMultiFrame::qt_metacast(_clname);
}

int QgsComposerHtml::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerMultiFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
