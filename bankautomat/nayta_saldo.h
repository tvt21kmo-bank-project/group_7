#ifndef NAYTA_SALDO_H
#define NAYTA_SALDO_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>
#include <QObject>

#include "muuttujat.h"

namespace Ui {
class nayta_saldo;
}

class nayta_saldo : public QMainWindow
{
    Q_OBJECT

public:
    explicit nayta_saldo(QWidget *parent = 0);
    ~nayta_saldo();
    QString saatuPIN;

private:
    Ui::nayta_saldo *ui;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
    nayta_saldo *objNaytaSaldo;
    QString saldo;

private slots:
    void on_nappiPalaa_clicked();
    void saldoValittu(QNetworkReply *reply);
    void on_nappiSaldoni_clicked();

public slots:
    void menuTimerSlotNaytaSaldo();
};


#endif // NAYTA_SALDO_H
