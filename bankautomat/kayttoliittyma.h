#ifndef KAYTTOLIITTYMA_H
#define KAYTTOLIITTYMA_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>
#include <nostarahaa.h>


namespace Ui {
class kayttoliittyma;
}

class kayttoliittyma : public QMainWindow
{
    Q_OBJECT

public:
    explicit kayttoliittyma(QWidget *parent = 0);
    ~kayttoliittyma();

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
      short timerCounter2;
      QNetworkAccessManager *getManager;
      QNetworkReply *reply;
      QByteArray response_data;
      nostarahaa *objNostarahaa;

public slots:
      void menuTimerSlot2();
      void resetTimer2(int);

signals:
      void aikaLoppu2();
};

#endif // KAYTTOLIITTYMA_H