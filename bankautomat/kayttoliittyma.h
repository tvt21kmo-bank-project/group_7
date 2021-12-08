#ifndef KAYTTOLIITTYMA_H
#define KAYTTOLIITTYMA_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QObject>

#include "muuttujat.h"
#include "lahjoita.h"

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
      QNetworkAccessManager *getManager;
      QNetworkReply *reply;
      QByteArray response_data;
      int timerNumero;
      lahjoita *objLahjoita;

signals:
      void aikaLoppu();
};

#endif // KAYTTOLIITTYMA_H
