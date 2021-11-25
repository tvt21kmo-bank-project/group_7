#include "muuttujat.h"
#include <QString>

QTimer *timer = new QTimer;
short timerCounter = 0;
QTimer *timerkayttoliittyma = new QTimer;
short timerCounterkayttoliittyma = 0;
QTimer *timernostarahaa = new QTimer;
short timerCounternostarahaa = 0;
QTimer *timernaytasaldo = new QTimer;
short timerCounternaytasaldo = 0;
QTimer *timertilitapahtuma = new QTimer;
short timerCountertilitapahtuma = 0;
QTimer *timerlahjoita = new QTimer;
short timerCounterlahjoita = 0;

short counterLoginfailedPekka = 0;
short counterLoginfailedMaija = 0;
short counterLoginfailedHarry = 0;
short counterLoginfailedHilleri = 0;
short counterLoginfailedHyvant = 0;

QString saatuID = 0;
