/****************************************************************************
** Meta object code from reading C++ file 'softdeal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wireless/softdeal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'softdeal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoftDeal_t {
    QByteArrayData data[11];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoftDeal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoftDeal_t qt_meta_stringdata_SoftDeal = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SoftDeal"
QT_MOC_LITERAL(1, 9, 7), // "getinfo"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "info"
QT_MOC_LITERAL(4, 23, 1), // "i"
QT_MOC_LITERAL(5, 25, 12), // "imageSniffer"
QT_MOC_LITERAL(6, 38, 3), // "dns"
QT_MOC_LITERAL(7, 42, 7), // "webFlow"
QT_MOC_LITERAL(8, 50, 4), // "js80"
QT_MOC_LITERAL(9, 55, 9), // "wireshark"
QT_MOC_LITERAL(10, 65, 10) // "metasploit"

    },
    "SoftDeal\0getinfo\0\0info\0i\0imageSniffer\0"
    "dns\0webFlow\0js80\0wireshark\0metasploit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoftDeal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x02 /* Public */,
       5,    1,   54,    2, 0x02 /* Public */,
       6,    1,   57,    2, 0x02 /* Public */,
       7,    1,   60,    2, 0x02 /* Public */,
       8,    1,   63,    2, 0x02 /* Public */,
       9,    1,   66,    2, 0x02 /* Public */,
      10,    1,   69,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    3,

       0        // eod
};

void SoftDeal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoftDeal *_t = static_cast<SoftDeal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getinfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->imageSniffer((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->dns((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->webFlow((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->js80((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->wireshark((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->metasploit((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SoftDeal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SoftDeal.data,
      qt_meta_data_SoftDeal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoftDeal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftDeal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoftDeal.stringdata0))
        return static_cast<void*>(const_cast< SoftDeal*>(this));
    return QObject::qt_metacast(_clname);
}

int SoftDeal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
