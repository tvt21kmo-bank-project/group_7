/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QPushButton *numero7;
    QLabel *otsikko1;
    QPushButton *numero5;
    QPushButton *numero0;
    QPushButton *numero3;
    QPushButton *numero9;
    QPushButton *numero4;
    QPushButton *numero8;
    QPushButton *numero1;
    QPushButton *nappiok;
    QLabel *label;
    QPushButton *nappikorjaa;
    QPushButton *numero6;
    QPushButton *numero2;
    QLineEdit *hankiPIN;
    QPushButton *nappiLopeta;
    QLabel *virhelbl;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(630, 541);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow2->setPalette(palette);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        numero7 = new QPushButton(centralwidget);
        numero7->setObjectName(QString::fromUtf8("numero7"));
        numero7->setGeometry(QRect(390, 300, 71, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        numero7->setFont(font);
        numero7->setCursor(QCursor(Qt::PointingHandCursor));
        otsikko1 = new QLabel(centralwidget);
        otsikko1->setObjectName(QString::fromUtf8("otsikko1"));
        otsikko1->setGeometry(QRect(80, 10, 491, 71));
        QPalette palette1;
        QBrush brush1(QColor(0, 85, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 170, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 127, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 42, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 56, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        otsikko1->setPalette(palette1);
        otsikko1->setFont(font);
        numero5 = new QPushButton(centralwidget);
        numero5->setObjectName(QString::fromUtf8("numero5"));
        numero5->setGeometry(QRect(460, 240, 71, 61));
        numero5->setFont(font);
        numero5->setCursor(QCursor(Qt::PointingHandCursor));
        numero0 = new QPushButton(centralwidget);
        numero0->setObjectName(QString::fromUtf8("numero0"));
        numero0->setGeometry(QRect(460, 360, 71, 61));
        numero0->setFont(font);
        numero0->setCursor(QCursor(Qt::PointingHandCursor));
        numero3 = new QPushButton(centralwidget);
        numero3->setObjectName(QString::fromUtf8("numero3"));
        numero3->setGeometry(QRect(530, 180, 71, 61));
        numero3->setFont(font);
        numero3->setCursor(QCursor(Qt::PointingHandCursor));
        numero9 = new QPushButton(centralwidget);
        numero9->setObjectName(QString::fromUtf8("numero9"));
        numero9->setGeometry(QRect(530, 300, 71, 61));
        numero9->setFont(font);
        numero9->setCursor(QCursor(Qt::PointingHandCursor));
        numero4 = new QPushButton(centralwidget);
        numero4->setObjectName(QString::fromUtf8("numero4"));
        numero4->setGeometry(QRect(390, 240, 71, 61));
        numero4->setFont(font);
        numero4->setCursor(QCursor(Qt::PointingHandCursor));
        numero8 = new QPushButton(centralwidget);
        numero8->setObjectName(QString::fromUtf8("numero8"));
        numero8->setGeometry(QRect(460, 300, 71, 61));
        numero8->setFont(font);
        numero8->setCursor(QCursor(Qt::PointingHandCursor));
        numero1 = new QPushButton(centralwidget);
        numero1->setObjectName(QString::fromUtf8("numero1"));
        numero1->setGeometry(QRect(390, 180, 71, 61));
        numero1->setFont(font);
        numero1->setCursor(QCursor(Qt::PointingHandCursor));
        numero1->setFlat(false);
        nappiok = new QPushButton(centralwidget);
        nappiok->setObjectName(QString::fromUtf8("nappiok"));
        nappiok->setGeometry(QRect(530, 360, 71, 61));
        nappiok->setFont(font);
        nappiok->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 70, 361, 351));
        nappikorjaa = new QPushButton(centralwidget);
        nappikorjaa->setObjectName(QString::fromUtf8("nappikorjaa"));
        nappikorjaa->setGeometry(QRect(390, 360, 71, 61));
        nappikorjaa->setFont(font);
        nappikorjaa->setCursor(QCursor(Qt::PointingHandCursor));
        numero6 = new QPushButton(centralwidget);
        numero6->setObjectName(QString::fromUtf8("numero6"));
        numero6->setGeometry(QRect(530, 240, 71, 61));
        numero6->setFont(font);
        numero6->setCursor(QCursor(Qt::PointingHandCursor));
        numero2 = new QPushButton(centralwidget);
        numero2->setObjectName(QString::fromUtf8("numero2"));
        numero2->setGeometry(QRect(460, 180, 71, 61));
        numero2->setFont(font);
        numero2->setCursor(QCursor(Qt::PointingHandCursor));
        numero2->setAutoDefault(false);
        hankiPIN = new QLineEdit(centralwidget);
        hankiPIN->setObjectName(QString::fromUtf8("hankiPIN"));
        hankiPIN->setGeometry(QRect(390, 70, 211, 111));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hankiPIN->sizePolicy().hasHeightForWidth());
        hankiPIN->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(43);
        font1.setBold(true);
        hankiPIN->setFont(font1);
        hankiPIN->setCursor(QCursor(Qt::CrossCursor));
        hankiPIN->setLayoutDirection(Qt::LeftToRight);
        hankiPIN->setFrame(true);
        hankiPIN->setAlignment(Qt::AlignCenter);
        nappiLopeta = new QPushButton(centralwidget);
        nappiLopeta->setObjectName(QString::fromUtf8("nappiLopeta"));
        nappiLopeta->setGeometry(QRect(390, 420, 211, 51));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        nappiLopeta->setFont(font2);
        virhelbl = new QLabel(centralwidget);
        virhelbl->setObjectName(QString::fromUtf8("virhelbl"));
        virhelbl->setGeometry(QRect(10, 80, 1021, 91));
        QPalette palette2;
        QBrush brush8(QColor(255, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::NoRole, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::NoRole, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        virhelbl->setPalette(palette2);
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(true);
        virhelbl->setFont(font3);
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 630, 21));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        numero7->setDefault(true);
        numero5->setDefault(true);
        numero0->setDefault(true);
        numero3->setDefault(true);
        numero9->setDefault(true);
        numero4->setDefault(true);
        numero8->setDefault(true);
        numero1->setDefault(true);
        nappiok->setDefault(true);
        nappikorjaa->setDefault(true);
        numero6->setDefault(true);
        numero2->setDefault(true);
        nappiLopeta->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        numero7->setText(QCoreApplication::translate("MainWindow2", "7", nullptr));
        otsikko1->setText(QCoreApplication::translate("MainWindow2", "Sy\303\266t\303\244 PIN-koodi ja paina OK", nullptr));
        numero5->setText(QCoreApplication::translate("MainWindow2", "5", nullptr));
        numero0->setText(QCoreApplication::translate("MainWindow2", "0", nullptr));
        numero3->setText(QCoreApplication::translate("MainWindow2", "3", nullptr));
        numero9->setText(QCoreApplication::translate("MainWindow2", "9", nullptr));
        numero4->setText(QCoreApplication::translate("MainWindow2", "4", nullptr));
        numero8->setText(QCoreApplication::translate("MainWindow2", "8", nullptr));
        numero1->setText(QCoreApplication::translate("MainWindow2", "1", nullptr));
        nappiok->setText(QCoreApplication::translate("MainWindow2", "OK", nullptr));
        label->setText(QString());
        nappikorjaa->setText(QCoreApplication::translate("MainWindow2", "<", nullptr));
        numero6->setText(QCoreApplication::translate("MainWindow2", "6", nullptr));
        numero2->setText(QCoreApplication::translate("MainWindow2", "2", nullptr));
        hankiPIN->setText(QString());
        nappiLopeta->setText(QCoreApplication::translate("MainWindow2", "LOPETA", nullptr));
        virhelbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
