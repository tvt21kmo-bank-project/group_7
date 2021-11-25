#include "mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindow.cpp"
#include <QMessageBox>
#include <QPixmap>
#include <QDebug>
#include <QApplication>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);


    QPixmap pix("C:/Ohjelmistokehityksen sovellusprojekti/group_7/bankautomat/resources/img/logo.jpg");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    timerCounter = 0;
    objKayttoliittyma = new kayttoliittyma;

    connect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));

    connect(ui->numero0, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero1, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero2, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero3, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero4, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero5, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero6, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero7, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero8, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero9, SIGNAL(released()),this,SLOT(nappiapainettu()));
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::nappiapainettu()
{
    timerCounter = 0;
    QPushButton *button = (QPushButton*)sender();

    double numero;
    QString uusinumero;

    numero = (ui->hankiPIN->text() + button->text()).toDouble();

    uusinumero = QString::number(numero);

    ui->hankiPIN->setText(uusinumero);
}

void MainWindow2::on_nappikorjaa_clicked()
{
    timerCounter = 0;
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
}

void MainWindow2::on_nappiok_clicked()
{
    timerCounter = 0;
    qDebug()<<saatuID;
    saatuPIN = (ui->hankiPIN->text());
    qDebug()<<saatuPIN;
    QJsonObject json; //luodaan JSON objekti ja lisätään data
    json.insert("pankkikorttiid",saatuID);
    json.insert("pinkoodi",saatuPIN);
    QString site_url="http://localhost:3000/kirjautuminen";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(loginSlot(QNetworkReply*)));
    reply = loginManager->post(request, QJsonDocument(json).toJson());
}
void MainWindow2::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data=="true"){
        qDebug()<<"Tunnus oikein";
         timerCounter = 0;
         timer->stop();
         objKayttoliittyma->show();
         this->close();
         disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
         timerkayttoliittyma->start(1000);
    }
    else {
        ui->hankiPIN->setText("");
        qDebug()<<"tunnus ja salasana ei täsmää";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Test", "Pankkikortin ID tai PIN-koodi väärin",
                                      QMessageBox::Ok|QMessageBox::Ok);
        if (reply == QMessageBox::Ok) {
                qDebug() << "Ok nappia painettiin";
                QWidget *koti;
                koti = new MainWindow;
                koti->show();
                this->close();
                timerCounter = 0;
                timer->stop();
                disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
        }
    }
}

void MainWindow2::menuTimerSlot()
{
    timerCounter++;
    qDebug()<<timerCounter;
    if(timerCounter == 30)
    {
        emit aikaLoppu();
        timer->stop();
        timerCounter = 0;
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();
        disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
        objKayttoliittyma->close();
    }
}
void MainWindow2::resetTimer(int){
    timerCounter = 0;
}

void MainWindow2::on_nappiLopeta_clicked()
{
    timer->stop();
    timerCounter = 0;
    disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
    QWidget *koti;
    koti = new MainWindow;
    koti->show();
    this->close();
}
