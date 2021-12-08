/****************************************************************************
** Meta object code from reading C++ file 'kayttoliittyma.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kayttoliittyma.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kayttoliittyma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_kayttoliittyma_t {
    QByteArrayData data[13];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kayttoliittyma_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kayttoliittyma_t qt_meta_stringdata_kayttoliittyma = {
    {
QT_MOC_LITERAL(0, 0, 14), // "kayttoliittyma"
QT_MOC_LITERAL(1, 15, 9), // "aikaLoppu"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 27), // "menuTimerSlotkayttoliittyma"
QT_MOC_LITERAL(4, 54, 21), // "on_nappiNosta_clicked"
QT_MOC_LITERAL(5, 76, 21), // "on_nappiSaldo_clicked"
QT_MOC_LITERAL(6, 98, 29), // "on_nappiTilitapahtuma_clicked"
QT_MOC_LITERAL(7, 128, 24), // "on_nappiLahjoita_clicked"
QT_MOC_LITERAL(8, 153, 27), // "on_nappiUloskirjaus_clicked"
QT_MOC_LITERAL(9, 181, 11), // "haenimiSlot"
QT_MOC_LITERAL(10, 193, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 208, 5), // "reply"
QT_MOC_LITERAL(12, 214, 24) // "on_nappikayttaja_clicked"

    },
    "kayttoliittyma\0aikaLoppu\0\0"
    "menuTimerSlotkayttoliittyma\0"
    "on_nappiNosta_clicked\0on_nappiSaldo_clicked\0"
    "on_nappiTilitapahtuma_clicked\0"
    "on_nappiLahjoita_clicked\0"
    "on_nappiUloskirjaus_clicked\0haenimiSlot\0"
    "QNetworkReply*\0reply\0on_nappikayttaja_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kayttoliittyma[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void kayttoliittyma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        kayttoliittyma *_t = static_cast<kayttoliittyma *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aikaLoppu(); break;
        case 1: _t->menuTimerSlotkayttoliittyma(); break;
        case 2: _t->on_nappiNosta_clicked(); break;
        case 3: _t->on_nappiSaldo_clicked(); break;
        case 4: _t->on_nappiTilitapahtuma_clicked(); break;
        case 5: _t->on_nappiLahjoita_clicked(); break;
        case 6: _t->on_nappiUloskirjaus_clicked(); break;
        case 7: _t->haenimiSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->on_nappikayttaja_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            typedef void (kayttoliittyma::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&kayttoliittyma::aikaLoppu)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject kayttoliittyma::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_kayttoliittyma.data,
      qt_meta_data_kayttoliittyma,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *kayttoliittyma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kayttoliittyma::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_kayttoliittyma.stringdata0))
        return static_cast<void*>(const_cast< kayttoliittyma*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int kayttoliittyma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void kayttoliittyma::aikaLoppu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
