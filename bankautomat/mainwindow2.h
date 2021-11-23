#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QString>



namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();
    QString saatuID;
    QString saatuPIN;

private:
    Ui::MainWindow2 *ui;



private slots:
    void nappiapainettu();
    void on_nappikorjaa_clicked();
    void on_nappiok_clicked();

signals:

};

#endif // MAINWINDOW2_H
