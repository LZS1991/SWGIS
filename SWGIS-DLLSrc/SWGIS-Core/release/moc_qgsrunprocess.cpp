/****************************************************************************
** Meta object code from reading C++ file 'qgsrunprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SWGIS-Inc/SWGIS-Core/qgsrunprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsrunprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QgsRunProcess_t {
    QByteArrayData data[9];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QgsRunProcess_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QgsRunProcess_t qt_meta_stringdata_QgsRunProcess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QgsRunProcess"
QT_MOC_LITERAL(1, 14, 15), // "stdoutAvailable"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "stderrAvailable"
QT_MOC_LITERAL(4, 47, 12), // "processError"
QT_MOC_LITERAL(5, 60, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(6, 83, 11), // "processExit"
QT_MOC_LITERAL(7, 95, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(8, 116, 10) // "dialogGone"

    },
    "QgsRunProcess\0stdoutAvailable\0\0"
    "stderrAvailable\0processError\0"
    "QProcess::ProcessError\0processExit\0"
    "QProcess::ExitStatus\0dialogGone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QgsRunProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    2,   44,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    2,    2,
    QMetaType::Void,

       0        // eod
};

void QgsRunProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QgsRunProcess *_t = static_cast<QgsRunProcess *>(_o);
        switch (_id) {
        case 0: _t->stdoutAvailable(); break;
        case 1: _t->stderrAvailable(); break;
        case 2: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->processExit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->dialogGone(); break;
        default: ;
        }
    }
}

const QMetaObject QgsRunProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QgsRunProcess.data,
      qt_meta_data_QgsRunProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QgsRunProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QgsRunProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QgsRunProcess.stringdata))
        return static_cast<void*>(const_cast< QgsRunProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int QgsRunProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
