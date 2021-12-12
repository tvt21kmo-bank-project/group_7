/********************************************************************************
** Form generated from reading UI file 'naytasaldo.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYTASALDO_H
#define UI_NAYTASALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_naytaSaldo
{
public:
    QWidget *centralwidget;
    QPushButton *nappiPalaa;
    QLabel *tiliNimilbl;
    QLabel *tilinumerolbl;
    QLabel *saldolbl;
    QPushButton *nappiSaldoni;
    QLabel *tilinumerotxtlbl;
    QLabel *saldotxtlbl;
    QLabel *eurolbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *naytaSaldo)
    {
        if (naytaSaldo->objectName().isEmpty())
            naytaSaldo->setObjectName(QString::fromUtf8("naytaSaldo"));
        naytaSaldo->resize(871, 658);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        naytaSaldo->setPalette(palette);
        centralwidget = new QWidget(naytaSaldo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nappiPalaa = new QPushButton(centralwidget);
        nappiPalaa->setObjectName(QString::fromUtf8("nappiPalaa"));
        nappiPalaa->setGeometry(QRect(690, 0, 171, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        nappiPalaa->setFont(font);
        tiliNimilbl = new QLabel(centralwidget);
        tiliNimilbl->setObjectName(QString::fromUtf8("tiliNimilbl"));
        tiliNimilbl->setGeometry(QRect(160, 140, 431, 41));
        QPalette palette1;
        QBrush brush4(QColor(0, 85, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        tiliNimilbl->setPalette(palette1);
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        tiliNimilbl->setFont(font1);
        tilinumerolbl = new QLabel(centralwidget);
        tilinumerolbl->setObjectName(QString::fromUtf8("tilinumerolbl"));
        tilinumerolbl->setGeometry(QRect(410, 220, 301, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        tilinumerolbl->setPalette(palette2);
        tilinumerolbl->setFont(font1);
        saldolbl = new QLabel(centralwidget);
        saldolbl->setObjectName(QString::fromUtf8("saldolbl"));
        saldolbl->setGeometry(QRect(410, 310, 341, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        saldolbl->setPalette(palette3);
        saldolbl->setFont(font1);
        nappiSaldoni = new QPushButton(centralwidget);
        nappiSaldoni->setObjectName(QString::fromUtf8("nappiSaldoni"));
        nappiSaldoni->setGeometry(QRect(10, 0, 171, 31));
        nappiSaldoni->setFont(font);
        tilinumerotxtlbl = new QLabel(centralwidget);
        tilinumerotxtlbl->setObjectName(QString::fromUtf8("tilinumerotxtlbl"));
        tilinumerotxtlbl->setGeometry(QRect(130, 220, 231, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        tilinumerotxtlbl->setPalette(palette4);
        tilinumerotxtlbl->setFont(font1);
        saldotxtlbl = new QLabel(centralwidget);
        saldotxtlbl->setObjectName(QString::fromUtf8("saldotxtlbl"));
        saldotxtlbl->setGeometry(QRect(230, 310, 131, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        saldotxtlbl->setPalette(palette5);
        saldotxtlbl->setFont(font1);
        eurolbl = new QLabel(centralwidget);
        eurolbl->setObjectName(QString::fromUtf8("eurolbl"));
        eurolbl->setGeometry(QRect(780, 310, 51, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        eurolbl->setPalette(palette6);
        eurolbl->setFont(font1);
        naytaSaldo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(naytaSaldo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 871, 20));
        naytaSaldo->setMenuBar(menubar);
        statusbar = new QStatusBar(naytaSaldo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        naytaSaldo->setStatusBar(statusbar);

        retranslateUi(naytaSaldo);

        QMetaObject::connectSlotsByName(naytaSaldo);
    } // setupUi

    void retranslateUi(QMainWindow *naytaSaldo)
    {
        naytaSaldo->setWindowTitle(QCoreApplication::translate("naytaSaldo", "MainWindow", nullptr));
        nappiPalaa->setText(QCoreApplication::translate("naytaSaldo", "Palaa", nullptr));
        tiliNimilbl->setText(QString());
        tilinumerolbl->setText(QString());
        saldolbl->setText(QString());
        nappiSaldoni->setText(QCoreApplication::translate("naytaSaldo", "N\303\244yt\303\244 Saldo", nullptr));
        tilinumerotxtlbl->setText(QString());
        saldotxtlbl->setText(QString());
        eurolbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class naytaSaldo: public Ui_naytaSaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTASALDO_H
