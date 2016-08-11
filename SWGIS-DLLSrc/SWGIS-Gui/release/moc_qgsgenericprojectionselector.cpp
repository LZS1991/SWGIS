/****************************************************************************
** Meta object code from reading C++ file 'qgsgenericprojectionselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Gui/qgsgenericprojectionselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgenericprojectionselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsGenericProjectionSelector_t {
    QByteArrayData data[16];
    char stringdata[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsGenericProjectionSelector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsGenericProjectionSelector_t qt_meta_stringdata_QgsGenericProjectionSelector = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QgsGenericProjectionSelector"
QT_MOC_LITERAL(1, 29, 10), // "setMessage"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "theMessage"
QT_MOC_LITERAL(4, 52, 13), // "selectedCrsId"
QT_MOC_LITERAL(5, 66, 14), // "selectedAuthId"
QT_MOC_LITERAL(6, 81, 18), // "setSelectedCrsName"
QT_MOC_LITERAL(7, 100, 7), // "theName"
QT_MOC_LITERAL(8, 108, 16), // "setSelectedCrsId"
QT_MOC_LITERAL(9, 125, 5), // "theID"
QT_MOC_LITERAL(10, 131, 17), // "setSelectedAuthId"
QT_MOC_LITERAL(11, 149, 6), // "authId"
QT_MOC_LITERAL(12, 156, 27), // "on_mButtonBox_helpRequested"
QT_MOC_LITERAL(13, 184, 18), // "setOgcWmsCrsFilter"
QT_MOC_LITERAL(14, 203, 13), // "QSet<QString>"
QT_MOC_LITERAL(15, 217, 9) // "crsFilter"

    },
    "QgsGenericProjectionSelector\0setMessage\0"
    "\0theMessage\0selectedCrsId\0selectedAuthId\0"
    "setSelectedCrsName\0theName\0setSelectedCrsId\0"
    "theID\0setSelectedAuthId\0authId\0"
    "on_mButtonBox_helpRequested\0"
    "setOgcWmsCrsFilter\0QSet<QString>\0"
    "crsFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsGenericProjectionSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       1,    0,   62,    2, 0x2a /* Public | MethodCloned */,
       4,    0,   63,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Long,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Long,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void QgsGenericProjectionSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsGenericProjectionSelector *_t = static_cast<QgsGenericProjectionSelector *>(_o);
        switch (_id) {
        case 0: _t->setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setMessage(); break;
        case 2: { long _r = _t->selectedCrsId();
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->selectedAuthId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->setSelectedCrsName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setSelectedCrsId((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 6: _t->setSelectedAuthId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_mButtonBox_helpRequested(); break;
        case 8: _t->setOgcWmsCrsFilter((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QgsGenericProjectionSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QgsGenericProjectionSelector.data,
      qt_meta_data_QgsGenericProjectionSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsGenericProjectionSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsGenericProjectionSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGenericProjectionSelector.stringdata))
        return static_cast<void*>(const_cast< QgsGenericProjectionSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int QgsGenericProjectionSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
