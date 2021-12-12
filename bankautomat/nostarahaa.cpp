#include "nostarahaa.h"
#include "ui_nostarahaa.h"
#include "muuttujat.h"
#include "kayttoliittyma.h"
#include "mainwindow2.h"
#include "mainwindow.h"


nostarahaa::nostarahaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    objTimer = new QTimer;

    timerCounternostarahaa = 0;
    connect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
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
void nostarahaa::nappiapainettu()
{
    timerCounternostarahaa = 0;
    QPushButton *button = (QPushButton*)sender();
    double numero;
    QString uusinumero;
    numero = (ui->nostoTaulu->text() + button->text()).toDouble();
    uusinumero = QString::number(numero);
    ui->nostoTaulu->setText(uusinumero);
}

nostarahaa::~nostarahaa()
{
    delete ui;
    ui = nullptr;
    delete putManager;
    delete getManager;
    delete timernostarahaa;
    timernostarahaa = nullptr;
    timerkayttoliittyma = nullptr;
    delete timer;
    timer = nullptr;
}


void nostarahaa::laskuri(int maara)
{
    double vah = maara;
    double saldoSaldo = saldo.toDouble();
    double saldoLuotto = luottoraja.toDouble();
    double tulosSaldo;
    double tulosLuotto;

    qDebug()<<"Saldo on "<<saldoSaldo;
    qDebug() <<"Luotto on "<<saldoLuotto;

    if (CredittaiDebit == 2)
    {
      tulosSaldo = saldoSaldo - vah;
      qDebug()<<tulosSaldo << "tilin saldo";
    }
    if(CredittaiDebit == 1)
    {
      tulosLuotto = saldoLuotto - vah;
      qDebug()<<tulosLuotto <<"Tilin luotto";
    }

    if(CredittaiDebit == 2){
    if (saldoSaldo < maara)
    {
        disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
        timerHuomautus->start(1000);
        connect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
        msgBox = new QMessageBox;
        msgBox->setText("Tilillä ei ole näin paljon rahaa!");
        QAbstractButton *close = msgBox->addButton(tr("Close"),(QMessageBox::ActionRole));
        QTimer::singleShot(5000, msgBox, SLOT(close()));
        msgBox->exec();

     if (msgBox->clickedButton() == close)
        {
            qDebug() <<"taa toimii";
            timerCounternostarahaa = 0;
            disconnect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
            timernostarahaa->start(1000);
            connect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
        }
} else{
        qDebug()<<"Saldo on "<<tulosSaldo;
        QJsonObject json;
        json.insert("Saldo",tulosSaldo);
        json.insert("maara", saatuNostomaara);
        json.insert("nostaja", saatuID);
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
        QMessageBox msg;
        msg.setText("Nostit "+ QString::number(vah) + " €. \n Tämä ilmoitus sulkeutuu automaattisesti.");
        int cnt = 5;
        QTimer cntDown;
        QObject::connect(&cntDown, &QTimer::timeout, [&msg,&cnt, &cntDown]()->void{
                             if(--cnt < 0){
                                 cntDown.stop();
                                 msg.close();
                             }
                         });
        cntDown.start(1000);
        msg.exec();
        kayttoliittyma  *objKayttoliittyma;
        objKayttoliittyma = new kayttoliittyma;
        objKayttoliittyma->show();
        timernostarahaa->stop();
        timerCounternostarahaa = 0;
        disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
        timerkayttoliittyma->start(1000);
        this->close();
    }
}
    if(CredittaiDebit == 1){
        if (saldoLuotto < maara)
        {
            disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
            timerHuomautus->start(1000);
            connect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
            msgBox = new QMessageBox;
            msgBox->setText("Ei tarpeeksi luottoa!");
            QAbstractButton *close = msgBox->addButton(tr("Close"),(QMessageBox::ActionRole));
            QTimer::singleShot(10000, msgBox, SLOT(close()));
            msgBox->exec();

         if (msgBox->clickedButton() == close)
            {
                qDebug() <<"taa toimii";
                timerCounternostarahaa = 0;
                disconnect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
                timernostarahaa->start(1000);
                connect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
            }
    }else{
            qDebug() <<"Luotto on"<<tulosLuotto;
            QJsonObject json;
            json.insert("luottoraja",tulosLuotto);
            QString site_url="http://localhost:3000/luotto/"+saatuID;
            QString credentials="admin:1234";
            QNetworkRequest request((site_url));
            request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
            QByteArray data = credentials.toLocal8Bit().toBase64();
            QString headerData = "Basic " + data;
            request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
            putManager = new QNetworkAccessManager(this);
            connect(putManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(updateSaldoSlot(QNetworkReply*)));
            reply = putManager->put(request, QJsonDocument(json).toJson());
            QMessageBox msg;
            msg.setText("Nostit "+ QString::number(vah) + " €. \n Tämä ilmoitus sulkeutuu automaattisesti");
            int cnt = 5;
            QTimer cntDown;
            QObject::connect(&cntDown, &QTimer::timeout, [&msg,&cnt, &cntDown]()->void{
                                 if(--cnt < 0){
                                     cntDown.stop();
                                     msg.close();
                                 }
                             });
            cntDown.start(1000);
            msg.exec();
            kayttoliittyma  *objKayttoliittyma;
            objKayttoliittyma = new kayttoliittyma;
            objKayttoliittyma->show();
            timernostarahaa->stop();
            timerCounternostarahaa = 0;
            timerkayttoliittyma->start(1000);
            this->close();
        }

    }
}
void nostarahaa::CDkysely()
{
    if(luottoraja == "0.00"){
        CredittaiDebit = 2;
    }
    else {
            msgBox = new QMessageBox;
            msgBox->setText("Valitse Credit tai Debit");
            QAbstractButton *debit = msgBox->addButton(tr("Debit"),(QMessageBox::ActionRole));
            QAbstractButton *credit = msgBox->addButton(tr("Credit"),(QMessageBox::ActionRole));
            QTimer::singleShot(10000, msgBox, SLOT(close()));
            msgBox->exec();
            if (msgBox->clickedButton() == debit)
               {
                   qDebug() <<"debit valittu";
                   CredittaiDebit = 2;
                   timerCounternostarahaa = 0;
               }
            if (msgBox->clickedButton() == credit)
               {
                   qDebug() <<"credit valittu";
                   CredittaiDebit = 1;
                   timerCounternostarahaa = 0;
               }

          }
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
       luottoraja+=QString::number(json_obj["luottoraja"].toDouble(),'f',2);
       this-> CDkysely();
       ui->etunimilbl->setText("Etunimi: "+etunimi);
       ui->sukunimilbl->setText("Sukunimi: "+sukunimi);
       ui->hetulbl->setText("Henkilöturvatunnus: "+hetu);
       ui->puhlbl->setText("Puhelinnumero: "+puhelinnumero);
       ui->osoitelbl->setText("Osoite: "+osoite);
       if(CredittaiDebit == 2){
           ui->saldolbl->setText("Saldo: "+saldo +" €");
       }
       if(CredittaiDebit == 1){
           ui->saldolbl->setText("Luottoraja: "+luottoraja +" €");
       }

    }

    reply->deleteLater();
}
void nostarahaa::updateSaldoSlot (QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
}

