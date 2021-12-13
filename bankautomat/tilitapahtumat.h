#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>
#include <QTableWidget>
#include <QTableWidgetItem>

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
    void on_lopetanappi_clicked();
    void tilitapahtumatNayta();
    void tilitapahtumatHae(QNetworkReply *reply);
    void kayttajatiedotHae(QNetworkReply *reply);
    void on_naytatapahtumat_clicked();

private:
    Ui::tilitapahtumat *ui;
    QTimer *objTimer2;
    short timerCounter2;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;

public slots:
      void menuTimerSlot2();
};

#endif // TILITAPAHTUMAT_H
