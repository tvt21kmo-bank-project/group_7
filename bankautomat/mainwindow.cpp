#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_numero1_clicked()
{
    QString numero1="1";
     ui->hankiID->setText(numero1);
}

void MainWindow::on_numero2_clicked()
{
   QString numero2="2";
    ui->hankiID->setText(numero2);
}

void MainWindow::on_numero3_clicked()
{
    QString numero3="3";
    ui->hankiID->setText(numero3);
}

void MainWindow::on_numero4_clicked()
{
    QString numero4="4";
    ui->hankiID->setText(numero4);
}

void MainWindow::on_numero5_clicked()
{
    QString numero5="5";
    ui->hankiID->setText(numero5);
}

void MainWindow::on_numero6_2_clicked()
{
    QString numero6="6";
    ui->hankiID->setText(numero6);
}

void MainWindow::on_numero7_2_clicked()
{
    QString numero7="7";
    ui->hankiID->setText(numero7);
}

void MainWindow::on_numero8_clicked()
{
    QString numero8="8";
    ui->hankiID->setText(numero8);
}

void MainWindow::on_numero9_clicked()
{
    QString numero9="9";
    ui->hankiID->setText(numero9);
}

void MainWindow::on_nappikorjaa_clicked()
{

}

void MainWindow::on_numero0_clicked()
{
    QString numero0="0";
    ui->hankiID->setText(numero0);
}

void MainWindow::on_nappiok_clicked()
{
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("username",ui->hankiID->text());
    json.insert("username",ui->hankiPIN->text());
    QString site_url="http://localhost:3000/kirjautuminen";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    kirjauduManager = new QNetworkAccessManager(this);
    connect(kirjauduManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(hankiID(QNetworkReply*)));
    reply = kirjauduManager->post(request, QJsonDocument(json).toJson());
}

void MainWindow::hankiID(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Oikea tunnus ...avaa form";
    }
    else {
        ui->hankiID->setText("");
        ui->hankiPIN->setText("");
        qDebug()<<"Pankkikorttia ei ole olemassa";
    }
}

