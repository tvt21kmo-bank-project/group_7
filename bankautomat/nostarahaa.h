#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>
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
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QNetworkAccessManager *getManager;
    QByteArray response_data;
    //void naytaTiedot();
    nostarahaa *objToiminto;


public slots:
    void menuTimerSlot();
    void resetTimer(int);
    void haenimiSlot(QNetworkReply *reply);

signals:
    void aikaLoppu();

};

#endif // NOSTARAHAA_H
