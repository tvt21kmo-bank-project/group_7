#include "nayta_saldo.h"
#include "ui_nayta_saldo.h"
#include "mainwindow.h"
#include "mainwindow2.h"

#include <QTimer>
#include <QNetworkAccessManager>

nayta_saldo::nayta_saldo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nayta_saldo)
{
    ui->setupUi(this);

    connect(timernaytasaldo,SIGNAL(timeout()), this, SLOT(menuTimerSlotNaytaSaldo()));
}

nayta_saldo::~nayta_saldo()
{
    delete ui;
    delete getManager;

}

void nayta_saldo::on_nappiPalaa_clicked()
{
    QWidget *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();
    timernaytasaldo->stop();
    timerCounternaytasaldo = 0;
    disconnect(timernaytasaldo,SIGNAL(timeout()), this, SLOT(menuTimerSlotNaytaSaldo()));
    timerkayttoliittyma->start(1000);
}

void nayta_saldo::menuTimerSlotNaytaSaldo()
{
    timerCounternaytasaldo++;
    qDebug()<<timerCounternaytasaldo;
    if(timerCounternaytasaldo == 30)
    {
        timernaytasaldo->stop();
        timerCounternaytasaldo = 0;
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();
        disconnect(timernaytasaldo,SIGNAL(timeout()), this, SLOT(menuTimerSlotNaytaSaldo()));
    }
}

void nayta_saldo::saldoValikko()
{

    timerCounternaytasaldo = 0;

    QString site_url="http://localhost:3000/saldo/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(saldoValittu(QNetworkReply*)));
    reply = getManager->get(request);
}

void nayta_saldo::saldoValittu(QNetworkReply *reply)
{

    response_data=reply->readAll();
    qDebug()<<saatuID+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

    QString tilinumero;
    QString tiliNimi;

    foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();

       tiliNimi+=json_obj["tiliNimi"].toString();
       tilinumero+=QString::number(json_obj["tilinumero"].toInt(),'f',0);
       saldo+=QString::number(json_obj["saldo"].toDouble(),'f',2);

       ui->tiliNimilbl->setText("Tilin nimi: "+tiliNimi);
       ui->tilinumerolbl->setText("Tilinumero: "+tilinumero);
       ui->saldolbl->setText("Saldo: "+saldo +" €");
       ui->ohje->setText("");
    }
    reply->deleteLater();
}

void nayta_saldo::on_nappiSaldoni_clicked()
{
    timerCounternaytasaldo = 0;

    QString site_url="http://localhost:3000/saldo/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(saldoValittu(QNetworkReply*)));
    reply = getManager->get(request);
}

void nayta_saldo::huomautusTimer()
{
    timerCounterHuomautus++;
    qDebug()<<timerCounterHuomautus<<"jaajaahuomautus";
    if(timerCounterHuomautus == 5)
    {
        timerHuomautus->stop();
        timerCounterHuomautus = 0;
        timerlahjoita->start(1000);
        disconnect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
    }
}
