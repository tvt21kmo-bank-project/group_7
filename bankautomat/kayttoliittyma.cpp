#include "kayttoliittyma.h"
#include "ui_kayttoliittyma.h"
#include "mainwindow.h"
#include "muuttujat.h"
#include "tilitapahtumat.h"

kayttoliittyma::kayttoliittyma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kayttoliittyma)
{
    ui->setupUi(this);

    objTimer2 = new QTimer;
    timerCounter2 = 0;

    connect(objTimer2,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));
}

kayttoliittyma::~kayttoliittyma()
{
    delete ui;
}

void kayttoliittyma::on_nappikayttaja_clicked()
{
    objTimer2->start(1000);
    QString site_url="http://localhost:3000/nimi/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(haenimiSlot(QNetworkReply*)));
    reply = getManager->get(request);
}

void kayttoliittyma::haenimiSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<saatuID+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString etunimi;
    QString sukunimi;
    QString hetu;
    QString puhelinnumero;
    QString osoite;
    foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       etunimi+=(json_obj["etunimi"].toString());
       sukunimi+=(json_obj["sukunimi"].toString());
       hetu+=(json_obj["hetu"].toString());
       puhelinnumero+=(json_obj["puhelinnumero"].toString());
       osoite+=(json_obj["osoite"].toString());
       ui->etunimilbl->setText("Etunimi: "+etunimi);
       ui->sukunimilbl->setText("Sukunimi: "+sukunimi);
       ui->hetulbl->setText("Henkilöturvatunnus: "+hetu);
       ui->puhlbl->setText("Puhelinnumero: "+puhelinnumero);
       ui->osoitelbl->setText("Osoite: "+osoite);
    }
    reply->deleteLater();
}

void kayttoliittyma::on_nappiNosta_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
}

void kayttoliittyma::on_nappiSaldo_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
}

void kayttoliittyma::on_nappiTilitapahtuma_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
    QWidget *koti;
    koti = new tilitapahtumat;
    koti->show();
    this->close();
}

void kayttoliittyma::on_nappiLahjoita_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
}

void kayttoliittyma::on_nappiUloskirjaus_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
    QWidget *koti;
    koti = new MainWindow;
    koti->show();
    this->close();
}

void kayttoliittyma::menuTimerSlot2()
{
    timerCounter2++;
    qDebug()<<timerCounter2;
    if(timerCounter2 == 30)
    {
        emit aikaLoppu2();
        objTimer2->stop();
        timerCounter2 = 0;
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();
    }
}

void kayttoliittyma::resetTimer2(int){
    timerCounter2 = 0;
}
