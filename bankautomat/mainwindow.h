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
<<<<<<< HEAD
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

=======
   // void on_pushButton_clicked();

   // void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
>>>>>>> b8222f1ae90ea875b6a1d7f71e0bfa1253c71f6f
};

#endif // MAINWINDOW_H
