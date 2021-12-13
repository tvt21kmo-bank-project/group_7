#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>

namespace Ui {
class tilitapahtumat;
}

class tilitapahtumat : public QMainWindow
{
    Q_OBJECT

public:
    explicit tilitapahtumat(QWidget *parent = nullptr);
    ~tilitapahtumat();

private slots:
    void on_edellinennappi_clicked();

    void on_lopetanappi_clicked();

    void on_seuraavanappi_clicked();

    void on_kayttoliittymaannappi_clicked();

    void kayttajatiedotNayta();

    void tilitapahtumatNayta();

    void tilitapahtumatHae(QNetworkReply *reply);

    void tilitapahtumatHae2(QNetworkReply *reply);

    void kayttajatiedotHae(QNetworkReply *reply);

private:
    Ui::tilitapahtumat *ui;
    QTimer *objTimer2;
    short timerCounter2;

    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

public slots:
      void menuTimerSlot2();
      void resetTimer2(int);

signals:
      void aikaLoppu2();
};

#endif // TILITAPAHTUMAT_H
