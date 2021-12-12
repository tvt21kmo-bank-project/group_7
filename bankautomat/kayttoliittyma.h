#ifndef KAYTTOLIITTYMA_H
#define KAYTTOLIITTYMA_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
<<<<<<< HEAD
#include <QTimer>
#include "nostarahaa.h"
#include "muuttujat.h"
#include <QObject>

#include "muuttujat.h"
#include "lahjoita.h"
=======
#include <QObject>

#include "muuttujat.h"
#include "nayta_saldo.h"
>>>>>>> fa370cb1e7dfd94e994c4f1e168217213af4e109

namespace Ui {
class kayttoliittyma;
}

class kayttoliittyma : public QMainWindow
{
    Q_OBJECT

public:
    explicit kayttoliittyma(QWidget *parent = 0);
    ~kayttoliittyma();

public slots:
    void menuTimerSlotkayttoliittyma();

private slots:
    void on_nappiNosta_clicked();
    void on_nappiSaldo_clicked();
    void on_nappiTilitapahtuma_clicked();
    void on_nappiLahjoita_clicked();
    void on_nappiUloskirjaus_clicked();
    void haenimiSlot(QNetworkReply *reply);
    void on_nappikayttaja_clicked();

private:
    Ui::kayttoliittyma *ui;
      QTimer *objTimer2;
      //short timerCounter2;
      QNetworkAccessManager *getManager;
      QNetworkReply *reply;
      QByteArray response_data;
      nostarahaa *objNostarahaa;
      nayta_saldo *objNaytaSaldo;
      int timerNumero;
      lahjoita *objLahjoita;     

signals:
      void aikaLoppu();
};

#endif // KAYTTOLIITTYMA_H
