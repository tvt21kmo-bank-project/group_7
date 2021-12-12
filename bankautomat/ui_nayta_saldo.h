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
    QLabel *saldolbl;
    QPushButton *nappiPalaa;
    QLabel *tiliNimilbl;
    QLabel *tilinumerolbl;
    QLabel *ohje;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nayta_saldo)
    {
        if (nayta_saldo->objectName().isEmpty())
            nayta_saldo->setObjectName(QString::fromUtf8("nayta_saldo"));
        nayta_saldo->resize(890, 645);
        QPalette palette;
        QBrush brush(QColor(0, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(227, 227, 227, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(160, 160, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(105, 105, 105, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(0, 120, 215, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush8);
        QBrush brush9(QColor(255, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush9);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush11);
        QBrush brush12(QColor(255, 255, 220, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush14);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        QBrush brush15(QColor(120, 120, 120, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        QBrush brush16(QColor(247, 247, 247, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush16);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        QBrush brush17(QColor(0, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush17);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        nayta_saldo->setPalette(palette);
        centralwidget = new QWidget(nayta_saldo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nappiSaldoni = new QPushButton(centralwidget);
        nappiSaldoni->setObjectName(QString::fromUtf8("nappiSaldoni"));
        nappiSaldoni->setGeometry(QRect(0, 0, 171, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        nappiSaldoni->setFont(font);
        saldolbl = new QLabel(centralwidget);
        saldolbl->setObjectName(QString::fromUtf8("saldolbl"));
        saldolbl->setGeometry(QRect(40, 420, 731, 91));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        saldolbl->setPalette(palette1);
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        saldolbl->setFont(font1);
        nappiPalaa = new QPushButton(centralwidget);
        nappiPalaa->setObjectName(QString::fromUtf8("nappiPalaa"));
        nappiPalaa->setGeometry(QRect(630, 0, 171, 31));
        nappiPalaa->setFont(font);
        tiliNimilbl = new QLabel(centralwidget);
        tiliNimilbl->setObjectName(QString::fromUtf8("tiliNimilbl"));
        tiliNimilbl->setGeometry(QRect(40, 140, 731, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        tiliNimilbl->setPalette(palette2);
        tiliNimilbl->setFont(font1);
        tilinumerolbl = new QLabel(centralwidget);
        tilinumerolbl->setObjectName(QString::fromUtf8("tilinumerolbl"));
        tilinumerolbl->setGeometry(QRect(40, 280, 731, 101));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        tilinumerolbl->setPalette(palette3);
        tilinumerolbl->setFont(font1);
        ohje = new QLabel(centralwidget);
        ohje->setObjectName(QString::fromUtf8("ohje"));
        ohje->setGeometry(QRect(70, 40, 701, 71));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush18(QColor(127, 170, 255, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush18);
        QBrush brush19(QColor(63, 127, 255, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush19);
        QBrush brush20(QColor(0, 42, 127, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush20);
        QBrush brush21(QColor(0, 56, 170, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush18);
        palette4.setBrush(QPalette::Active, QPalette::NoRole, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::NoRole, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush21);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::NoRole, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        ohje->setPalette(palette4);
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        ohje->setFont(font2);
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
        saldolbl->setText(QString());
        nappiPalaa->setText(QCoreApplication::translate("nayta_saldo", "Palaa", nullptr));
        tiliNimilbl->setText(QString());
        tilinumerolbl->setText(QString());
        ohje->setText(QCoreApplication::translate("nayta_saldo", "Tarkastaaksesi saldosi paina \"N\303\244yt\303\244 Saldo\" -painiketta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nayta_saldo: public Ui_nayta_saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTA_SALDO_H
