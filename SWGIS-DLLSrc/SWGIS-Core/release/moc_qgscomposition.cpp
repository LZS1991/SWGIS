/****************************************************************************
** Meta object code from reading C++ file 'qgscomposition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/composer/qgscomposition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgscomposition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsComposition_t {
    QByteArrayData data[57];
    char stringdata[936];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsComposition_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsComposition_t qt_meta_stringdata_QgsComposition = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsComposition"
QT_MOC_LITERAL(1, 15, 16), // "paperSizeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "nPagesChanged"
QT_MOC_LITERAL(4, 47, 22), // "printResolutionChanged"
QT_MOC_LITERAL(5, 70, 19), // "selectedItemChanged"
QT_MOC_LITERAL(6, 90, 16), // "QgsComposerItem*"
QT_MOC_LITERAL(7, 107, 8), // "selected"
QT_MOC_LITERAL(8, 116, 18), // "composerArrowAdded"
QT_MOC_LITERAL(9, 135, 17), // "QgsComposerArrow*"
QT_MOC_LITERAL(10, 153, 5), // "arrow"
QT_MOC_LITERAL(11, 159, 22), // "composerHtmlFrameAdded"
QT_MOC_LITERAL(12, 182, 16), // "QgsComposerHtml*"
QT_MOC_LITERAL(13, 199, 4), // "html"
QT_MOC_LITERAL(14, 204, 17), // "QgsComposerFrame*"
QT_MOC_LITERAL(15, 222, 5), // "frame"
QT_MOC_LITERAL(16, 228, 18), // "composerLabelAdded"
QT_MOC_LITERAL(17, 247, 17), // "QgsComposerLabel*"
QT_MOC_LITERAL(18, 265, 5), // "label"
QT_MOC_LITERAL(19, 271, 16), // "composerMapAdded"
QT_MOC_LITERAL(20, 288, 15), // "QgsComposerMap*"
QT_MOC_LITERAL(21, 304, 3), // "map"
QT_MOC_LITERAL(22, 308, 21), // "composerScaleBarAdded"
QT_MOC_LITERAL(23, 330, 20), // "QgsComposerScaleBar*"
QT_MOC_LITERAL(24, 351, 8), // "scalebar"
QT_MOC_LITERAL(25, 360, 19), // "composerLegendAdded"
QT_MOC_LITERAL(26, 380, 18), // "QgsComposerLegend*"
QT_MOC_LITERAL(27, 399, 6), // "legend"
QT_MOC_LITERAL(28, 406, 20), // "composerPictureAdded"
QT_MOC_LITERAL(29, 427, 19), // "QgsComposerPicture*"
QT_MOC_LITERAL(30, 447, 7), // "picture"
QT_MOC_LITERAL(31, 455, 18), // "composerShapeAdded"
QT_MOC_LITERAL(32, 474, 17), // "QgsComposerShape*"
QT_MOC_LITERAL(33, 492, 5), // "shape"
QT_MOC_LITERAL(34, 498, 18), // "composerTableAdded"
QT_MOC_LITERAL(35, 517, 26), // "QgsComposerAttributeTable*"
QT_MOC_LITERAL(36, 544, 5), // "table"
QT_MOC_LITERAL(37, 550, 23), // "composerTableFrameAdded"
QT_MOC_LITERAL(38, 574, 28), // "QgsComposerAttributeTableV2*"
QT_MOC_LITERAL(39, 603, 11), // "itemRemoved"
QT_MOC_LITERAL(40, 615, 21), // "refreshItemsTriggered"
QT_MOC_LITERAL(41, 637, 16), // "statusMsgChanged"
QT_MOC_LITERAL(42, 654, 7), // "message"
QT_MOC_LITERAL(43, 662, 19), // "sendItemAddedSignal"
QT_MOC_LITERAL(44, 682, 4), // "item"
QT_MOC_LITERAL(45, 687, 12), // "updateBounds"
QT_MOC_LITERAL(46, 700, 12), // "refreshItems"
QT_MOC_LITERAL(47, 713, 15), // "setSelectedItem"
QT_MOC_LITERAL(48, 729, 16), // "setAllUnselected"
QT_MOC_LITERAL(49, 746, 26), // "refreshDataDefinedProperty"
QT_MOC_LITERAL(50, 773, 38), // "QgsComposerObject::DataDefine..."
QT_MOC_LITERAL(51, 812, 8), // "property"
QT_MOC_LITERAL(52, 821, 27), // "const QgsExpressionContext*"
QT_MOC_LITERAL(53, 849, 7), // "context"
QT_MOC_LITERAL(54, 857, 23), // "createExpressionContext"
QT_MOC_LITERAL(55, 881, 21), // "QgsExpressionContext*"
QT_MOC_LITERAL(56, 903, 32) // "prepareAllDataDefinedExpressions"

    },
    "QgsComposition\0paperSizeChanged\0\0"
    "nPagesChanged\0printResolutionChanged\0"
    "selectedItemChanged\0QgsComposerItem*\0"
    "selected\0composerArrowAdded\0"
    "QgsComposerArrow*\0arrow\0composerHtmlFrameAdded\0"
    "QgsComposerHtml*\0html\0QgsComposerFrame*\0"
    "frame\0composerLabelAdded\0QgsComposerLabel*\0"
    "label\0composerMapAdded\0QgsComposerMap*\0"
    "map\0composerScaleBarAdded\0"
    "QgsComposerScaleBar*\0scalebar\0"
    "composerLegendAdded\0QgsComposerLegend*\0"
    "legend\0composerPictureAdded\0"
    "QgsComposerPicture*\0picture\0"
    "composerShapeAdded\0QgsComposerShape*\0"
    "shape\0composerTableAdded\0"
    "QgsComposerAttributeTable*\0table\0"
    "composerTableFrameAdded\0"
    "QgsComposerAttributeTableV2*\0itemRemoved\0"
    "refreshItemsTriggered\0statusMsgChanged\0"
    "message\0sendItemAddedSignal\0item\0"
    "updateBounds\0refreshItems\0setSelectedItem\0"
    "setAllUnselected\0refreshDataDefinedProperty\0"
    "QgsComposerObject::DataDefinedProperty\0"
    "property\0const QgsExpressionContext*\0"
    "context\0createExpressionContext\0"
    "QgsExpressionContext*\0"
    "prepareAllDataDefinedExpressions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsComposition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  149,    2, 0x06 /* Public */,
       3,    0,  150,    2, 0x06 /* Public */,
       4,    0,  151,    2, 0x06 /* Public */,
       5,    1,  152,    2, 0x06 /* Public */,
       8,    1,  155,    2, 0x06 /* Public */,
      11,    2,  158,    2, 0x06 /* Public */,
      16,    1,  163,    2, 0x06 /* Public */,
      19,    1,  166,    2, 0x06 /* Public */,
      22,    1,  169,    2, 0x06 /* Public */,
      25,    1,  172,    2, 0x06 /* Public */,
      28,    1,  175,    2, 0x06 /* Public */,
      31,    1,  178,    2, 0x06 /* Public */,
      34,    1,  181,    2, 0x06 /* Public */,
      37,    2,  184,    2, 0x06 /* Public */,
      39,    1,  189,    2, 0x06 /* Public */,
      40,    0,  192,    2, 0x06 /* Public */,
      41,    1,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      43,    1,  196,    2, 0x0a /* Public */,
      45,    0,  199,    2, 0x0a /* Public */,
      46,    0,  200,    2, 0x0a /* Public */,
      47,    1,  201,    2, 0x0a /* Public */,
      48,    0,  204,    2, 0x0a /* Public */,
      49,    2,  205,    2, 0x0a /* Public */,
      49,    1,  210,    2, 0x2a /* Public | MethodCloned */,
      49,    0,  213,    2, 0x2a /* Public | MethodCloned */,
      54,    0,  214,    2, 0x0a /* Public */,
      56,    0,  215,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 14,   36,   15,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50, 0x80000000 | 52,   51,   53,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,
    0x80000000 | 55,
    QMetaType::Void,

       0        // eod
};

