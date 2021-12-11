#ifndef LAHJOITA_H
#define LAHJOITA_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QObject>

#include "muuttujat.h"

namespace Ui {
class lahjoita;
}

class lahjoita : public QMainWindow
{
    Q_OBJECT

public:
    explicit lahjoita(QWidget *parent = 0);
    ~lahjoita();

private:
    Ui::lahjoita *ui;
    QNetworkAccessManager *debitManager;
    QNetworkReply *reply;
    QByteArray response_data;

private slots:
    void nappiapainettu();
    void on_nappiPalaa_clicked();
    void on_nappiLahjoita_clicked();
    void on_nappikorjaalahj_clicked();
    void lahjoitaSlot(QNetworkReply *reply);

public slots:
    void menuTimerSlotlahjoita();
    void huomautusTimer();
};

#endif // LAHJOITA_H