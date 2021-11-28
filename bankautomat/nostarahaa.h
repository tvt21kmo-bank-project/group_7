#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>
#include <QMessageBox>
//#include "kayttoliittyma.h"


namespace Ui {
class nostarahaa;
}

class nostarahaa : public QMainWindow
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = 0);
    ~nostarahaa();

    QString saatuPIN;
    void naytaTiedot();

private:
    Ui::nostarahaa *ui;
    QTimer *objTimer;
    short timerCounter;
    QNetworkReply *reply;
    QNetworkAccessManager *getManager;
    QByteArray response_data;
    QNetworkAccessManager *putManager;
    QString saldo;
    void laskuri(int maara);
    //kayttoliittyma *objKayttoliittyma;

    //QNetworkAccessManager *saldoManager;
    //void naytaTiedot();
    //nostarahaa *objToiminto;  nää on varman turhia...




public slots:
    void menuTimerSlot();
    void resetTimer(int);
    //void haenimiSlot(QNetworkReply *reply); tää on ehkä oikeesti tässä?

signals:
    void aikaLoppu();

private slots:
    void on_nappiNosta20_clicked();
    void updateSaldoSlot(QNetworkReply *reply);
    void haenimiSlot(QNetworkReply *reply);
    void on_nappiNosta40_clicked();
    void on_nappiNosta60_clicked();
    void on_nappiNosta100_clicked();
    void on_nappiNosta200_clicked();
    void on_nappiNosta500_clicked();
    void on_nostoNappi_clicked();
};

#endif // NOSTARAHAA_H
