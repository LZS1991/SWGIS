/****************************************************************************
** Meta object code from reading C++ file 'qgsvectorlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsvectorlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsvectorlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsVectorLayer_t {
    QByteArrayData data[87];
    char stringdata[1363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsVectorLayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsVectorLayer_t qt_meta_stringdata_QgsVectorLayer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QgsVectorLayer"
QT_MOC_LITERAL(1, 15, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "QgsFeatureIds"
QT_MOC_LITERAL(4, 47, 8), // "selected"
QT_MOC_LITERAL(5, 56, 10), // "deselected"
QT_MOC_LITERAL(6, 67, 14), // "clearAndSelect"
QT_MOC_LITERAL(7, 82, 13), // "layerModified"
QT_MOC_LITERAL(8, 96, 19), // "beforeModifiedCheck"
QT_MOC_LITERAL(9, 116, 20), // "beforeEditingStarted"
QT_MOC_LITERAL(10, 137, 14), // "editingStarted"
QT_MOC_LITERAL(11, 152, 14), // "editingStopped"
QT_MOC_LITERAL(12, 167, 19), // "beforeCommitChanges"
QT_MOC_LITERAL(13, 187, 14), // "beforeRollBack"
QT_MOC_LITERAL(14, 202, 14), // "attributeAdded"
QT_MOC_LITERAL(15, 217, 3), // "idx"
QT_MOC_LITERAL(16, 221, 27), // "beforeAddingExpressionField"
QT_MOC_LITERAL(17, 249, 9), // "fieldName"
QT_MOC_LITERAL(18, 259, 16), // "attributeDeleted"
QT_MOC_LITERAL(19, 276, 29), // "beforeRemovingExpressionField"
QT_MOC_LITERAL(20, 306, 12), // "featureAdded"
QT_MOC_LITERAL(21, 319, 12), // "QgsFeatureId"
QT_MOC_LITERAL(22, 332, 3), // "fid"
QT_MOC_LITERAL(23, 336, 14), // "featureDeleted"
QT_MOC_LITERAL(24, 351, 15), // "featuresDeleted"
QT_MOC_LITERAL(25, 367, 4), // "fids"
QT_MOC_LITERAL(26, 372, 13), // "updatedFields"
QT_MOC_LITERAL(27, 386, 12), // "layerDeleted"
QT_MOC_LITERAL(28, 399, 21), // "attributeValueChanged"
QT_MOC_LITERAL(29, 421, 15), // "geometryChanged"
QT_MOC_LITERAL(30, 437, 12), // "QgsGeometry&"
QT_MOC_LITERAL(31, 450, 4), // "geom"
QT_MOC_LITERAL(32, 455, 26), // "committedAttributesDeleted"
QT_MOC_LITERAL(33, 482, 7), // "layerId"
QT_MOC_LITERAL(34, 490, 16), // "QgsAttributeList"
QT_MOC_LITERAL(35, 507, 17), // "deletedAttributes"
QT_MOC_LITERAL(36, 525, 24), // "committedAttributesAdded"
QT_MOC_LITERAL(37, 550, 15), // "QList<QgsField>"
QT_MOC_LITERAL(38, 566, 15), // "addedAttributes"
QT_MOC_LITERAL(39, 582, 22), // "committedFeaturesAdded"
QT_MOC_LITERAL(40, 605, 14), // "QgsFeatureList"
QT_MOC_LITERAL(41, 620, 13), // "addedFeatures"
QT_MOC_LITERAL(42, 634, 24), // "committedFeaturesRemoved"
QT_MOC_LITERAL(43, 659, 17), // "deletedFeatureIds"
QT_MOC_LITERAL(44, 677, 31), // "committedAttributeValuesChanges"
QT_MOC_LITERAL(45, 709, 23), // "QgsChangedAttributesMap"
QT_MOC_LITERAL(46, 733, 23), // "changedAttributesValues"
QT_MOC_LITERAL(47, 757, 26), // "committedGeometriesChanges"
QT_MOC_LITERAL(48, 784, 14), // "QgsGeometryMap"
QT_MOC_LITERAL(49, 799, 17), // "changedGeometries"
QT_MOC_LITERAL(50, 817, 18), // "saveLayerToProject"
QT_MOC_LITERAL(51, 836, 20), // "labelingFontNotFound"
QT_MOC_LITERAL(52, 857, 15), // "QgsVectorLayer*"
QT_MOC_LITERAL(53, 873, 5), // "layer"
QT_MOC_LITERAL(54, 879, 10), // "fontfamily"
QT_MOC_LITERAL(55, 890, 23), // "featureBlendModeChanged"
QT_MOC_LITERAL(56, 914, 25), // "QPainter::CompositionMode"
QT_MOC_LITERAL(57, 940, 9), // "blendMode"
QT_MOC_LITERAL(58, 950, 24), // "layerTransparencyChanged"
QT_MOC_LITERAL(59, 975, 17), // "layerTransparency"
QT_MOC_LITERAL(60, 993, 18), // "editCommandStarted"
QT_MOC_LITERAL(61, 1012, 4), // "text"
QT_MOC_LITERAL(62, 1017, 16), // "editCommandEnded"
QT_MOC_LITERAL(63, 1034, 20), // "editCommandDestroyed"
QT_MOC_LITERAL(64, 1055, 19), // "readCustomSymbology"
QT_MOC_LITERAL(65, 1075, 11), // "QDomElement"
QT_MOC_LITERAL(66, 1087, 7), // "element"
QT_MOC_LITERAL(67, 1095, 8), // "QString&"
QT_MOC_LITERAL(68, 1104, 12), // "errorMessage"
QT_MOC_LITERAL(69, 1117, 20), // "writeCustomSymbology"
QT_MOC_LITERAL(70, 1138, 12), // "QDomElement&"
QT_MOC_LITERAL(71, 1151, 13), // "QDomDocument&"
QT_MOC_LITERAL(72, 1165, 3), // "doc"
QT_MOC_LITERAL(73, 1169, 10), // "raiseError"
QT_MOC_LITERAL(74, 1180, 3), // "msg"
QT_MOC_LITERAL(75, 1184, 6), // "select"
QT_MOC_LITERAL(76, 1191, 9), // "featureId"
QT_MOC_LITERAL(77, 1201, 10), // "featureIds"
QT_MOC_LITERAL(78, 1212, 8), // "deselect"
QT_MOC_LITERAL(79, 1221, 15), // "removeSelection"
QT_MOC_LITERAL(80, 1237, 13), // "updateExtents"
QT_MOC_LITERAL(81, 1251, 20), // "checkJoinLayerRemove"
QT_MOC_LITERAL(82, 1272, 10), // "theLayerId"
QT_MOC_LITERAL(83, 1283, 12), // "startEditing"
QT_MOC_LITERAL(84, 1296, 27), // "invalidateSymbolCountedFlag"
QT_MOC_LITERAL(85, 1324, 21), // "onJoinedFieldsChanged"
QT_MOC_LITERAL(86, 1346, 16) // "onFeatureDeleted"

    },
    "QgsVectorLayer\0selectionChanged\0\0"
    "QgsFeatureIds\0selected\0deselected\0"
    "clearAndSelect\0layerModified\0"
    "beforeModifiedCheck\0beforeEditingStarted\0"
    "editingStarted\0editingStopped\0"
    "beforeCommitChanges\0beforeRollBack\0"
    "attributeAdded\0idx\0beforeAddingExpressionField\0"
    "fieldName\0attributeDeleted\0"
    "beforeRemovingExpressionField\0"
    "featureAdded\0QgsFeatureId\0fid\0"
    "featureDeleted\0featuresDeleted\0fids\0"
    "updatedFields\0layerDeleted\0"
    "attributeValueChanged\0geometryChanged\0"
    "QgsGeometry&\0geom\0committedAttributesDeleted\0"
    "layerId\0QgsAttributeList\0deletedAttributes\0"
    "committedAttributesAdded\0QList<QgsField>\0"
    "addedAttributes\0committedFeaturesAdded\0"
    "QgsFeatureList\0addedFeatures\0"
    "committedFeaturesRemoved\0deletedFeatureIds\0"
    "committedAttributeValuesChanges\0"
    "QgsChangedAttributesMap\0changedAttributesValues\0"
    "committedGeometriesChanges\0QgsGeometryMap\0"
    "changedGeometries\0saveLayerToProject\0"
    "labelingFontNotFound\0QgsVectorLayer*\0"
    "layer\0fontfamily\0featureBlendModeChanged\0"
    "QPainter::CompositionMode\0blendMode\0"
    "layerTransparencyChanged\0layerTransparency\0"
    "editCommandStarted\0text\0editCommandEnded\0"
    "editCommandDestroyed\0readCustomSymbology\0"
    "QDomElement\0element\0QString&\0errorMessage\0"
    "writeCustomSymbology\0QDomElement&\0"
    "QDomDocument&\0doc\0raiseError\0msg\0"
    "select\0featureId\0featureIds\0deselect\0"
    "removeSelection\0updateExtents\0"
    "checkJoinLayerRemove\0theLayerId\0"
    "startEditing\0invalidateSymbolCountedFlag\0"
    "onJoinedFieldsChanged\0onFeatureDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsVectorLayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  249,    2, 0x06 /* Public */,
       1,    0,  256,    2, 0x06 /* Public */,
       7,    0,  257,    2, 0x06 /* Public */,
       8,    0,  258,    2, 0x06 /* Public */,
       9,    0,  259,    2, 0x06 /* Public */,
      10,    0,  260,    2, 0x06 /* Public */,
      11,    0,  261,    2, 0x06 /* Public */,
      12,    0,  262,    2, 0x06 /* Public */,
      13,    0,  263,    2, 0x06 /* Public */,
      14,    1,  264,    2, 0x06 /* Public */,
      16,    1,  267,    2, 0x06 /* Public */,
      18,    1,  270,    2, 0x06 /* Public */,
      19,    1,  273,    2, 0x06 /* Public */,
      20,    1,  276,    2, 0x06 /* Public */,
      23,    1,  279,    2, 0x06 /* Public */,
      24,    1,  282,    2, 0x06 /* Public */,
      26,    0,  285,    2, 0x06 /* Public */,
      27,    0,  286,    2, 0x06 /* Public */,
      28,    3,  287,    2, 0x06 /* Public */,
      29,    2,  294,    2, 0x06 /* Public */,
      32,    2,  299,    2, 0x06 /* Public */,
      36,    2,  304,    2, 0x06 /* Public */,
      39,    2,  309,    2, 0x06 /* Public */,
      42,    2,  314,    2, 0x06 /* Public */,
      44,    2,  319,    2, 0x06 /* Public */,
      47,    2,  324,    2, 0x06 /* Public */,
      50,    0,  329,    2, 0x06 /* Public */,
      51,    2,  330,    2, 0x06 /* Public */,
      55,    1,  335,    2, 0x06 /* Public */,
      58,    1,  338,    2, 0x06 /* Public */,
      60,    1,  341,    2, 0x06 /* Public */,
      62,    0,  344,    2, 0x06 /* Public */,
      63,    0,  345,    2, 0x06 /* Public */,
      64,    2,  346,    2, 0x06 /* Public */,
      69,    3,  351,    2, 0x06 /* Public */,
      73,    1,  358,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      75,    1,  361,    2, 0x0a /* Public */,
      75,    1,  364,    2, 0x0a /* Public */,
      78,    1,  367,    2, 0x0a /* Public */,
      78,    1,  370,    2, 0x0a /* Public */,
      79,    0,  373,    2, 0x0a /* Public */,
      80,    0,  374,    2, 0x0a /* Public */,
      81,    1,  375,    2, 0x0a /* Public */,
      83,    0,  378,    2, 0x0a /* Public */,
      84,    0,  379,    2, 0x09 /* Protected */,
      85,    0,  380,    2, 0x08 /* Private */,
      86,    1,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 3,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int, QMetaType::QVariant,   22,   15,    2,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 30,   22,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   33,   35,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 37,   33,   38,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 40,   33,   41,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   33,   43,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45,   33,   46,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 48,   33,   49,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52, QMetaType::QString,   53,   54,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 67,   66,   68,
    QMetaType::Void, 0x80000000 | 70, 0x80000000 | 71, 0x80000000 | 67,   66,   72,   68,
    QMetaType::Void, QMetaType::QString,   74,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 21,   76,
    QMetaType::Void, 0x80000000 | 3,   77,
    QMetaType::Void, 0x80000000 | 21,   76,
    QMetaType::Void, 0x80000000 | 3,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void QgsVectorLayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsVectorLayer *_t = static_cast<QgsVectorLayer *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->layerModified(); break;
        case 3: _t->beforeModifiedCheck(); break;
        case 4: _t->beforeEditingStarted(); break;
        case 5: _t->editingStarted(); break;
        case 6: _t->editingStopped(); break;
        case 7: _t->beforeCommitChanges(); break;
        case 8: _t->beforeRollBack(); break;
        case 9: _t->attributeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->beforeAddingExpressionField((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->attributeDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->beforeRemovingExpressionField((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->featureAdded((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 14: _t->featureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 15: _t->featuresDeleted((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 16: _t->updatedFields(); break;
        case 17: _t->layerDeleted(); break;
        case 18: _t->attributeValueChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 19: _t->geometryChanged((*reinterpret_cast< QgsFeatureId(*)>(_a[1])),(*reinterpret_cast< QgsGeometry(*)>(_a[2]))); break;
        case 20: _t->committedAttributesDeleted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsAttributeList(*)>(_a[2]))); break;
        case 21: _t->committedAttributesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QgsField>(*)>(_a[2]))); break;
        case 22: _t->committedFeaturesAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureList(*)>(_a[2]))); break;
        case 23: _t->committedFeaturesRemoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsFeatureIds(*)>(_a[2]))); break;
        case 24: _t->committedAttributeValuesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsChangedAttributesMap(*)>(_a[2]))); break;
        case 25: _t->committedGeometriesChanges((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QgsGeometryMap(*)>(_a[2]))); break;
        case 26: _t->saveLayerToProject(); break;
        case 27: _t->labelingFontNotFound((*reinterpret_cast< QgsVectorLayer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->featureBlendModeChanged((*reinterpret_cast< QPainter::CompositionMode(*)>(_a[1]))); break;
        case 29: _t->layerTransparencyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->editCommandStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->editCommandEnded(); break;
        case 32: _t->editCommandDestroyed(); break;
        case 33: _t->readCustomSymbology((*reinterpret_cast< const QDomElement(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 34: _t->writeCustomSymbology((*reinterpret_cast< QDomElement(*)>(_a[1])),(*reinterpret_cast< QDomDocument(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 35: _t->raiseError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->select((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        case 37: _t->select((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 38: _t->deselect((*reinterpret_cast< const QgsFeatureId(*)>(_a[1]))); break;
        case 39: _t->deselect((*reinterpret_cast< const QgsFeatureIds(*)>(_a[1]))); break;
        case 40: _t->removeSelection(); break;
        case 41: _t->updateExtents(); break;
        case 42: _t->checkJoinLayerRemove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: { bool _r = _t->startEditing();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: _t->invalidateSymbolCountedFlag(); break;
        case 45: _t->onJoinedFieldsChanged(); break;
        case 46: _t->onFeatureDeleted((*reinterpret_cast< QgsFeatureId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QgsField> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsFeatureList >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QgsVectorLayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsVectorLayer::*_t)(const QgsFeatureIds & , const QgsFeatureIds & , const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::selectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::selectionChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::layerModified)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)() const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeModifiedCheck)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeEditingStarted)) {
                *result = 4;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::editingStarted)) {
                *result = 5;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::editingStopped)) {
                *result = 6;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeCommitChanges)) {
                *result = 7;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeRollBack)) {
                *result = 8;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::attributeAdded)) {
                *result = 9;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeAddingExpressionField)) {
                *result = 10;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::attributeDeleted)) {
                *result = 11;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::beforeRemovingExpressionField)) {
                *result = 12;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::featureAdded)) {
                *result = 13;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::featureDeleted)) {
                *result = 14;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::featuresDeleted)) {
                *result = 15;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::updatedFields)) {
                *result = 16;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::layerDeleted)) {
                *result = 17;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId , int , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::attributeValueChanged)) {
                *result = 18;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsFeatureId , QgsGeometry & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::geometryChanged)) {
                *result = 19;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsAttributeList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedAttributesDeleted)) {
                *result = 20;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QList<QgsField> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedAttributesAdded)) {
                *result = 21;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsFeatureList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedFeaturesAdded)) {
                *result = 22;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsFeatureIds & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedFeaturesRemoved)) {
                *result = 23;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsChangedAttributesMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedAttributeValuesChanges)) {
                *result = 24;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & , const QgsGeometryMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::committedGeometriesChanges)) {
                *result = 25;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::saveLayerToProject)) {
                *result = 26;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QgsVectorLayer * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::labelingFontNotFound)) {
                *result = 27;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QPainter::CompositionMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::featureBlendModeChanged)) {
                *result = 28;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::layerTransparencyChanged)) {
                *result = 29;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::editCommandStarted)) {
                *result = 30;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::editCommandEnded)) {
                *result = 31;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::editCommandDestroyed)) {
                *result = 32;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QDomElement & , QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::readCustomSymbology)) {
                *result = 33;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(QDomElement & , QDomDocument & , QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::writeCustomSymbology)) {
                *result = 34;
            }
        }
        {
            typedef void (QgsVectorLayer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsVectorLayer::raiseError)) {
                *result = 35;
            }
        }
    }
}

