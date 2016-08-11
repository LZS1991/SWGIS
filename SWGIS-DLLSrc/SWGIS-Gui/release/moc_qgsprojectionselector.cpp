/****************************************************************************
** Meta object code from reading C++ file 'qgsprojectionselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Gui/qgsprojectionselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsprojectionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsProjectionSelector_t {
    QByteArrayData data[33];
    char stringdata[575];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsProjectionSelector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsProjectionSelector_t qt_meta_stringdata_QgsProjectionSelector = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QgsProjectionSelector"
QT_MOC_LITERAL(1, 22, 12), // "sridSelected"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "theSRID"
QT_MOC_LITERAL(4, 44, 7), // "refresh"
QT_MOC_LITERAL(5, 52, 17), // "searchBoxHasFocus"
QT_MOC_LITERAL(6, 70, 11), // "initialized"
QT_MOC_LITERAL(7, 82, 23), // "projectionDoubleClicked"
QT_MOC_LITERAL(8, 106, 18), // "setSelectedCrsName"
QT_MOC_LITERAL(9, 125, 10), // "theCRSName"
QT_MOC_LITERAL(10, 136, 12), // "selectedName"
QT_MOC_LITERAL(11, 149, 16), // "setSelectedCrsId"
QT_MOC_LITERAL(12, 166, 8), // "theCRSID"
QT_MOC_LITERAL(13, 175, 17), // "setSelectedAuthId"
QT_MOC_LITERAL(14, 193, 6), // "authId"
QT_MOC_LITERAL(15, 200, 19), // "selectedProj4String"
QT_MOC_LITERAL(16, 220, 20), // "selectedPostgresSrId"
QT_MOC_LITERAL(17, 241, 13), // "selectedCrsId"
QT_MOC_LITERAL(18, 255, 18), // "setOgcWmsCrsFilter"
QT_MOC_LITERAL(19, 274, 13), // "QSet<QString>"
QT_MOC_LITERAL(20, 288, 9), // "crsFilter"
QT_MOC_LITERAL(21, 298, 42), // "on_lstCoordinateSystems_curre..."
QT_MOC_LITERAL(22, 341, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(23, 358, 7), // "current"
QT_MOC_LITERAL(24, 366, 4), // "prev"
QT_MOC_LITERAL(25, 371, 31), // "on_lstRecent_currentItemChanged"
QT_MOC_LITERAL(26, 403, 33), // "on_cbxHideDeprecated_stateCha..."
QT_MOC_LITERAL(27, 437, 23), // "on_leSearch_textChanged"
QT_MOC_LITERAL(28, 461, 21), // "pushProjectionToFront"
QT_MOC_LITERAL(29, 483, 11), // "authorities"
QT_MOC_LITERAL(30, 495, 41), // "on_lstCoordinateSystems_itemD..."
QT_MOC_LITERAL(31, 537, 6), // "column"
QT_MOC_LITERAL(32, 544, 30) // "on_lstRecent_itemDoubleClicked"

    },
    "QgsProjectionSelector\0sridSelected\0\0"
    "theSRID\0refresh\0searchBoxHasFocus\0"
    "initialized\0projectionDoubleClicked\0"
    "setSelectedCrsName\0theCRSName\0"
    "selectedName\0setSelectedCrsId\0theCRSID\0"
    "setSelectedAuthId\0authId\0selectedProj4String\0"
    "selectedPostgresSrId\0selectedCrsId\0"
    "setOgcWmsCrsFilter\0QSet<QString>\0"
    "crsFilter\0on_lstCoordinateSystems_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0prev\0"
    "on_lstRecent_currentItemChanged\0"
    "on_cbxHideDeprecated_stateChanged\0"
    "on_leSearch_textChanged\0pushProjectionToFront\0"
    "authorities\0on_lstCoordinateSystems_itemDoubleClicked\0"
    "column\0on_lstRecent_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsProjectionSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    0,  122,    2, 0x06 /* Public */,
       5,    1,  123,    2, 0x06 /* Public */,
       6,    0,  126,    2, 0x06 /* Public */,
       7,    0,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  128,    2, 0x0a /* Public */,
      10,    0,  131,    2, 0x0a /* Public */,
      11,    1,  132,    2, 0x0a /* Public */,
      13,    1,  135,    2, 0x0a /* Public */,
      15,    0,  138,    2, 0x0a /* Public */,
      16,    0,  139,    2, 0x0a /* Public */,
      17,    0,  140,    2, 0x0a /* Public */,
      18,    1,  141,    2, 0x0a /* Public */,
      21,    2,  144,    2, 0x0a /* Public */,
      25,    2,  149,    2, 0x0a /* Public */,
      26,    0,  154,    2, 0x0a /* Public */,
      27,    1,  155,    2, 0x0a /* Public */,
      28,    0,  158,    2, 0x0a /* Public */,
      29,    0,  159,    2, 0x08 /* Private */,
      30,    2,  160,    2, 0x08 /* Private */,
      32,    2,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Long,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QString,
    QMetaType::Long,
    QMetaType::Long,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 22,   23,   24,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 22,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,   23,   31,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Int,   23,   31,

       0        // eod
};

void QgsProjectionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsProjectionSelector *_t = static_cast<QgsProjectionSelector *>(_o);
        switch (_id) {
        case 0: _t->sridSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->refresh(); break;
        case 2: _t->searchBoxHasFocus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->initialized(); break;
        case 4: _t->projectionDoubleClicked(); break;
        case 5: _t->setSelectedCrsName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: { QString _r = _t->selectedName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->setSelectedCrsId((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 8: _t->setSelectedAuthId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->selectedProj4String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { long _r = _t->selectedPostgresSrId();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 11: { long _r = _t->selectedCrsId();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 12: _t->setOgcWmsCrsFilter((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 13: _t->on_lstCoordinateSystems_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 14: _t->on_lstRecent_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 15: _t->on_cbxHideDeprecated_stateChanged(); break;
        case 16: _t->on_leSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->pushProjectionToFront(); break;
        case 18: { QStringList _r = _t->authorities();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 19: _t->on_lstCoordinateSystems_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->on_lstRecent_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsProjectionSelector::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProjectionSelector::sridSelected)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsProjectionSelector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProjectionSelector::refresh)) {
                *result = 1;
            }
        }
        {
            typedef void (QgsProjectionSelector::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProjectionSelector::searchBoxHasFocus)) {
                *result = 2;
            }
        }
        {
            typedef void (QgsProjectionSelector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProjectionSelector::initialized)) {
                *result = 3;
            }
        }
        {
            typedef void (QgsProjectionSelector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsProjectionSelector::projectionDoubleClicked)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QgsProjectionSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QgsProjectionSelector.data,
      qt_meta_data_QgsProjectionSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsProjectionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsProjectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsProjectionSelector.stringdata))
        return static_cast<void*>(const_cast< QgsProjectionSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int QgsProjectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void QgsProjectionSelector::sridSelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsProjectionSelector::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QgsProjectionSelector::searchBoxHasFocus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QgsProjectionSelector::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QgsProjectionSelector::projectionDoubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
