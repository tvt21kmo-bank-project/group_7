/****************************************************************************
** Meta object code from reading C++ file 'tilitapahtumat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tilitapahtumat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tilitapahtumat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tilitapahtumat_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tilitapahtumat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tilitapahtumat_t qt_meta_stringdata_tilitapahtumat = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tilitapahtumat"
QT_MOC_LITERAL(1, 15, 22), // "on_lopetanappi_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "tilitapahtumatNayta"
QT_MOC_LITERAL(4, 59, 17), // "tilitapahtumatHae"
QT_MOC_LITERAL(5, 77, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 92, 5), // "reply"
QT_MOC_LITERAL(7, 98, 17), // "kayttajatiedotHae"
QT_MOC_LITERAL(8, 116, 26), // "on_naytatapahtumat_clicked"
QT_MOC_LITERAL(9, 143, 14) // "menuTimerSlot2"

    },
    "tilitapahtumat\0on_lopetanappi_clicked\0"
    "\0tilitapahtumatNayta\0tilitapahtumatHae\0"
    "QNetworkReply*\0reply\0kayttajatiedotHae\0"
    "on_naytatapahtumat_clicked\0menuTimerSlot2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tilitapahtumat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tilitapahtumat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tilitapahtumat *_t = static_cast<tilitapahtumat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lopetanappi_clicked(); break;
        case 1: _t->tilitapahtumatNayta(); break;
        case 2: _t->tilitapahtumatHae((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->kayttajatiedotHae((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->on_naytatapahtumat_clicked(); break;
        case 5: _t->menuTimerSlot2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject tilitapahtumat::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tilitapahtumat.data,
      qt_meta_data_tilitapahtumat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *tilitapahtumat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tilitapahtumat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tilitapahtumat.stringdata0))
        return static_cast<void*>(const_cast< tilitapahtumat*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tilitapahtumat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
