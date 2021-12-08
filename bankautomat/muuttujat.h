#ifndef MUUTTUJAT_H
#define MUUTTUJAT_H

#include <QtGlobal>
#include <QTimer>

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern QTimer *timer;
extern short timerCounter;
extern QTimer *timerkayttoliittyma;
extern short timerCounterkayttoliittyma;
extern QTimer *timernostarahaa;
extern short timerCounternostarahaa;
extern QTimer *timernaytasaldo;
extern short timerCounternaytasaldo;
extern QTimer *timertilitapahtuma;
extern short timerCountertilitapahtuma;
extern QTimer *timerlahjoita;
extern short timerCounterlahjoita;
extern QTimer *timerHuomautus;
extern short timerCounterHuomautus;

extern short counterLoginfailedPekka;
extern short counterLoginfailedMaija;
extern short counterLoginfailedHarry;
extern short counterLoginfailedHilleri;
extern short counterLoginfailedHyvant;

extern QString saatuID;

#endif // MUUTTUJAT_H
