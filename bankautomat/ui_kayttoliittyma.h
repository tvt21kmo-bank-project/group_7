/********************************************************************************
** Form generated from reading UI file 'kayttoliittyma.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAYTTOLIITTYMA_H
#define UI_KAYTTOLIITTYMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLabel *otsikko1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *kayttoliittyma)
    {
        if (kayttoliittyma->objectName().isEmpty())
            kayttoliittyma->setObjectName(QStringLiteral("kayttoliittyma"));
        kayttoliittyma->resize(1920, 1061);
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
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        nappiNosta = new QPushButton(centralwidget);
        nappiNosta->setObjectName(QStringLiteral("nappiNosta"));
        nappiNosta->setGeometry(QRect(10, 100, 631, 231));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        nappiNosta->setFont(font);
        nappiNosta->setCursor(QCursor(Qt::PointingHandCursor));
        nappiSaldo = new QPushButton(centralwidget);
        nappiSaldo->setObjectName(QStringLiteral("nappiSaldo"));
        nappiSaldo->setGeometry(QRect(1280, 100, 631, 231));
        nappiSaldo->setFont(font);
        nappiSaldo->setCursor(QCursor(Qt::PointingHandCursor));
        nappiTilitapahtuma = new QPushButton(centralwidget);
        nappiTilitapahtuma->setObjectName(QStringLiteral("nappiTilitapahtuma"));
        nappiTilitapahtuma->setGeometry(QRect(10, 340, 631, 231));
        nappiTilitapahtuma->setFont(font);
        nappiTilitapahtuma->setCursor(QCursor(Qt::PointingHandCursor));
        nappiLahjoita = new QPushButton(centralwidget);
        nappiLahjoita->setObjectName(QStringLiteral("nappiLahjoita"));
        nappiLahjoita->setGeometry(QRect(1280, 340, 631, 231));
        nappiLahjoita->setFont(font);
        nappiLahjoita->setCursor(QCursor(Qt::PointingHandCursor));
        nappiUloskirjaus = new QPushButton(centralwidget);
        nappiUloskirjaus->setObjectName(QStringLiteral("nappiUloskirjaus"));
        nappiUloskirjaus->setGeometry(QRect(1310, 900, 601, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        nappiUloskirjaus->setFont(font1);
        nappiUloskirjaus->setCursor(QCursor(Qt::PointingHandCursor));
        etunimilbl = new QLabel(centralwidget);
        etunimilbl->setObjectName(QStringLiteral("etunimilbl"));
        etunimilbl->setGeometry(QRect(10, 580, 621, 61));
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
        etunimilbl->setFont(font);
        sukunimilbl = new QLabel(centralwidget);
        sukunimilbl->setObjectName(QStringLiteral("sukunimilbl"));
        sukunimilbl->setGeometry(QRect(10, 640, 621, 61));
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
        sukunimilbl->setFont(font);
        nappikayttaja = new QPushButton(centralwidget);
        nappikayttaja->setObjectName(QStringLiteral("nappikayttaja"));
        nappikayttaja->setGeometry(QRect(10, 900, 601, 91));
        nappikayttaja->setFont(font1);
        nappikayttaja->setCursor(QCursor(Qt::PointingHandCursor));
        hetulbl = new QLabel(centralwidget);
        hetulbl->setObjectName(QStringLiteral("hetulbl"));
        hetulbl->setGeometry(QRect(10, 700, 621, 61));
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
        hetulbl->setFont(font);
        puhlbl = new QLabel(centralwidget);
        puhlbl->setObjectName(QStringLiteral("puhlbl"));
        puhlbl->setGeometry(QRect(10, 760, 621, 61));
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
        puhlbl->setFont(font);
        osoitelbl = new QLabel(centralwidget);
        osoitelbl->setObjectName(QStringLiteral("osoitelbl"));
        osoitelbl->setGeometry(QRect(10, 820, 621, 61));
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
        osoitelbl->setFont(font);
        otsikko1 = new QLabel(centralwidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(340, 0, 1291, 91));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush4(QColor(127, 170, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(63, 127, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(0, 42, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(0, 56, 170, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Active, QPalette::NoRole, brush);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        otsikko1->setPalette(palette6);
        QFont font2;
        font2.setPointSize(35);
        font2.setBold(true);
        font2.setWeight(75);
        otsikko1->setFont(font2);
        otsikko1->setLayoutDirection(Qt::RightToLeft);
        kayttoliittyma->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kayttoliittyma);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        kayttoliittyma->setMenuBar(menubar);
        statusbar = new QStatusBar(kayttoliittyma);
        statusbar->setObjectName(QStringLiteral("statusbar"));
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
        kayttoliittyma->setWindowTitle(QApplication::translate("kayttoliittyma", "MainWindow", Q_NULLPTR));
        nappiNosta->setText(QApplication::translate("kayttoliittyma", "Nosta rahaa", Q_NULLPTR));
        nappiSaldo->setText(QApplication::translate("kayttoliittyma", "N\303\244yt\303\244 saldo", Q_NULLPTR));
        nappiTilitapahtuma->setText(QApplication::translate("kayttoliittyma", "Selaa tilitapahtumia", Q_NULLPTR));
        nappiLahjoita->setText(QApplication::translate("kayttoliittyma", "Lahjoita hyv\303\244ntekev\303\244isyyteen", Q_NULLPTR));
        nappiUloskirjaus->setText(QApplication::translate("kayttoliittyma", "Kirjaudu ulos", Q_NULLPTR));
        etunimilbl->setText(QString());
        sukunimilbl->setText(QString());
        nappikayttaja->setText(QApplication::translate("kayttoliittyma", "N\303\244yt\303\244 tietosi", Q_NULLPTR));
        hetulbl->setText(QString());
        puhlbl->setText(QString());
        osoitelbl->setText(QString());
        otsikko1->setText(QApplication::translate("kayttoliittyma", "Tervetuloa! Valitse toiminnoista mit\303\244 haluat tehd\303\244:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kayttoliittyma: public Ui_kayttoliittyma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAYTTOLIITTYMA_H
