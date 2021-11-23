#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>

#include "mainwindow2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString saatuID;

private:
    Ui::MainWindow *ui;
    MainWindow2 *objPIN;

private slots:
    void nappiapainettu();
    void on_nappikorjaa_clicked();
    void on_nappiok_clicked();



};

#endif // MAINWINDOW_H
