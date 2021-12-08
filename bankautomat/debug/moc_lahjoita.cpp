/****************************************************************************
** Meta object code from reading C++ file 'lahjoita.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lahjoita.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lahjoita.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lahjoita_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lahjoita_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lahjoita_t qt_meta_stringdata_lahjoita = {
    {
QT_MOC_LITERAL(0, 0, 8), // "lahjoita"
QT_MOC_LITERAL(1, 9, 14), // "nappiapainettu"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "on_nappiPalaa_clicked"
QT_MOC_LITERAL(4, 47, 24), // "on_nappiLahjoita_clicked"
QT_MOC_LITERAL(5, 72, 26), // "on_nappikorjaalahj_clicked"
QT_MOC_LITERAL(6, 99, 12), // "lahjoitaSlot"
QT_MOC_LITERAL(7, 112, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 127, 5), // "reply"
QT_MOC_LITERAL(9, 133, 21), // "menuTimerSlotlahjoita"
QT_MOC_LITERAL(10, 155, 14) // "huomautusTimer"

    },
    "lahjoita\0nappiapainettu\0\0on_nappiPalaa_clicked\0"
    "on_nappiLahjoita_clicked\0"
    "on_nappikorjaalahj_clicked\0lahjoitaSlot\0"
    "QNetworkReply*\0reply\0menuTimerSlotlahjoita\0"
    "huomautusTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lahjoita[] = {

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

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x0a /* Public */,
      10,    0,   57,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void lahjoita::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        lahjoita *_t = static_cast<lahjoita *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nappiapainettu(); break;
        case 1: _t->on_nappiPalaa_clicked(); break;
        case 2: _t->on_nappiLahjoita_clicked(); break;
        case 3: _t->on_nappikorjaalahj_clicked(); break;
        case 4: _t->lahjoitaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->menuTimerSlotlahjoita(); break;
        case 6: _t->huomautusTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject lahjoita::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_lahjoita.data,
      qt_meta_data_lahjoita,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *lahjoita::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lahjoita::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lahjoita.stringdata0))
        return static_cast<void*>(const_cast< lahjoita*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int lahjoita::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