void nostarahaa::on_nappiNosta20_clicked()
{
    saatuNostomaara = "20";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(20);
}


void nostarahaa::on_nappiNosta40_clicked()
{
    saatuNostomaara = "40";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(40);
}

void nostarahaa::on_nappiNosta60_clicked()
{
    saatuNostomaara = "60";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(60);
}

void nostarahaa::on_nappiNosta100_clicked()
{
    saatuNostomaara = "100";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(100);
}

void nostarahaa::on_nappiNosta200_clicked()
{
    saatuNostomaara = "200";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(200);
}

void nostarahaa::on_nappiNosta500_clicked()
{
    saatuNostomaara = "500";
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this-> laskuri(500);
}

void nostarahaa::on_nostoNappi_clicked()
{
    saatuNostomaara = (ui->nostoTaulu->text());
    double nosto = (ui->nostoTaulu->text().toDouble());
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    this->laskuri(nosto);
}

void nostarahaa::on_nappiSulje_clicked()
{
    timernostarahaa->stop();
    timerkayttoliittyma->start(1000);
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    kayttoliittyma  *objKayttoliittyma;
    objKayttoliittyma = new kayttoliittyma;
    objKayttoliittyma->show();
    this->close();

}

void nostarahaa::menuTimerSlotNosta()
{
    timerCounternostarahaa++;
    qDebug()<<timerCounternostarahaa;
    if(timerCounternostarahaa == 30)
    {
        timernostarahaa->stop();
        timerCounternostarahaa = 0;
        disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
        timerHuomautus->stop();
        timerCounterHuomautus = 0;
        disconnect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
        MainWindow  *objmainwindow;
        objmainwindow = new MainWindow;
        objmainwindow->show();
        this->close();
    }
}

void nostarahaa::huomautusTimer()
{
    timerCounterHuomautus++;
    qDebug()<<timerCounterHuomautus<<"jaajaahuomautus";
    timernostarahaa->stop();
    timerCounternostarahaa = 0;
    disconnect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
    if(timerCounterHuomautus == 10)
    {
        connect(timernostarahaa,SIGNAL(timeout()), this, SLOT(menuTimerSlotNosta()));
        timernostarahaa->start(1000);
        kayttoliittyma *objkayttoliittyma;
        objkayttoliittyma = new kayttoliittyma;
        timerHuomautus->stop();
        timerCounterHuomautus = 0;
        disconnect(timerHuomautus,SIGNAL(timeout()), this, SLOT(huomautusTimer()));
        objkayttoliittyma->show();
        this->close();
    }
}

void nostarahaa::on_nappikorjaa_clicked()
{
    timerCounternostarahaa = 0;
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
}
