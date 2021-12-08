/****************************************************************************
** Meta object code from reading C++ file 'nayta_saldo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../nayta_saldo.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nayta_saldo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nayta_saldo_t {
    const uint offsetsAndSize[20];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_nayta_saldo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_nayta_saldo_t qt_meta_stringdata_nayta_saldo = {
    {
QT_MOC_LITERAL(0, 11), // "nayta_saldo"
QT_MOC_LITERAL(12, 10), // "aikaLoppu3"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 21), // "on_nappiPalaa_clicked"
QT_MOC_LITERAL(46, 12), // "SaldoValittu"
QT_MOC_LITERAL(59, 14), // "QNetworkReply*"
QT_MOC_LITERAL(74, 5), // "reply"
QT_MOC_LITERAL(80, 23), // "on_nappiSaldoni_clicked"
QT_MOC_LITERAL(104, 14), // "menuTimerSlot3"
QT_MOC_LITERAL(119, 11) // "resetTimer3"

    },
    "nayta_saldo\0aikaLoppu3\0\0on_nappiPalaa_clicked\0"
    "SaldoValittu\0QNetworkReply*\0reply\0"
    "on_nappiSaldoni_clicked\0menuTimerSlot3\0"
    "resetTimer3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nayta_saldo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       7,    0,   55,    2, 0x08,    5 /* Private */,
       8,    0,   56,    2, 0x0a,    6 /* Public */,
       9,    1,   57,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void nayta_saldo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nayta_saldo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aikaLoppu3(); break;
        case 1: _t->on_nappiPalaa_clicked(); break;
        case 2: _t->SaldoValittu((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->on_nappiSaldoni_clicked(); break;
        case 4: _t->menuTimerSlot3(); break;
        case 5: _t->resetTimer3((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nayta_saldo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nayta_saldo::aikaLoppu3)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject nayta_saldo::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_nayta_saldo.offsetsAndSize,
    qt_meta_data_nayta_saldo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_nayta_saldo_t
, QtPrivate::TypeAndForceComplete<nayta_saldo, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *nayta_saldo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nayta_saldo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nayta_saldo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int nayta_saldo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void nayta_saldo::aikaLoppu3()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
