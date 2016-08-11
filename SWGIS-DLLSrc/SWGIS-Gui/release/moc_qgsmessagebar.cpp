/****************************************************************************
** Meta object code from reading C++ file 'qgsmessagebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Gui/qgsmessagebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsmessagebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsMessageBar_t {
    QByteArrayData data[17];
    char stringdata[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsMessageBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsMessageBar_t qt_meta_stringdata_QgsMessageBar = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsMessageBar"
QT_MOC_LITERAL(1, 14, 11), // "widgetAdded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "QgsMessageBarItem*"
QT_MOC_LITERAL(4, 46, 4), // "item"
QT_MOC_LITERAL(5, 51, 13), // "widgetRemoved"
QT_MOC_LITERAL(6, 65, 9), // "popWidget"
QT_MOC_LITERAL(7, 75, 12), // "clearWidgets"
QT_MOC_LITERAL(8, 88, 11), // "pushSuccess"
QT_MOC_LITERAL(9, 100, 5), // "title"
QT_MOC_LITERAL(10, 106, 7), // "message"
QT_MOC_LITERAL(11, 114, 8), // "pushInfo"
QT_MOC_LITERAL(12, 123, 11), // "pushWarning"
QT_MOC_LITERAL(13, 135, 12), // "pushCritical"
QT_MOC_LITERAL(14, 148, 15), // "updateItemCount"
QT_MOC_LITERAL(15, 164, 15), // "updateCountdown"
QT_MOC_LITERAL(16, 180, 14) // "resetCountdown"

    },
    "QgsMessageBar\0widgetAdded\0\0"
    "QgsMessageBarItem*\0item\0widgetRemoved\0"
    "popWidget\0clearWidgets\0pushSuccess\0"
    "title\0message\0pushInfo\0pushWarning\0"
    "pushCritical\0updateItemCount\0"
    "updateCountdown\0resetCountdown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsMessageBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   75,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    2,   77,    2, 0x0a /* Public */,
      11,    2,   82,    2, 0x0a /* Public */,
      12,    2,   87,    2, 0x0a /* Public */,
      13,    2,   92,    2, 0x0a /* Public */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QgsMessageBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsMessageBar *_t = static_cast<QgsMessageBar *>(_o);
        switch (_id) {
        case 0: _t->widgetAdded((*reinterpret_cast< QgsMessageBarItem*(*)>(_a[1]))); break;
        case 1: _t->widgetRemoved((*reinterpret_cast< QgsMessageBarItem*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->popWidget();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->clearWidgets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->pushSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->pushInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->pushWarning((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->pushCritical((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->updateItemCount(); break;
        case 9: _t->updateCountdown(); break;
        case 10: _t->resetCountdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QgsMessageBar::*_t)(QgsMessageBarItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMessageBar::widgetAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (QgsMessageBar::*_t)(QgsMessageBarItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QgsMessageBar::widgetRemoved)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QgsMessageBar::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QgsMessageBar.data,
      qt_meta_data_QgsMessageBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsMessageBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsMessageBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsMessageBar.stringdata))
        return static_cast<void*>(const_cast< QgsMessageBar*>(this));
    return QFrame::qt_metacast(_clname);
}

int QgsMessageBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QgsMessageBar::widgetAdded(QgsMessageBarItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QgsMessageBar::widgetRemoved(QgsMessageBarItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