const QMetaObject QgsVectorLayer::staticMetaObject = {
    { &QgsMapLayer::staticMetaObject, qt_meta_stringdata_QgsVectorLayer.data,
      qt_meta_data_QgsVectorLayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsVectorLayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsVectorLayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsVectorLayer.stringdata))
        return static_cast<void*>(const_cast< QgsVectorLayer*>(this));
    return QgsMapLayer::qt_metacast(_clname);
}

int QgsVectorLayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsMapLayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void QgsVectorLayer::selectionChanged(const QgsFeatureIds & _t1, const QgsFeatureIds & _t2, const bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsVectorLayer::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsVectorLayer::layerModified()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QgsVectorLayer::beforeModifiedCheck()const
{
    QMetaObject::activate(const_cast< QgsVectorLayer *>(this), &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QgsVectorLayer::beforeEditingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QgsVectorLayer::editingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QgsVectorLayer::editingStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QgsVectorLayer::beforeCommitChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QgsVectorLayer::beforeRollBack()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void QgsVectorLayer::attributeAdded(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QgsVectorLayer::beforeAddingExpressionField(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QgsVectorLayer::attributeDeleted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QgsVectorLayer::beforeRemovingExpressionField(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QgsVectorLayer::featureAdded(QgsFeatureId _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QgsVectorLayer::featureDeleted(QgsFeatureId _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QgsVectorLayer::featuresDeleted(const QgsFeatureIds & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QgsVectorLayer::updatedFields()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void QgsVectorLayer::layerDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void QgsVectorLayer::attributeValueChanged(QgsFeatureId _t1, int _t2, const QVariant & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QgsVectorLayer::geometryChanged(QgsFeatureId _t1, QgsGeometry & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QgsVectorLayer::committedAttributesDeleted(const QString & _t1, const QgsAttributeList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QgsVectorLayer::committedAttributesAdded(const QString & _t1, const QList<QgsField> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QgsVectorLayer::committedFeaturesAdded(const QString & _t1, const QgsFeatureList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QgsVectorLayer::committedFeaturesRemoved(const QString & _t1, const QgsFeatureIds & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QgsVectorLayer::committedAttributeValuesChanges(const QString & _t1, const QgsChangedAttributesMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void QgsVectorLayer::committedGeometriesChanges(const QString & _t1, const QgsGeometryMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void QgsVectorLayer::saveLayerToProject()
{
    QMetaObject::activate(this, &staticMetaObject, 26, Q_NULLPTR);
}

// SIGNAL 27
void QgsVectorLayer::labelingFontNotFound(QgsVectorLayer * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QgsVectorLayer::featureBlendModeChanged(QPainter::CompositionMode _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void QgsVectorLayer::layerTransparencyChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QgsVectorLayer::editCommandStarted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QgsVectorLayer::editCommandEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 31, Q_NULLPTR);
}

// SIGNAL 32
void QgsVectorLayer::editCommandDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, Q_NULLPTR);
}

// SIGNAL 33
void QgsVectorLayer::readCustomSymbology(const QDomElement & _t1, QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void QgsVectorLayer::writeCustomSymbology(QDomElement & _t1, QDomDocument & _t2, QString & _t3)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QgsVectorLayer *>(this), &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QgsVectorLayer::raiseError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}
QT_END_MOC_NAMESPACE
