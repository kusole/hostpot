/****************************************************************************
** Meta object code from reading C++ file 'model_clientopt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wireless/model_clientopt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model_clientopt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_ClientOpt_t {
    QByteArrayData data[14];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Model_ClientOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Model_ClientOpt_t qt_meta_stringdata_Model_ClientOpt = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Model_ClientOpt"
QT_MOC_LITERAL(1, 16, 13), // "deviceChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "ipChanged"
QT_MOC_LITERAL(4, 41, 10), // "macChanged"
QT_MOC_LITERAL(5, 52, 16), // "starttimeChanged"
QT_MOC_LITERAL(6, 69, 12), // "routeChanged"
QT_MOC_LITERAL(7, 82, 14), // "netmaskChanged"
QT_MOC_LITERAL(8, 97, 6), // "device"
QT_MOC_LITERAL(9, 104, 2), // "ip"
QT_MOC_LITERAL(10, 107, 3), // "mac"
QT_MOC_LITERAL(11, 111, 9), // "starttime"
QT_MOC_LITERAL(12, 121, 5), // "route"
QT_MOC_LITERAL(13, 127, 7) // "netmask"

    },
    "Model_ClientOpt\0deviceChanged\0\0ipChanged\0"
    "macChanged\0starttimeChanged\0routeChanged\0"
    "netmaskChanged\0device\0ip\0mac\0starttime\0"
    "route\0netmask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model_ClientOpt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495001,
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void Model_ClientOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model_ClientOpt *_t = static_cast<Model_ClientOpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceChanged(); break;
        case 1: _t->ipChanged(); break;
        case 2: _t->macChanged(); break;
        case 3: _t->starttimeChanged(); break;
        case 4: _t->routeChanged(); break;
        case 5: _t->netmaskChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::deviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::ipChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::macChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::starttimeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::routeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Model_ClientOpt::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model_ClientOpt::netmaskChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Model_ClientOpt *_t = static_cast<Model_ClientOpt *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->device(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->ip(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->mac(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->starttime(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->route(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->netmask(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Model_ClientOpt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Model_ClientOpt.data,
      qt_meta_data_Model_ClientOpt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Model_ClientOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model_ClientOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Model_ClientOpt.stringdata0))
        return static_cast<void*>(const_cast< Model_ClientOpt*>(this));
    return QObject::qt_metacast(_clname);
}

int Model_ClientOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Model_ClientOpt::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Model_ClientOpt::ipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Model_ClientOpt::macChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Model_ClientOpt::starttimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Model_ClientOpt::routeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Model_ClientOpt::netmaskChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
