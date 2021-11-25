#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objPIN = new MainWindow2;
    QPixmap pix(":/resources/img/logo.jpg");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
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

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::nappiapainettu()
{
    QPushButton *button = (QPushButton*)sender();

    double numero;
    QString uusinumero;

    numero = (ui->hankiID->text() + button->text()).toDouble();

    uusinumero = QString::number(numero);

    ui->hankiID->setText(uusinumero);

}

void MainWindow::on_nappikorjaa_clicked()
{
    foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
       le->clear();
    }
}


void MainWindow::on_nappiok_clicked()
{
    saatuID = (ui->hankiID->text());
    QMessageBox::StandardButton reply;

    if((saatuID == "12" && counterLoginfailedPekka == 3) || (saatuID == "76" && counterLoginfailedMaija == 3) || (saatuID == "21" && counterLoginfailedHarry == 3) || (saatuID == "31" && counterLoginfailedHilleri == 3) || (saatuID == "65" && counterLoginfailedHyvant == 3))
    {
        timer->stop();
        reply = QMessageBox::question(this, "Test", "PIN-koodia yritetty 3 kertaa väärin ja tilisi on lukittu. Ole yhteydessä pankkiisi.",
                                      QMessageBox::Ok|QMessageBox::Ok);
        if (reply == QMessageBox::Ok)
        {
            ui->hankiID->setText("");
        }
    }

    else
    {
        objPIN->show();
        this->close();
        timer->start(1000);
    }
}
