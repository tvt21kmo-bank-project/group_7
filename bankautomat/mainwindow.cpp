#include "mainwindow.h"
#include "ui_mainwindow.h"


<<<<<<< HEAD
=======

>>>>>>> b8222f1ae90ea875b6a1d7f71e0bfa1253c71f6f
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()),this,SLOT(digit_pressed()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

<<<<<<< HEAD
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
=======

void MainWindow::digit_pressed()
{
    QPushButton *button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    labelNumber = (ui->label->text() + button->text()).toDouble();

    newLabel = QString::number(labelNumber,'g',15);

    ui->label->setText(newLabel);
}








>>>>>>> b8222f1ae90ea875b6a1d7f71e0bfa1253c71f6f

