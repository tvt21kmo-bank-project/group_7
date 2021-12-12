#include "mainwindow2.h"
#include "mainwindow.h"
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
    QPixmap pix("C:/Users/Omistaja/Banksimul/group_7/bankautomat/resources/img/logo.jpg");
    //QPixmap pix(":/resources/img/logo.jpg");
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
    delete timer;
    timer = nullptr;
    delete timerkayttoliittyma;
    timerkayttoliittyma = nullptr;
    delete timernostarahaa;
    timernostarahaa=nullptr;
    delete objKayttoliittyma;

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
         if(saatuID == "12")
         {
             counterLoginfailedPekka = 0;
             qDebug()<<"Pekan väärät yritykset nollattu: "<<counterLoginfailedPekka;
         }
         else if(saatuID == "76")
         {
             counterLoginfailedMaija = 0;
             qDebug()<<"Maijan väärät yritykset nollattu: "<<counterLoginfailedMaija;
         }
         else if(saatuID == "21")
         {
             counterLoginfailedHarry = 0;
             qDebug()<<"Harryn väärät yritykset nollattu: "<<counterLoginfailedHarry;
         }
         else if(saatuID == "31")
         {
             counterLoginfailedHilleri = 0;
             qDebug()<<"Hillerin väärät yritykset nollattu: "<<counterLoginfailedHilleri;
         }
         else if(saatuID == "65")
         {
             counterLoginfailedHyvant = 0;
             qDebug()<<"Hyväntekeväisyyden väärät yritykset nollattu: "<<counterLoginfailedHyvant;
         }
    }
    else {
        timer->stop();
        ui->hankiPIN->setText("");
        qDebug()<<"tunnus ja salasana ei täsmää";
        if(saatuID == "12")
        {
            counterLoginfailedPekka++;
            qDebug()<<"Pekan väärät yritykset: "<<counterLoginfailedPekka;
        }
        if(saatuID == "76")
        {
            counterLoginfailedMaija++;
            qDebug()<<"Maijan väärät yritykset: "<<counterLoginfailedMaija;
        }
        if(saatuID == "21")
        {
            counterLoginfailedHarry++;
            qDebug()<<"Harryn väärät yritykset: "<<counterLoginfailedHarry;
        }
        if(saatuID == "31")
        {
            counterLoginfailedHilleri++;
            qDebug()<<"Hillerin väärät yritykset: "<<counterLoginfailedHilleri;
        }
        if(saatuID == "65")
        {
            counterLoginfailedHyvant++;
            qDebug()<<"Hyväntekeväisyyden väärät yritykset: "<<counterLoginfailedHyvant;
        }
        QMessageBox msg;
        msg.setText("Käyttäjätunnus tai salasana väärin... \n Tämä ilmoitus sulkeutuu automaattisesti 10 sekunnissa");
        int cnt = 10;
        QTimer cntDown;
        QObject::connect(&cntDown, &QTimer::timeout, [&msg,&cnt, &cntDown]()->void{
                             if(--cnt < 0){
                                 cntDown.stop();
                                 msg.close();
                             } else {
                                 msg.setText(QString("Käyttäjätunnus tai salasana väärin... \n Tämä ilmoitus sulkeutuu automaattisesti %1 sekunnissa").arg(cnt));
                             }
                         });
        cntDown.start(1000);
        msg.exec();
                disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
                QWidget *koti;
                koti = new MainWindow;
                koti->show();
                this->close();
                timerCounter = 0;
        }
    }


void MainWindow2::menuTimerSlot()
{
    timerCounter++;
    qDebug()<<timerCounter;
    if(timerCounter == 30)
    {
        timer->stop();
        timerCounter = 0;
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();;
        disconnect(timer,SIGNAL(timeout()), this, SLOT(menuTimerSlot()));
        objKayttoliittyma->close();
    }
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
