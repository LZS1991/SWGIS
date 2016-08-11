/****************************************************************************
** Meta object code from reading C++ file 'qgscomposermultiframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposermultiframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposermultiframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposerMultiFrame_t {
    QByteArrayData data[11];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposerMultiFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposerMultiFrame_t qt_meta_stringdata_QgsComposerMultiFrame = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsComposerMultiFrame"
QT_MOC_LITERAL(1, 22, 7), // "changed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "contentsChanged"
QT_MOC_LITERAL(4, 47, 6), // "update"
QT_MOC_LITERAL(5, 54, 21), // "recalculateFrameSizes"
QT_MOC_LITERAL(6, 76, 21), // "recalculateFrameRects"
QT_MOC_LITERAL(7, 98, 18), // "handleFrameRemoval"
QT_MOC_LITERAL(8, 117, 16), // "QgsComposerItem*"
QT_MOC_LITERAL(9, 134, 4), // "item"
QT_MOC_LITERAL(10, 139, 16) // "handlePageChange"

    },
    "QgsComposerMultiFrame\0changed\0\0"
    "contentsChanged\0update\0recalculateFrameSizes\0"
    "recalculateFrameRects\0handleFrameRemoval\0"
    "QgsComposerItem*\0item\0handlePageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposerMultiFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x09 /* Protected */,
      10,    0,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void QgsComposerMultiFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposerMultiFrame *_t = static_cast<QgsComposerMultiFrame *>(_o);
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->contentsChanged(); break;
        case 2: _t->update(); break;
        case 3: _t->recalculateFrameSizes(); break;
        case 4: _t->recalculateFrameRects(); break;
        case 5: _t->handleFrameRemoval((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 6: _t->handlePageChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposerMultiFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMultiFrame::changed)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsComposerMultiFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposerMultiFrame::contentsChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsComposerMultiFrame::staticMetaObject = {
    { &QgsComposerObject::staticMetaObject, qt_meta_stringdata_QgsComposerMultiFrame.data,
      qt_meta_data_QgsComposerMultiFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposerMultiFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposerMultiFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposerMultiFrame.stringdata))
        return static_cast<void*>(const_cast< QgsComposerMultiFrame*>(this));
    return QgsComposerObject::qt_metacast(_clname);
}

int QgsComposerMultiFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsComposerObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QgsComposerMultiFrame::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsComposerMultiFrame::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
