#ifndef NAYTA_SALDO_H
#define NAYTA_SALDO_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>

#define BUILD_DLL
#include "muuttujat.h"

namespace Ui {
class nayta_saldo;
}

class nayta_saldo : public QMainWindow
{
    Q_OBJECT

public:
    explicit nayta_saldo(QWidget *parent = 0);
    /*QString number(double saldo, char format, int precision);*/
    ~nayta_saldo();

private slots:
    void on_nappiPalaa_clicked();
    void SaldoValittu(QNetworkReply *reply);
    void on_nappiSaldoni_clicked();

private:
    Ui::nayta_saldo *ui;
    QTimer *objTimer3;
    short timerCounter3;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

    nayta_saldo *objNaytaSaldo;

public slots:
      void menuTimerSlot3();
      void resetTimer3(int);



signals:
      void aikaLoppu3 ();

};


#endif // NAYTA_SALDO_H
