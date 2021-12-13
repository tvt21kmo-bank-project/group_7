/********************************************************************************
** Form generated from reading UI file 'tilitapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILITAPAHTUMAT_H
#define UI_TILITAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tilitapahtumat
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
    QLabel *lblhetu;
    QPushButton *lopetanappi;
    QLabel *label_3;
    QLineEdit *naytto;
    QTableWidget *taulukko;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_12;
    QLabel *lblosoite;
    QLabel *lblpuhelin;
    QLabel *lblsukunimi;
    QLabel *lbletunimi;
    QLabel *label_4;
    QPushButton *naytatapahtumat;
    QLabel *otsikko1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tilitapahtumat)
    {
        if (tilitapahtumat->objectName().isEmpty())
            tilitapahtumat->setObjectName(QStringLiteral("tilitapahtumat"));
        tilitapahtumat->resize(1920, 1061);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        tilitapahtumat->setPalette(palette);
        centralwidget = new QWidget(tilitapahtumat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(630, 340, 200, 25));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        lblhetu = new QLabel(centralwidget);
        lblhetu->setObjectName(QStringLiteral("lblhetu"));
        lblhetu->setGeometry(QRect(830, 300, 200, 25));
        lblhetu->setFont(font);
        lblhetu->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lopetanappi = new QPushButton(centralwidget);
        lopetanappi->setObjectName(QStringLiteral("lopetanappi"));
        lopetanappi->setGeometry(QRect(1620, 900, 271, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lopetanappi->setFont(font1);
        lopetanappi->setCursor(QCursor(Qt::PointingHandCursor));
        lopetanappi->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(630, 280, 200, 25));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        naytto = new QLineEdit(centralwidget);
        naytto->setObjectName(QStringLiteral("naytto"));
        naytto->setGeometry(QRect(580, 200, 561, 791));
        naytto->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        taulukko = new QTableWidget(centralwidget);
        taulukko->setObjectName(QStringLiteral("taulukko"));
        taulukko->setGeometry(QRect(610, 410, 511, 561));
        taulukko->setFont(font);
        taulukko->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(630, 320, 200, 25));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 260, 200, 25));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(760, 210, 221, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(790, 370, 201, 31));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label_12->setFont(font3);
        label_12->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        lblosoite = new QLabel(centralwidget);
        lblosoite->setObjectName(QStringLiteral("lblosoite"));
        lblosoite->setGeometry(QRect(830, 340, 200, 25));
        lblosoite->setFont(font);
        lblosoite->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        lblpuhelin = new QLabel(centralwidget);
        lblpuhelin->setObjectName(QStringLiteral("lblpuhelin"));
        lblpuhelin->setGeometry(QRect(830, 320, 200, 25));
        lblpuhelin->setFont(font);
        lblpuhelin->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        lblsukunimi = new QLabel(centralwidget);
        lblsukunimi->setObjectName(QStringLiteral("lblsukunimi"));
        lblsukunimi->setGeometry(QRect(830, 280, 200, 25));
        lblsukunimi->setFont(font);
        lblsukunimi->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        lbletunimi = new QLabel(centralwidget);
        lbletunimi->setObjectName(QStringLiteral("lbletunimi"));
        lbletunimi->setGeometry(QRect(830, 260, 200, 25));
        lbletunimi->setFont(font);
        lbletunimi->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(630, 300, 200, 25));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        naytatapahtumat = new QPushButton(centralwidget);
        naytatapahtumat->setObjectName(QStringLiteral("naytatapahtumat"));
        naytatapahtumat->setGeometry(QRect(280, 200, 291, 91));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        naytatapahtumat->setFont(font4);
        otsikko1 = new QLabel(centralwidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(140, 40, 1731, 91));
        QPalette palette1;
        QBrush brush2(QColor(0, 85, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(127, 170, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(63, 127, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(0, 42, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(0, 56, 170, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        otsikko1->setPalette(palette1);
        QFont font5;
        font5.setPointSize(35);
        font5.setBold(true);
        font5.setWeight(75);
        otsikko1->setFont(font5);
        tilitapahtumat->setCentralWidget(centralwidget);
        naytto->raise();
        label_6->raise();
        lblhetu->raise();
        lopetanappi->raise();
        label_3->raise();
        taulukko->raise();
        label_5->raise();
        label_2->raise();
        label->raise();
        label_12->raise();
        lblosoite->raise();
        lblpuhelin->raise();
        lblsukunimi->raise();
        lbletunimi->raise();
        label_4->raise();
        naytatapahtumat->raise();
        otsikko1->raise();
        menubar = new QMenuBar(tilitapahtumat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        tilitapahtumat->setMenuBar(menubar);
        statusbar = new QStatusBar(tilitapahtumat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tilitapahtumat->setStatusBar(statusbar);

        retranslateUi(tilitapahtumat);

        lopetanappi->setDefault(true);
        naytatapahtumat->setDefault(true);


        QMetaObject::connectSlotsByName(tilitapahtumat);
    } // setupUi

    void retranslateUi(QMainWindow *tilitapahtumat)
    {
        tilitapahtumat->setWindowTitle(QApplication::translate("tilitapahtumat", "MainWindow", Q_NULLPTR));
        label_6->setText(QApplication::translate("tilitapahtumat", "Osoite:", Q_NULLPTR));
        lblhetu->setText(QString());
        lopetanappi->setText(QApplication::translate("tilitapahtumat", "LOPETA", Q_NULLPTR));
        label_3->setText(QApplication::translate("tilitapahtumat", "Sukunimi:", Q_NULLPTR));
        label_5->setText(QApplication::translate("tilitapahtumat", "Puhelinnumero:", Q_NULLPTR));
        label_2->setText(QApplication::translate("tilitapahtumat", "Etunimi:", Q_NULLPTR));
        label->setText(QApplication::translate("tilitapahtumat", "TILITAPAHTUMAT", Q_NULLPTR));
        label_12->setText(QApplication::translate("tilitapahtumat", "Tilitapahtumat:", Q_NULLPTR));
        lblosoite->setText(QString());
        lblpuhelin->setText(QString());
        lblsukunimi->setText(QString());
        lbletunimi->setText(QString());
        label_4->setText(QApplication::translate("tilitapahtumat", "Henkil\303\266turvatunnus:", Q_NULLPTR));
        naytatapahtumat->setText(QApplication::translate("tilitapahtumat", "N\303\244yt\303\244 tilitapahtumasi", Q_NULLPTR));
        otsikko1->setText(QApplication::translate("tilitapahtumat", "N\303\244ytt\303\244\303\244ksesi tilitapahtumasi paina \"N\303\244yt\303\244 tilitapahtumasi\" -painiketta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tilitapahtumat: public Ui_tilitapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILITAPAHTUMAT_H
