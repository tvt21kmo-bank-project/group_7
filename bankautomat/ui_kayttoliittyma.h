/********************************************************************************
** Form generated from reading UI file 'kayttoliittyma.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAYTTOLIITTYMA_H
#define UI_KAYTTOLIITTYMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kayttoliittyma
{
public:
    QWidget *centralwidget;
    QPushButton *nappiNosta;
    QPushButton *nappiSaldo;
    QPushButton *nappiTilitapahtuma;
    QPushButton *nappiLahjoita;
    QPushButton *nappiUloskirjaus;
    QLabel *etunimilbl;
    QLabel *sukunimilbl;
    QPushButton *nappikayttaja;
    QLabel *hetulbl;
    QLabel *puhlbl;
    QLabel *osoitelbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kayttoliittyma)
    {
        if (kayttoliittyma->objectName().isEmpty())
            kayttoliittyma->setObjectName(QString::fromUtf8("kayttoliittyma"));
        kayttoliittyma->resize(674, 469);
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
        kayttoliittyma->setPalette(palette);
        centralwidget = new QWidget(kayttoliittyma);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nappiNosta = new QPushButton(centralwidget);
        nappiNosta->setObjectName(QString::fromUtf8("nappiNosta"));
        nappiNosta->setGeometry(QRect(0, 60, 171, 61));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        nappiNosta->setFont(font);
        nappiNosta->setCursor(QCursor(Qt::PointingHandCursor));
        nappiSaldo = new QPushButton(centralwidget);
        nappiSaldo->setObjectName(QString::fromUtf8("nappiSaldo"));
        nappiSaldo->setGeometry(QRect(520, 60, 151, 61));
        nappiSaldo->setFont(font);
        nappiSaldo->setCursor(QCursor(Qt::PointingHandCursor));
        nappiTilitapahtuma = new QPushButton(centralwidget);
        nappiTilitapahtuma->setObjectName(QString::fromUtf8("nappiTilitapahtuma"));
        nappiTilitapahtuma->setGeometry(QRect(0, 360, 221, 61));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        nappiTilitapahtuma->setFont(font1);
        nappiTilitapahtuma->setCursor(QCursor(Qt::PointingHandCursor));
        nappiLahjoita = new QPushButton(centralwidget);
        nappiLahjoita->setObjectName(QString::fromUtf8("nappiLahjoita"));
        nappiLahjoita->setGeometry(QRect(420, 360, 251, 61));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        nappiLahjoita->setFont(font2);
        nappiLahjoita->setCursor(QCursor(Qt::PointingHandCursor));
        nappiUloskirjaus = new QPushButton(centralwidget);
        nappiUloskirjaus->setObjectName(QString::fromUtf8("nappiUloskirjaus"));
        nappiUloskirjaus->setGeometry(QRect(460, 0, 211, 31));
        nappiUloskirjaus->setFont(font2);
        nappiUloskirjaus->setCursor(QCursor(Qt::PointingHandCursor));
        etunimilbl = new QLabel(centralwidget);
        etunimilbl->setObjectName(QString::fromUtf8("etunimilbl"));
        etunimilbl->setGeometry(QRect(220, 160, 411, 41));
        QPalette palette1;
        QBrush brush2(QColor(0, 85, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        etunimilbl->setPalette(palette1);
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        etunimilbl->setFont(font3);
        sukunimilbl = new QLabel(centralwidget);
        sukunimilbl->setObjectName(QString::fromUtf8("sukunimilbl"));
        sukunimilbl->setGeometry(QRect(200, 190, 421, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sukunimilbl->sizePolicy().hasHeightForWidth());
        sukunimilbl->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        sukunimilbl->setPalette(palette2);
        sukunimilbl->setFont(font3);
        nappikayttaja = new QPushButton(centralwidget);
        nappikayttaja->setObjectName(QString::fromUtf8("nappikayttaja"));
        nappikayttaja->setGeometry(QRect(0, 0, 211, 31));
        nappikayttaja->setFont(font2);
        nappikayttaja->setCursor(QCursor(Qt::PointingHandCursor));
        hetulbl = new QLabel(centralwidget);
        hetulbl->setObjectName(QString::fromUtf8("hetulbl"));
        hetulbl->setGeometry(QRect(60, 220, 551, 31));
        sizePolicy.setHeightForWidth(hetulbl->sizePolicy().hasHeightForWidth());
        hetulbl->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush);
        hetulbl->setPalette(palette3);
        hetulbl->setFont(font3);
        puhlbl = new QLabel(centralwidget);
        puhlbl->setObjectName(QString::fromUtf8("puhlbl"));
        puhlbl->setGeometry(QRect(120, 250, 501, 31));
        sizePolicy.setHeightForWidth(puhlbl->sizePolicy().hasHeightForWidth());
        puhlbl->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        puhlbl->setPalette(palette4);
        puhlbl->setFont(font3);
        osoitelbl = new QLabel(centralwidget);
        osoitelbl->setObjectName(QString::fromUtf8("osoitelbl"));
        osoitelbl->setGeometry(QRect(240, 280, 391, 31));
        sizePolicy.setHeightForWidth(osoitelbl->sizePolicy().hasHeightForWidth());
        osoitelbl->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush);
        osoitelbl->setPalette(palette5);
        osoitelbl->setFont(font3);
        kayttoliittyma->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kayttoliittyma);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 674, 21));
        kayttoliittyma->setMenuBar(menubar);
        statusbar = new QStatusBar(kayttoliittyma);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        kayttoliittyma->setStatusBar(statusbar);

        retranslateUi(kayttoliittyma);

        nappiNosta->setDefault(true);
        nappiSaldo->setDefault(true);
        nappiTilitapahtuma->setDefault(true);
        nappiLahjoita->setDefault(true);
        nappiUloskirjaus->setDefault(true);
        nappikayttaja->setDefault(true);


        QMetaObject::connectSlotsByName(kayttoliittyma);
    } // setupUi

    void retranslateUi(QMainWindow *kayttoliittyma)
    {
        kayttoliittyma->setWindowTitle(QCoreApplication::translate("kayttoliittyma", "MainWindow", nullptr));
        nappiNosta->setText(QCoreApplication::translate("kayttoliittyma", "Nosta rahaa", nullptr));
        nappiSaldo->setText(QCoreApplication::translate("kayttoliittyma", "N\303\244yt\303\244 saldo", nullptr));
        nappiTilitapahtuma->setText(QCoreApplication::translate("kayttoliittyma", "Selaa tilitapahtumia", nullptr));
        nappiLahjoita->setText(QCoreApplication::translate("kayttoliittyma", "Lahjoita hyv\303\244ntekev\303\244isyyteen", nullptr));
        nappiUloskirjaus->setText(QCoreApplication::translate("kayttoliittyma", "Kirjaudu ulos", nullptr));
        etunimilbl->setText(QString());
        sukunimilbl->setText(QString());
        nappikayttaja->setText(QCoreApplication::translate("kayttoliittyma", "N\303\244yt\303\244 tietosi", nullptr));
        hetulbl->setText(QString());
        puhlbl->setText(QString());
        osoitelbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kayttoliittyma: public Ui_kayttoliittyma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAYTTOLIITTYMA_H
