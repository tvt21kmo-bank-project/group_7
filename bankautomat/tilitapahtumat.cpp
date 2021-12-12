#include "tilitapahtumat.h"
#include "ui_tilitapahtumat.h"
#include "mainwindow.h"
#include "muuttujat.h"

tilitapahtumat::tilitapahtumat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tilitapahtumat)
{
    ui->setupUi(this);

    objTimer2 = new QTimer;
    timerCounter2 = 0;

    connect(objTimer2,SIGNAL(timeout()), this, SLOT(menuTimerSlot2()));

    objTimer2->start(1000);
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

tilitapahtumat::~tilitapahtumat()
{
    delete ui;
}

void tilitapahtumat::on_lopetanappi_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
    QWidget *koti;
    koti = new MainWindow;
    koti->show();
    this->close();
}

void tilitapahtumat::menuTimerSlot2()
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
    foreach (const QJsonValue &value, json_array)
    {
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
}

void tilitapahtumat::tilitapahtumatHae(QNetworkReply *reply)
{
    for (int a=0; a<10; a++)
    {
        response_data=reply->readLine();
        qDebug()<<saatuID+response_data;
        QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
        QJsonArray json_array = json_doc.array();
        QString tilitapahtumat;
        foreach (const QJsonValue &value, json_array)
        {
           QJsonObject json_obj = value.toObject();
           tilitapahtumat+=(json_obj["tilitapahtumat"].toString());

           ui->lbltapahtumat1->setText(tilitapahtumat);

        }
    }
    reply->deleteLater();
}

void tilitapahtumat::on_edellinennappi_clicked()
{

}

void tilitapahtumat::on_seuraavanappi_clicked()
{

}

void tilitapahtumat::on_kayttoliittymaannappi_clicked()
{
    objTimer2->stop();
    timerCounter2 = 0;
    QWidget *koti;
    koti = new kayttoliittyma;
    koti->show();
    this->close();
}

void tilitapahtumat::resetTimer2(int){
    timerCounter2 = 0;
}
