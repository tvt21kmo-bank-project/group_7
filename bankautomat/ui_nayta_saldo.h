/********************************************************************************
** Form generated from reading UI file 'nayta_saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYTA_SALDO_H
#define UI_NAYTA_SALDO_H

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

class Ui_nayta_saldo
{
public:
    QWidget *centralwidget;
    QPushButton *nappiPalaa;
    QLabel *ohje;
    QLabel *tilinumerolbl;
    QLabel *saldolbl;
    QLabel *tiliNimilbl;
    QPushButton *nappiSaldoni;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nayta_saldo)
    {
        if (nayta_saldo->objectName().isEmpty())
            nayta_saldo->setObjectName(QStringLiteral("nayta_saldo"));
        nayta_saldo->resize(1920, 1061);
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
        nayta_saldo->setPalette(palette);
        centralwidget = new QWidget(nayta_saldo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        nappiPalaa = new QPushButton(centralwidget);
        nappiPalaa->setObjectName(QStringLiteral("nappiPalaa"));
        nappiPalaa->setGeometry(QRect(1590, 10, 321, 101));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        nappiPalaa->setFont(font);
        ohje = new QLabel(centralwidget);
        ohje->setObjectName(QStringLiteral("ohje"));
        ohje->setGeometry(QRect(10, 150, 1341, 91));
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
        ohje->setPalette(palette1);
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        ohje->setFont(font1);
        tilinumerolbl = new QLabel(centralwidget);
        tilinumerolbl->setObjectName(QStringLiteral("tilinumerolbl"));
        tilinumerolbl->setGeometry(QRect(30, 460, 731, 101));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush8(QColor(120, 120, 120, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        tilinumerolbl->setPalette(palette2);
        QFont font2;
        font2.setPointSize(50);
        font2.setBold(true);
        font2.setWeight(75);
        tilinumerolbl->setFont(font2);
        saldolbl = new QLabel(centralwidget);
        saldolbl->setObjectName(QStringLiteral("saldolbl"));
        saldolbl->setGeometry(QRect(30, 600, 731, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        saldolbl->setPalette(palette3);
        saldolbl->setFont(font2);
        tiliNimilbl = new QLabel(centralwidget);
        tiliNimilbl->setObjectName(QStringLiteral("tiliNimilbl"));
        tiliNimilbl->setGeometry(QRect(30, 320, 731, 91));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        tiliNimilbl->setPalette(palette4);
        tiliNimilbl->setFont(font2);
        nappiSaldoni = new QPushButton(centralwidget);
        nappiSaldoni->setObjectName(QStringLiteral("nappiSaldoni"));
        nappiSaldoni->setGeometry(QRect(10, 10, 321, 101));
        nappiSaldoni->setFont(font);
        nayta_saldo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nayta_saldo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        nayta_saldo->setMenuBar(menubar);
        statusbar = new QStatusBar(nayta_saldo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        nayta_saldo->setStatusBar(statusbar);

        retranslateUi(nayta_saldo);

        QMetaObject::connectSlotsByName(nayta_saldo);
    } // setupUi

    void retranslateUi(QMainWindow *nayta_saldo)
    {
        nayta_saldo->setWindowTitle(QApplication::translate("nayta_saldo", "MainWindow", Q_NULLPTR));
        nappiPalaa->setText(QApplication::translate("nayta_saldo", "LOPETA", Q_NULLPTR));
        ohje->setText(QApplication::translate("nayta_saldo", "Tarkastaaksesi saldosi paina \"N\303\244yt\303\244 Saldo\" -painiketta", Q_NULLPTR));
        tilinumerolbl->setText(QString());
        saldolbl->setText(QString());
        tiliNimilbl->setText(QString());
        nappiSaldoni->setText(QApplication::translate("nayta_saldo", "N\303\244yt\303\244 Saldo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class nayta_saldo: public Ui_nayta_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTA_SALDO_H
