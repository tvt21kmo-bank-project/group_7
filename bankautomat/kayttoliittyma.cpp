#include "kayttoliittyma.h"
#include "ui_kayttoliittyma.h"
#include "mainwindow.h"
#include "mainwindow2.h"
#include "muuttujat.h"

kayttoliittyma::kayttoliittyma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::kayttoliittyma)
{
    ui->setupUi(this);
    connect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
}

kayttoliittyma::~kayttoliittyma()
{
    delete ui;
}

void kayttoliittyma::on_nappikayttaja_clicked()
{
    timerCounterkayttoliittyma = 0;
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
    timerCounterkayttoliittyma = 0;
    timerkayttoliittyma->stop();
    disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
    timernostarahaa->start(1000);
}

void kayttoliittyma::on_nappiSaldo_clicked()
{
    timerCounterkayttoliittyma = 0;
    timerkayttoliittyma->stop();
    disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
    timernaytasaldo->start(1000);
}

void kayttoliittyma::on_nappiTilitapahtuma_clicked()
{
    timerCounterkayttoliittyma = 0;
    timerkayttoliittyma->stop();
    disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
    timertilitapahtuma->start(1000);
}

void kayttoliittyma::on_nappiLahjoita_clicked()
{
    timerCounterkayttoliittyma = 0;
    timerkayttoliittyma->stop();
    disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
    timerlahjoita->start(1000);
}

void kayttoliittyma::on_nappiUloskirjaus_clicked()
{
    timerCounterkayttoliittyma = 0;
    timerkayttoliittyma->stop();
    disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
    QWidget *koti;
    koti = new MainWindow;
    koti->show();
    this->close();
}

void kayttoliittyma::menuTimerSlotkayttoliittyma()
{
    timerCounterkayttoliittyma++;
    qDebug()<<timerCounterkayttoliittyma;
    if(timerCounterkayttoliittyma == 30)
    {
        emit aikaLoppu();
        timerkayttoliittyma->stop();
        timerCounterkayttoliittyma = 0;
        disconnect(timerkayttoliittyma,SIGNAL(timeout()), this, SLOT(menuTimerSlotkayttoliittyma()));
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();
    }
}

