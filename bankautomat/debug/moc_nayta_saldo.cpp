/****************************************************************************
** Meta object code from reading C++ file 'nayta_saldo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nayta_saldo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nayta_saldo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nayta_saldo_t {
    QByteArrayData data[9];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nayta_saldo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nayta_saldo_t qt_meta_stringdata_nayta_saldo = {
    {
QT_MOC_LITERAL(0, 0, 11), // "nayta_saldo"
QT_MOC_LITERAL(1, 12, 21), // "on_nappiPalaa_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "saldoValittu"
QT_MOC_LITERAL(4, 48, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 63, 5), // "reply"
QT_MOC_LITERAL(6, 69, 23), // "on_nappiSaldoni_clicked"
QT_MOC_LITERAL(7, 93, 23), // "menuTimerSlotNaytaSaldo"
QT_MOC_LITERAL(8, 117, 14) // "huomautusTimer"

    },
    "nayta_saldo\0on_nappiPalaa_clicked\0\0"
    "saldoValittu\0QNetworkReply*\0reply\0"
    "on_nappiSaldoni_clicked\0menuTimerSlotNaytaSaldo\0"
    "huomautusTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nayta_saldo[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x0a /* Public */,
       8,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void nayta_saldo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nayta_saldo *_t = static_cast<nayta_saldo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_nappiPalaa_clicked(); break;
        case 1: _t->saldoValittu((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->on_nappiSaldoni_clicked(); break;
        case 3: _t->menuTimerSlotNaytaSaldo(); break;
        case 4: _t->huomautusTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject nayta_saldo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_nayta_saldo.data,
      qt_meta_data_nayta_saldo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nayta_saldo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nayta_saldo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nayta_saldo.stringdata0))
        return static_cast<void*>(const_cast< nayta_saldo*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int nayta_saldo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
