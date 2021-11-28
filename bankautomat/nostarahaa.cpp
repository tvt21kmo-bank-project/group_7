#include "nostarahaa.h"
#include "ui_nostarahaa.h"
#include "muuttujat.h"
#include "kayttoliittyma.h"
#include "mainwindow2.h"


nostarahaa::nostarahaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);

    objTimer = new QTimer;
    timerCounter = 0;




}

nostarahaa::~nostarahaa()
{
    delete ui;
    delete putManager;
    delete getManager;
}

void nostarahaa::naytaTiedot()
{
    objTimer->start(1000);
    QString site_url="http://localhost:3000/nosta_rahaa/"+saatuID;
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

void nostarahaa::laskuri(int maara)
{
    double vah = maara;
    double saldo1 = saldo.toDouble();
    double tulos = saldo1 - vah;
    qDebug()<<tulos;
    qDebug()<< 1.43 + 5;

    QJsonObject json;
    json.insert("Saldo",tulos);

    QString site_url="http://localhost:3000/nosta_rahaa/"+saatuID;
    QString credentials="admin:1234";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    putManager = new QNetworkAccessManager(this);
    connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateSaldoSlot(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(json).toJson());
}

void nostarahaa::menuTimerSlot()
{

}

void nostarahaa::resetTimer(int)
{

}

void nostarahaa::haenimiSlot(QNetworkReply *reply)
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
       saldo+=QString::number(json_obj["saldo"].toDouble(),'f',2);
       ui->etunimilbl->setText("Etunimi: "+etunimi);
       ui->sukunimilbl->setText("Sukunimi: "+sukunimi);
       ui->hetulbl->setText("Henkilöturvatunnus: "+hetu);
       ui->puhlbl->setText("Puhelinnumero: "+puhelinnumero);
       ui->osoitelbl->setText("Osoite: "+osoite);
       ui->saldolbl->setText("Saldo: "+saldo);
    }
    reply->deleteLater();
}

void nostarahaa::on_nappiNosta20_clicked()
{

    this-> laskuri(20);
    QMessageBox msgBox;
    msgBox.setText("Nostit 20 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}
void nostarahaa::updateSaldoSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
}

void nostarahaa::on_nappiNosta40_clicked()
{
    this-> laskuri(40);
    QMessageBox msgBox;
    msgBox.setText("Nostit 40 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}

void nostarahaa::on_nappiNosta60_clicked()
{
    this-> laskuri(60);
    QMessageBox msgBox;
    msgBox.setText("Nostit 60 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}

void nostarahaa::on_nappiNosta100_clicked()
{
    this-> laskuri(100);
    QMessageBox msgBox;
    msgBox.setText("Nostit 100 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}

void nostarahaa::on_nappiNosta200_clicked()
{
    this-> laskuri(200);
    QMessageBox msgBox;
    msgBox.setText("Nostit 200 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}

void nostarahaa::on_nappiNosta500_clicked()
{
    this-> laskuri(500);
    QMessageBox msgBox;
    msgBox.setText("Nostit 500 €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}

void nostarahaa::on_nostoNappi_clicked()
{
    double nosto = (ui->nostoTaulu->text().toDouble());
    this->laskuri(nosto);
    QMessageBox msgBox;
    msgBox.setText("Nostit " + ui->nostoTaulu->text() + " €.");
    msgBox.exec();

    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
}
