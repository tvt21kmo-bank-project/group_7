/********************************************************************************
** Form generated from reading UI file 'nayta_saldo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYTA_SALDO_H
#define UI_NAYTA_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nayta_saldo
{
public:
    QWidget *centralwidget;
    QPushButton *nappiSaldoni;
    QLabel *saldotxtlbl;
    QLabel *tilinumerolbl;
    QPushButton *nappiPalaa;
    QLabel *saldolbl;
    QLabel *tiliNimilbl;
    QLabel *eurolbl;
    QLabel *tilinumerotxtlbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nayta_saldo)
    {
        if (nayta_saldo->objectName().isEmpty())
            nayta_saldo->setObjectName(QString::fromUtf8("nayta_saldo"));
        nayta_saldo->resize(890, 645);
        centralwidget = new QWidget(nayta_saldo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nappiSaldoni = new QPushButton(centralwidget);
        nappiSaldoni->setObjectName(QString::fromUtf8("nappiSaldoni"));
        nappiSaldoni->setGeometry(QRect(0, 0, 171, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        nappiSaldoni->setFont(font);
        saldotxtlbl = new QLabel(centralwidget);
        saldotxtlbl->setObjectName(QString::fromUtf8("saldotxtlbl"));
        saldotxtlbl->setGeometry(QRect(220, 310, 131, 41));
        QPalette palette;
        QBrush brush(QColor(0, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        saldotxtlbl->setPalette(palette);
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        saldotxtlbl->setFont(font1);
        tilinumerolbl = new QLabel(centralwidget);
        tilinumerolbl->setObjectName(QString::fromUtf8("tilinumerolbl"));
        tilinumerolbl->setGeometry(QRect(400, 220, 301, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        tilinumerolbl->setPalette(palette1);
        tilinumerolbl->setFont(font1);
        nappiPalaa = new QPushButton(centralwidget);
        nappiPalaa->setObjectName(QString::fromUtf8("nappiPalaa"));
        nappiPalaa->setGeometry(QRect(630, 0, 171, 31));
        nappiPalaa->setFont(font);
        saldolbl = new QLabel(centralwidget);
        saldolbl->setObjectName(QString::fromUtf8("saldolbl"));
        saldolbl->setGeometry(QRect(400, 310, 341, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        saldolbl->setPalette(palette2);
        saldolbl->setFont(font1);
        tiliNimilbl = new QLabel(centralwidget);
        tiliNimilbl->setObjectName(QString::fromUtf8("tiliNimilbl"));
        tiliNimilbl->setGeometry(QRect(150, 140, 431, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        tiliNimilbl->setPalette(palette3);
        tiliNimilbl->setFont(font1);
        eurolbl = new QLabel(centralwidget);
        eurolbl->setObjectName(QString::fromUtf8("eurolbl"));
        eurolbl->setGeometry(QRect(690, 310, 51, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        eurolbl->setPalette(palette4);
        eurolbl->setFont(font1);
        tilinumerotxtlbl = new QLabel(centralwidget);
        tilinumerotxtlbl->setObjectName(QString::fromUtf8("tilinumerotxtlbl"));
        tilinumerotxtlbl->setGeometry(QRect(120, 220, 231, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        tilinumerotxtlbl->setPalette(palette5);
        tilinumerotxtlbl->setFont(font1);
        nayta_saldo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nayta_saldo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 890, 21));
        nayta_saldo->setMenuBar(menubar);
        statusbar = new QStatusBar(nayta_saldo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        nayta_saldo->setStatusBar(statusbar);

        retranslateUi(nayta_saldo);

        QMetaObject::connectSlotsByName(nayta_saldo);
    } // setupUi

    void retranslateUi(QMainWindow *nayta_saldo)
    {
        nayta_saldo->setWindowTitle(QCoreApplication::translate("nayta_saldo", "MainWindow", nullptr));
        nappiSaldoni->setText(QCoreApplication::translate("nayta_saldo", "N\303\244yt\303\244 Saldo", nullptr));
        saldotxtlbl->setText(QString());
        tilinumerolbl->setText(QString());
        nappiPalaa->setText(QCoreApplication::translate("nayta_saldo", "Palaa", nullptr));
        saldolbl->setText(QString());
        tiliNimilbl->setText(QString());
        eurolbl->setText(QString());
        tilinumerotxtlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nayta_saldo: public Ui_nayta_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTA_SALDO_H
