#ifndef MUUTTUJAT_H
#define MUUTTUJAT_H


#include <QtGlobal>
#include <QTimer>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern QString saatuID;
extern QTimer *timer;
extern short timerCounter;
extern QTimer *timerkayttoliittyma;
extern short timerCounterkayttoliittyma;

#endif // MUUTTUJAT_H
