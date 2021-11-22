#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void hankiID(QNetworkReply *reply);
    void on_numero1_clicked();
    void on_numero2_clicked();
    void on_numero3_clicked();
    void on_numero4_clicked();
    void on_numero5_clicked();
    void on_numero6_2_clicked();
    void on_numero7_2_clicked();
    void on_numero8_clicked();
    void on_numero9_clicked();
    void on_nappikorjaa_clicked();
    void on_numero0_clicked();
    void on_nappiok_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QNetworkAccessManager *kirjauduManager;
    QNetworkReply *reply;

};

#endif // MAINWINDOW_H
