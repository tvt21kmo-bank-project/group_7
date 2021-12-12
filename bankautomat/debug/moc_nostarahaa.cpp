/****************************************************************************
** Meta object code from reading C++ file 'nostarahaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nostarahaa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nostarahaa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nostarahaa_t {
    QByteArrayData data[19];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nostarahaa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nostarahaa_t qt_meta_stringdata_nostarahaa = {
    {
QT_MOC_LITERAL(0, 0, 10), // "nostarahaa"
QT_MOC_LITERAL(1, 11, 9), // "aikaLoppu"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "menuTimerSlotNosta"
QT_MOC_LITERAL(4, 41, 14), // "huomautusTimer"
QT_MOC_LITERAL(5, 56, 14), // "nappiapainettu"
QT_MOC_LITERAL(6, 71, 23), // "on_nappiNosta20_clicked"
QT_MOC_LITERAL(7, 95, 15), // "updateSaldoSlot"
QT_MOC_LITERAL(8, 111, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 126, 5), // "reply"
QT_MOC_LITERAL(10, 132, 11), // "haenimiSlot"
QT_MOC_LITERAL(11, 144, 23), // "on_nappiNosta40_clicked"
QT_MOC_LITERAL(12, 168, 23), // "on_nappiNosta60_clicked"
QT_MOC_LITERAL(13, 192, 24), // "on_nappiNosta100_clicked"
QT_MOC_LITERAL(14, 217, 24), // "on_nappiNosta200_clicked"
QT_MOC_LITERAL(15, 242, 24), // "on_nappiNosta500_clicked"
QT_MOC_LITERAL(16, 267, 21), // "on_nostoNappi_clicked"
QT_MOC_LITERAL(17, 289, 21), // "on_nappiSulje_clicked"
QT_MOC_LITERAL(18, 311, 22) // "on_nappikorjaa_clicked"

    },
    "nostarahaa\0aikaLoppu\0\0menuTimerSlotNosta\0"
    "huomautusTimer\0nappiapainettu\0"
    "on_nappiNosta20_clicked\0updateSaldoSlot\0"
    "QNetworkReply*\0reply\0haenimiSlot\0"
    "on_nappiNosta40_clicked\0on_nappiNosta60_clicked\0"
    "on_nappiNosta100_clicked\0"
    "on_nappiNosta200_clicked\0"
    "on_nappiNosta500_clicked\0on_nostoNappi_clicked\0"
    "on_nappiSulje_clicked\0on_nappikorjaa_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nostarahaa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void nostarahaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nostarahaa *_t = static_cast<nostarahaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aikaLoppu(); break;
        case 1: _t->menuTimerSlotNosta(); break;
        case 2: _t->huomautusTimer(); break;
        case 3: _t->nappiapainettu(); break;
        case 4: _t->on_nappiNosta20_clicked(); break;
        case 5: _t->updateSaldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->haenimiSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->on_nappiNosta40_clicked(); break;
        case 8: _t->on_nappiNosta60_clicked(); break;
        case 9: _t->on_nappiNosta100_clicked(); break;
        case 10: _t->on_nappiNosta200_clicked(); break;
        case 11: _t->on_nappiNosta500_clicked(); break;
        case 12: _t->on_nostoNappi_clicked(); break;
        case 13: _t->on_nappiSulje_clicked(); break;
        case 14: _t->on_nappikorjaa_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (nostarahaa::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&nostarahaa::aikaLoppu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject nostarahaa::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_nostarahaa.data,
      qt_meta_data_nostarahaa,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nostarahaa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nostarahaa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nostarahaa.stringdata0))
        return static_cast<void*>(const_cast< nostarahaa*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int nostarahaa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void nostarahaa::aikaLoppu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
