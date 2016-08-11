/****************************************************************************
** Meta object code from reading C++ file 'qgscomposerpicture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposerpicture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposerpicture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerPicture_t {
    QByteArrayData data[23];
    char stringdata[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerPicture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerPicture_t qt_meta_stringdata_QgsComposerPicture = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QgsComposerPicture"
QT_MOC_LITERAL(1, 19, 22), // "pictureRotationChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "newRotation"
QT_MOC_LITERAL(4, 55, 11), // "setRotation"
QT_MOC_LITERAL(5, 67, 1), // "r"
QT_MOC_LITERAL(6, 69, 18), // "setPictureRotation"
QT_MOC_LITERAL(7, 88, 13), // "setResizeMode"
QT_MOC_LITERAL(8, 102, 10), // "ResizeMode"
QT_MOC_LITERAL(9, 113, 4), // "mode"
QT_MOC_LITERAL(10, 118, 23), // "setUsePictureExpression"
QT_MOC_LITERAL(11, 142, 13), // "useExpression"
QT_MOC_LITERAL(12, 156, 20), // "setPictureExpression"
QT_MOC_LITERAL(13, 177, 10), // "expression"
QT_MOC_LITERAL(14, 188, 14), // "refreshPicture"
QT_MOC_LITERAL(15, 203, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(16, 231, 7), // "context"
QT_MOC_LITERAL(17, 239, 23), // "updatePictureExpression"
QT_MOC_LITERAL(18, 263, 15), // "recalculateSize"
QT_MOC_LITERAL(19, 279, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(20, 306, 38), // "QgsComposerObject::DataDefine..."
QT_MOC_LITERAL(21, 345, 8), // "property"
QT_MOC_LITERAL(22, 354, 19) // "remotePictureLoaded"

    },
    "QgsComposerPicture\0pictureRotationChanged\0"
    "\0newRotation\0setRotation\0r\0"
    "setPictureRotation\0setResizeMode\0"
    "ResizeMode\0mode\0setUsePictureExpression\0"
    "useExpression\0setPictureExpression\0"
    "expression\0refreshPicture\0"
    "const QgsExpressionContext*\0context\0"
    "updatePictureExpression\0recalculateSize\0"
    "refreshDataDefinedProperty\0"
    "QgsComposerObject::DataDefinedProperty\0"
    "property\0remotePictureLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerPicture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   87,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       7,    1,   93,    2, 0x0a /* Public */,
      10,    1,   96,    2, 0x0a /* Public */,
      12,    1,   99,    2, 0x0a /* Public */,
      14,    1,  102,    2, 0x0a /* Public */,
      14,    0,  105,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  106,    2, 0x0a /* Public */,
      18,    0,  107,    2, 0x0a /* Public */,
      19,    2,  108,    2, 0x0a /* Public */,
      19,    1,  113,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  116,    2, 0x2a /* Public | MethodCloned */,
      22,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 15,   21,   16,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsComposerPicture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerPicture *_t = static_cast<QgsComposerPicture *>(_o);
        switch (_id) {
        case 0: _t->pictureRotationChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setPictureRotation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setResizeMode((*reinterpret_cast< ResizeMode(*)>(_a[1]))); break;
        case 4: _t->setUsePictureExpression((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPictureExpression((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->refreshPicture((*reinterpret_cast< const QgsExpressionContext*(*)>(_a[1]))); break;
        case 7: _t->refreshPicture(); break;
        case 8: _t->updatePictureExpression(); break;
        case 9: _t->recalculateSize(); break;
        case 10: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 11: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 12: _t->refreshDataDefinedProperty(); break;
        case 13: _t->remotePictureLoaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposerPicture::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerPicture::pictureRotationChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QgsComposerPicture::staticMetaObject = {
    { &QgsComposerItem::staticMetaObject, qt_meta_stringdata_QgsComposerPicture.data,
      qt_meta_data_QgsComposerPicture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerPicture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerPicture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerPicture.stringdata))
        return static_cast<void*>(const_cast< QgsComposerPicture*>(this));
    return QgsComposerItem::qt_metacast(_clname);
}

int QgsComposerPicture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerItem::qt_metacall(_c, _id, _a);
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
void QgsComposerPicture::pictureRotationChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