void QgsComposition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsComposition *_t = static_cast<QgsComposition *>(_o);
        switch (_id) {
        case 0: _t->paperSizeChanged(); break;
        case 1: _t->nPagesChanged(); break;
        case 2: _t->printResolutionChanged(); break;
        case 3: _t->selectedItemChanged((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 4: _t->composerArrowAdded((*reinterpret_cast< QgsComposerArrow*(*)>(_a[1]))); break;
        case 5: _t->composerHtmlFrameAdded((*reinterpret_cast< QgsComposerHtml*(*)>(_a[1])),(*reinterpret_cast< QgsComposerFrame*(*)>(_a[2]))); break;
        case 6: _t->composerLabelAdded((*reinterpret_cast< QgsComposerLabel*(*)>(_a[1]))); break;
        case 7: _t->composerMapAdded((*reinterpret_cast< QgsComposerMap*(*)>(_a[1]))); break;
        case 8: _t->composerScaleBarAdded((*reinterpret_cast< QgsComposerScaleBar*(*)>(_a[1]))); break;
        case 9: _t->composerLegendAdded((*reinterpret_cast< QgsComposerLegend*(*)>(_a[1]))); break;
        case 10: _t->composerPictureAdded((*reinterpret_cast< QgsComposerPicture*(*)>(_a[1]))); break;
        case 11: _t->composerShapeAdded((*reinterpret_cast< QgsComposerShape*(*)>(_a[1]))); break;
        case 12: _t->composerTableAdded((*reinterpret_cast< QgsComposerAttributeTable*(*)>(_a[1]))); break;
        case 13: _t->composerTableFrameAdded((*reinterpret_cast< QgsComposerAttributeTableV2*(*)>(_a[1])),(*reinterpret_cast< QgsComposerFrame*(*)>(_a[2]))); break;
        case 14: _t->itemRemoved((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 15: _t->refreshItemsTriggered(); break;
        case 16: _t->statusMsgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->sendItemAddedSignal((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 18: _t->updateBounds(); break;
        case 19: _t->refreshItems(); break;
        case 20: _t->setSelectedItem((*reinterpret_cast< QgsComposerItem*(*)>(_a[1]))); break;
        case 21: _t->setAllUnselected(); break;
        case 22: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1])),(*reinterpret_cast< const QgsExpressionContext*(*)>(_a[2]))); break;
        case 23: _t->refreshDataDefinedProperty((*reinterpret_cast< const QgsComposerObject::DataDefinedProperty(*)>(_a[1]))); break;
        case 24: _t->refreshDataDefinedProperty(); break;
        case 25: { QgsExpressionContext* _r = _t->createExpressionContext();
            if (_a[0]) *reinterpret_cast< QgsExpressionContext**>(_a[0]) = _r; }  break;
        case 26: _t->prepareAllDataDefinedExpressions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsComposerItem* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsComposerItem* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsComposerItem* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsComposerItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::paperSizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::nPagesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::printResolutionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::selectedItemChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerArrow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerArrowAdded)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerHtml * , QgsComposerFrame * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerHtmlFrameAdded)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerLabel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerLabelAdded)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerMap * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerMapAdded)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerScaleBar * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerScaleBarAdded)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerLegend * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerLegendAdded)) {
                *result = 9;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerPicture * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerPictureAdded)) {
                *result = 10;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerShape * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerShapeAdded)) {
                *result = 11;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerAttributeTable * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerTableAdded)) {
                *result = 12;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerAttributeTableV2 * , QgsComposerFrame * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::composerTableFrameAdded)) {
                *result = 13;
            }
        }
        {
            typedef void (QgsComposition::*_t)(QgsComposerItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::itemRemoved)) {
                *result = 14;
            }
        }
        {
            typedef void (QgsComposition::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::refreshItemsTriggered)) {
                *result = 15;
            }
        }
        {
            typedef void (QgsComposition::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsComposition::statusMsgChanged)) {
                *result = 16;
            }
        }
    }
}

const QMetaObject QgsComposition::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_QgsComposition.data,
      qt_meta_data_QgsComposition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsComposition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsComposition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsComposition.stringdata))
        return static_cast<void*>(const_cast< QgsComposition*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int QgsComposition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void QgsComposition::paperSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QgsComposition::nPagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsComposition::printResolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsComposition::selectedItemChanged(QgsComposerItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QgsComposition::composerArrowAdded(QgsComposerArrow * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QgsComposition::composerHtmlFrameAdded(QgsComposerHtml * _t1, QgsComposerFrame * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QgsComposition::composerLabelAdded(QgsComposerLabel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QgsComposition::composerMapAdded(QgsComposerMap * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QgsComposition::composerScaleBarAdded(QgsComposerScaleBar * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QgsComposition::composerLegendAdded(QgsComposerLegend * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsComposition::composerPictureAdded(QgsComposerPicture * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsComposition::composerShapeAdded(QgsComposerShape * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsComposition::composerTableAdded(QgsComposerAttributeTable * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsComposition::composerTableFrameAdded(QgsComposerAttributeTableV2 * _t1, QgsComposerFrame * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsComposition::itemRemoved(QgsComposerItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsComposition::refreshItemsTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void QgsComposition::statusMsgChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
