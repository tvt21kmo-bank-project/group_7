#include "nayta_saldo.h"
#include "ui_nayta_saldo.h"
#include "mainwindow.h"

nayta_saldo::nayta_saldo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nayta_saldo)
{
    ui->setupUi(this);

    objTimer3 = new QTimer;
    timerCounter3 = 0;

    connect(objTimer3,SIGNAL(timeout()), this, SLOT(menuTimerSlot3()));

}

nayta_saldo::~nayta_saldo()
{
    delete ui;
}

void nayta_saldo::on_nappiPalaa_clicked()
{
    objTimer3->stop();
    timerCounter3 = 0;
    QWidget *koti;
    koti = new kayttoliittyma;
    koti->show();
    this->close();
}

void nayta_saldo::menuTimerSlot3()
{
    timerCounter3++;
    qDebug()<<timerCounter3;
    if(timerCounter3 == 30)
    {
        emit aikaLoppu3();
        objTimer3->stop();
        timerCounter3 = 0;
        QWidget *koti;
        koti = new QMainWindow;
        koti->show();
        this->close();
    }
}

void nayta_saldo::resetTimer3(int)
{
    timerCounter3 = 0;
}

void nayta_saldo::on_nappiSaldoni_clicked()
{
    objTimer3->start(1000);
    timerCounter3 = 0;

    QString site_url="http://localhost:3000/saldo/"+saatuID;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    getManager = new QNetworkAccessManager(this);
    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(SaldoValittu(QNetworkReply*)));
    reply = getManager->get(request);
}

/*QString QString::number(double saldo, char format, int precision)
{
    void setText(const QString &saldo);
}*/
void nayta_saldo::SaldoValittu(QNetworkReply *reply)
{
    objTimer3->start(1000);
    timerCounter3 = 0;

    response_data=reply->readAll();
    qDebug()<<saatuID+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    double saldo = 0;
    QString tiliNimi;
    int tilinumero = 0;
    QString saldotxt;
    QString tilinumerotxt;
    QString eurotxt;

    foreach (const QJsonValue &value, json_array) {
       QJsonObject json_obj = value.toObject();
       saldo+=(json_obj["saldo"].toDouble());
       tiliNimi+=(json_obj["tiliNimi"].toString());
       tilinumero+=(json_obj["tilinumero"].toInt());
       saldotxt+=(json_obj)["saldotxt"].toString();
       tilinumerotxt+=(json_obj)["tilinumerotxt"].toString();
       eurotxt+=(json_obj)["eurotxt"].toString();
       /*ui->saldolbl->setText(double saldo, char format = 'g', int precision = 10);*/
       ui->saldolbl->setNum(saldo);
       ui->tiliNimilbl->setText("Tilin nimi:     "+tiliNimi);
       ui->tilinumerolbl->setNum(tilinumero);
       ui->saldotxtlbl->setText("Saldo: "+saldotxt);
       ui->tilinumerotxtlbl->setText("Tilinumero: "+tilinumerotxt);
       ui->eurolbl->setText("€"+eurotxt);
}
    reply->deleteLater();
}

