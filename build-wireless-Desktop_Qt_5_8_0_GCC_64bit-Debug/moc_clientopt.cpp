/****************************************************************************
** Meta object code from reading C++ file 'clientopt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wireless/clientopt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientopt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientOpt_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientOpt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientOpt_t qt_meta_stringdata_ClientOpt = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ClientOpt"
QT_MOC_LITERAL(1, 10, 17), // "getClientlistData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "startNetFlow"
QT_MOC_LITERAL(4, 42, 10), // "getNetFlow"
QT_MOC_LITERAL(5, 53, 9), // "startWifi"
QT_MOC_LITERAL(6, 63, 8), // "wifiname"
QT_MOC_LITERAL(7, 72, 8) // "stopWifi"

    },
    "ClientOpt\0getClientlistData\0\0startNetFlow\0"
    "getNetFlow\0startWifi\0wifiname\0stopWifi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientOpt[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x02 /* Public */,
       3,    0,   40,    2, 0x02 /* Public */,
       4,    0,   41,    2, 0x02 /* Public */,
       5,    1,   42,    2, 0x02 /* Public */,
       7,    0,   45,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void ClientOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientOpt *_t = static_cast<ClientOpt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getClientlistData(); break;
        case 1: _t->startNetFlow(); break;
        case 2: { QString _r = _t->getNetFlow();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->startWifi((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->stopWifi(); break;
        default: ;
        }
    }
}

const QMetaObject ClientOpt::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientOpt.data,
      qt_meta_data_ClientOpt,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientOpt.stringdata0))
        return static_cast<void*>(const_cast< ClientOpt*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
