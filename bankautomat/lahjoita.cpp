#include "lahjoita.h"
#include "ui_lahjoita.h"
#include "mainwindow.h"
#include "mainwindow2.h"

#include <QMessageBox>
#include <QTimer>

lahjoita::lahjoita(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lahjoita)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/lahjoita.jpg");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    connect(timerlahjoita,SIGNAL(timeout()), this, SLOT(menuTimerSlotlahjoita()));
    connect(ui->numero0lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero1lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero2lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero3lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero4lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero5lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero6lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero7lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero8lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
    connect(ui->numero9lahj, SIGNAL(released()),this,SLOT(nappiapainettu()));
}

lahjoita::~lahjoita()
{
    delete ui;
}

void lahjoita::nappiapainettu()
{
    timerCounterlahjoita = 0;
    QPushButton *button = (QPushButton*)sender();
    float numero;
    QString uusinumero;
    numero = (ui->hankiSummalahj->text() + button->text()).toFloat();
    uusinumero = QString::number(numero);
    ui->hankiSummalahj->setText(uusinumero);
}

void lahjoita::menuTimerSlotlahjoita()
{
    timerCounterlahjoita++;
    qDebug()<<timerCounterlahjoita;
    if(timerCounterlahjoita == 30)
    {
        timerlahjoita->stop();
        timerCounterlahjoita = 0;
        QWidget *koti;
        koti = new MainWindow;
        koti->show();
        this->close();;
        disconnect(timerlahjoita,SIGNAL(timeout()), this, SLOT(menuTimerSlotlahjoita()));
    }
}

void lahjoita::on_nappiLahjoita_clicked()
{
    QString saatuLahjoitus;
    saatuLahjoitus = (ui->hankiSummalahj->text());
    QJsonObject json;
    qDebug()<<saatuLahjoitus<<saatuID;
    json.insert("summa", saatuLahjoitus);
    json.insert("pankkikortti", saatuID);
    json.insert("saatusumma", saatuLahjoitus);
    json.insert("maara", saatuLahjoitus);
    json.insert("lahjoittaja", saatuID);
    timerCounterlahjoita = 0;
    QString site_url="http://localhost:3000/bank/lahjoitus";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    debitManager = new QNetworkAccessManager(this);
    connect(debitManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(lahjoitaSlot(QNetworkReply*)));
    reply = debitManager->post(request, QJsonDocument(json).toJson());
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
}

void lahjoita::lahjoitaSlot(QNetworkReply*)
{
    response_data=reply->readAll();
    qDebug()<<saatuID+response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QMessageBox msg;
    msg.setText("Kiitos lahjoituksestasi! \n Tämä ilmoitus sulkeutuu automaattisesti 10 sekunnissa");
    int cnt = 10;
    QTimer cntDown;
    QObject::connect(&cntDown, &QTimer::timeout, [&msg,&cnt, &cntDown]()->void{
                         if(--cnt < 0){
                             cntDown.stop();
                             msg.close();
                         } else {
                             msg.setText(QString("Kiitos lahjoituksestasi! \n Tämä ilmoitus sulkeutuu automaattisesti %1 sekunnissa").arg(cnt));
                         }
                     });
    cntDown.start(1000);
    msg.exec();
}


void lahjoita::on_nappiPalaa_clicked()
{
    QWidget *objkayttoliittyma;
    objkayttoliittyma = new kayttoliittyma;
    objkayttoliittyma->show();
    this->close();
    timerlahjoita->stop();
    timerCounterlahjoita = 0;
    disconnect(timerlahjoita,SIGNAL(timeout()), this, SLOT(menuTimerSlotlahjoita()));
    timerkayttoliittyma->start(1000);
}

void lahjoita::on_nappikorjaalahj_clicked()
{
    timerCounterlahjoita = 0;
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
}

void lahjoita::huomautusTimer()
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
