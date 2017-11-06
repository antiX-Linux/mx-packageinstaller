/****************************************************************************
** Meta object code from reading C++ file 'cmd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cmd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cmd_t {
    QByteArrayData data[16];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cmd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cmd_t qt_meta_stringdata_Cmd = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Cmd"
QT_MOC_LITERAL(1, 4, 15), // "outputAvailable"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "output"
QT_MOC_LITERAL(4, 28, 7), // "runTime"
QT_MOC_LITERAL(5, 36, 7), // "started"
QT_MOC_LITERAL(6, 44, 8), // "finished"
QT_MOC_LITERAL(7, 53, 8), // "exitCode"
QT_MOC_LITERAL(8, 62, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 83, 10), // "exitStatus"
QT_MOC_LITERAL(10, 94, 5), // "pause"
QT_MOC_LITERAL(11, 100, 6), // "resume"
QT_MOC_LITERAL(12, 107, 9), // "terminate"
QT_MOC_LITERAL(13, 117, 4), // "kill"
QT_MOC_LITERAL(14, 122, 17), // "onStdoutAvailable"
QT_MOC_LITERAL(15, 140, 4) // "tick"

    },
    "Cmd\0outputAvailable\0\0output\0runTime\0"
    "started\0finished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0pause\0"
    "resume\0terminate\0kill\0onStdoutAvailable\0"
    "tick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cmd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    2,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cmd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cmd *_t = static_cast<Cmd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->runTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->started(); break;
        case 3: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        case 6: { bool _r = _t->terminate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->kill();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->onStdoutAvailable(); break;
        case 9: _t->tick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Cmd::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cmd::outputAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Cmd::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cmd::runTime)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Cmd::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cmd::started)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Cmd::*_t)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cmd::finished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Cmd::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cmd.data,
      qt_meta_data_Cmd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cmd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cmd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cmd.stringdata0))
        return static_cast<void*>(const_cast< Cmd*>(this));
    return QObject::qt_metacast(_clname);
}

int Cmd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Cmd::outputAvailable(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cmd::runTime(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cmd::started()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Cmd::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
