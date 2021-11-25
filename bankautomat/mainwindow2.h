#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>
#include <QTimer>

#include "kayttoliittyma.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();
    QString saatuPIN;

private slots:
    void nappiapainettu();
    void on_nappikorjaa_clicked();
    void on_nappiok_clicked();
    void loginSlot (QNetworkReply *reply);
    void on_nappiLopeta_clicked();

private:
    Ui::MainWindow2 *ui;


    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    kayttoliittyma *objKayttoliittyma;

public slots:
    void menuTimerSlot();
    void resetTimer(int);

signals:
    void aikaLoppu();


};

#endif // MAINWINDOW2_H
