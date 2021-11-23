/****************************************************************************
** Meta object code from reading C++ file 'kayttoliittyma.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bankautomat/kayttoliittyma.h"
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
    QByteArrayData data[14];
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
QT_MOC_LITERAL(1, 15, 10), // "aikaLoppu2"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 21), // "on_nappiNosta_clicked"
QT_MOC_LITERAL(4, 49, 21), // "on_nappiSaldo_clicked"
QT_MOC_LITERAL(5, 71, 29), // "on_nappiTilitapahtuma_clicked"
QT_MOC_LITERAL(6, 101, 24), // "on_nappiLahjoita_clicked"
QT_MOC_LITERAL(7, 126, 27), // "on_nappiUloskirjaus_clicked"
QT_MOC_LITERAL(8, 154, 11), // "haenimiSlot"
QT_MOC_LITERAL(9, 166, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 181, 5), // "reply"
QT_MOC_LITERAL(11, 187, 24), // "on_nappikayttaja_clicked"
QT_MOC_LITERAL(12, 212, 14), // "menuTimerSlot2"
QT_MOC_LITERAL(13, 227, 11) // "resetTimer2"

    },
    "kayttoliittyma\0aikaLoppu2\0\0"
    "on_nappiNosta_clicked\0on_nappiSaldo_clicked\0"
    "on_nappiTilitapahtuma_clicked\0"
    "on_nappiLahjoita_clicked\0"
    "on_nappiUloskirjaus_clicked\0haenimiSlot\0"
    "QNetworkReply*\0reply\0on_nappikayttaja_clicked\0"
    "menuTimerSlot2\0resetTimer2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kayttoliittyma[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void kayttoliittyma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        kayttoliittyma *_t = static_cast<kayttoliittyma *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aikaLoppu2(); break;
        case 1: _t->on_nappiNosta_clicked(); break;
        case 2: _t->on_nappiSaldo_clicked(); break;
        case 3: _t->on_nappiTilitapahtuma_clicked(); break;
        case 4: _t->on_nappiLahjoita_clicked(); break;
        case 5: _t->on_nappiUloskirjaus_clicked(); break;
        case 6: _t->haenimiSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->on_nappikayttaja_clicked(); break;
        case 8: _t->menuTimerSlot2(); break;
        case 9: _t->resetTimer2((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
            typedef void (kayttoliittyma::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&kayttoliittyma::aikaLoppu2)) {
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void kayttoliittyma::aikaLoppu2()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
