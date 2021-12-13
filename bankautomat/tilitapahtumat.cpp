#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"
#include "mainwindow.h"
#include "muuttujat.h"

#include <ui_tilitapahtumat.h>

tilitapahtumat::tilitapahtumat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tilitapahtumat)
{
    ui->setupUi(this);
    disconnect(timertilitapahtuma,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));
    connect(timertilitapahtuma,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));
}

tilitapahtumat::~tilitapahtumat()
{
    delete ui;
}

void tilitapahtumat::on_naytatapahtumat_clicked()
{
    ui->otsikko1->setText("");
    timerCountertilitapahtuma=0;
    QString site_url="http://localhost:3000/nimi/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(kayttajatiedotHae(QNetworkReply*)));
    reply = getManager->get(request);
}

void tilitapahtumat::kayttajatiedotHae(QNetworkReply *reply)
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
       ui->lbletunimi->setText(etunimi);
       ui->lblsukunimi->setText(sukunimi);
       ui->lblhetu->setText(hetu);
       ui->lblpuhelin->setText(puhelinnumero);
       ui->lblosoite->setText(osoite);
    }
    reply->deleteLater();
    tilitapahtumatNayta();
}

void tilitapahtumat::on_lopetanappi_clicked()
{
    timertilitapahtuma->stop();
    timerCountertilitapahtuma = 0;
    disconnect(timertilitapahtuma,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void tilitapahtumat::menuTimerSlot2()
{
    timerCountertilitapahtuma++;
    qDebug()<<timerCountertilitapahtuma;
    if(timerCountertilitapahtuma == 30)
    {
        timertilitapahtuma->stop();
        timerCountertilitapahtuma = 0;
        disconnect(timertilitapahtuma,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();
    }
}

void tilitapahtumat::tilitapahtumatNayta()
{
    timertilitapahtuma->start(1000);
    QString site_url="http://localhost:3000/tth/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(tilitapahtumatHae(QNetworkReply*)));
    reply = getManager->get(request);
}

void tilitapahtumat::tilitapahtumatHae(QNetworkReply *reply)
{
        response_data=reply->readLine();
        qDebug()<<saatuID+response_data;
        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray json_array = json_doc.array();
        foreach (const QJsonValue &value, json_array)
        {
           int rowCount = 0;
           ui->taulukko->setColumnCount(3);
           ui->taulukko->setColumnWidth(0,250);
           ui->taulukko->setColumnWidth(1,140);
           ui->taulukko->setColumnWidth(2,100);
           ui->taulukko->setRowHeight(rowCount,30);
           QStringList labels;
           labels << "aika" << "tapahtuma" << "summa";
           ui->taulukko->setHorizontalHeaderLabels(labels);
           ui->taulukko->insertRow(rowCount);
           QTableWidgetItem *pvm_klo = new QTableWidgetItem;
           QTableWidgetItem *Tapahtuma = new QTableWidgetItem;
           QTableWidgetItem *Summa = new QTableWidgetItem();
           QJsonObject json_obj = value.toObject();
           pvm_klo->setText(json_obj["pvm_klo"].toString());
           Tapahtuma->setText(json_obj["Tapahtuma"].toString());
           Summa->setData(Qt::EditRole, json_obj["Summa"].toDouble());
           ui->taulukko->setItem(rowCount,0,pvm_klo);
           ui->taulukko->setItem(rowCount,1,Tapahtuma);
           ui->taulukko->setItem(rowCount,2,Summa);
           rowCount++;
    }
    reply->deleteLater();
}

