/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

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
    QLabel *otsikko1_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QStringLiteral("MainWindow2"));
        MainWindow2->resize(1920, 1061);
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
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        numero7 = new QPushButton(centralwidget);
        numero7->setObjectName(QStringLiteral("numero7"));
        numero7->setGeometry(QRect(1090, 600, 101, 91));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        numero7->setFont(font);
        numero7->setCursor(QCursor(Qt::PointingHandCursor));
        otsikko1 = new QLabel(centralwidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(550, 50, 881, 91));
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
        QFont font1;
        font1.setPointSize(35);
        font1.setBold(true);
        font1.setWeight(75);
        otsikko1->setFont(font1);
        numero5 = new QPushButton(centralwidget);
        numero5->setObjectName(QStringLiteral("numero5"));
        numero5->setGeometry(QRect(1190, 510, 101, 91));
        numero5->setFont(font);
        numero5->setCursor(QCursor(Qt::PointingHandCursor));
        numero0 = new QPushButton(centralwidget);
        numero0->setObjectName(QStringLiteral("numero0"));
        numero0->setGeometry(QRect(1190, 690, 101, 91));
        numero0->setFont(font);
        numero0->setCursor(QCursor(Qt::PointingHandCursor));
        numero3 = new QPushButton(centralwidget);
        numero3->setObjectName(QStringLiteral("numero3"));
        numero3->setGeometry(QRect(1290, 420, 101, 91));
        numero3->setFont(font);
        numero3->setCursor(QCursor(Qt::PointingHandCursor));
        numero9 = new QPushButton(centralwidget);
        numero9->setObjectName(QStringLiteral("numero9"));
        numero9->setGeometry(QRect(1290, 600, 101, 91));
        numero9->setFont(font);
        numero9->setCursor(QCursor(Qt::PointingHandCursor));
        numero4 = new QPushButton(centralwidget);
        numero4->setObjectName(QStringLiteral("numero4"));
        numero4->setGeometry(QRect(1090, 510, 101, 91));
        numero4->setFont(font);
        numero4->setCursor(QCursor(Qt::PointingHandCursor));
        numero8 = new QPushButton(centralwidget);
        numero8->setObjectName(QStringLiteral("numero8"));
        numero8->setGeometry(QRect(1190, 600, 101, 91));
        numero8->setFont(font);
        numero8->setCursor(QCursor(Qt::PointingHandCursor));
        numero1 = new QPushButton(centralwidget);
        numero1->setObjectName(QStringLiteral("numero1"));
        numero1->setGeometry(QRect(1090, 420, 101, 91));
        numero1->setFont(font);
        numero1->setCursor(QCursor(Qt::PointingHandCursor));
        numero1->setFlat(false);
        nappiok = new QPushButton(centralwidget);
        nappiok->setObjectName(QStringLiteral("nappiok"));
        nappiok->setGeometry(QRect(1290, 690, 101, 91));
        nappiok->setFont(font);
        nappiok->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(540, 230, 551, 551));
        nappikorjaa = new QPushButton(centralwidget);
        nappikorjaa->setObjectName(QStringLiteral("nappikorjaa"));
        nappikorjaa->setGeometry(QRect(1090, 690, 101, 91));
        nappikorjaa->setFont(font);
        nappikorjaa->setCursor(QCursor(Qt::PointingHandCursor));
        numero6 = new QPushButton(centralwidget);
        numero6->setObjectName(QStringLiteral("numero6"));
        numero6->setGeometry(QRect(1290, 510, 101, 91));
        numero6->setFont(font);
        numero6->setCursor(QCursor(Qt::PointingHandCursor));
        numero2 = new QPushButton(centralwidget);
        numero2->setObjectName(QStringLiteral("numero2"));
        numero2->setGeometry(QRect(1190, 420, 101, 91));
        numero2->setFont(font);
        numero2->setCursor(QCursor(Qt::PointingHandCursor));
        numero2->setAutoDefault(false);
        hankiPIN = new QLineEdit(centralwidget);
        hankiPIN->setObjectName(QStringLiteral("hankiPIN"));
        hankiPIN->setGeometry(QRect(1090, 230, 301, 191));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hankiPIN->sizePolicy().hasHeightForWidth());
        hankiPIN->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(50);
        font2.setBold(true);
        font2.setWeight(75);
        hankiPIN->setFont(font2);
        hankiPIN->setCursor(QCursor(Qt::CrossCursor));
        hankiPIN->setLayoutDirection(Qt::LeftToRight);
        hankiPIN->setFrame(true);
        hankiPIN->setAlignment(Qt::AlignCenter);
        nappiLopeta = new QPushButton(centralwidget);
        nappiLopeta->setObjectName(QStringLiteral("nappiLopeta"));
        nappiLopeta->setGeometry(QRect(1090, 780, 301, 61));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        nappiLopeta->setFont(font3);
        otsikko1_2 = new QLabel(centralwidget);
        otsikko1_2->setObjectName(QStringLiteral("otsikko1_2"));
        otsikko1_2->setGeometry(QRect(760, 90, 881, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
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
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
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
        otsikko1_2->setPalette(palette2);
        otsikko1_2->setFont(font1);
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QStringLiteral("statusbar"));
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
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", Q_NULLPTR));
        numero7->setText(QApplication::translate("MainWindow2", "7", Q_NULLPTR));
        otsikko1->setText(QApplication::translate("MainWindow2", "Sy\303\266t\303\244 PIN-koodi ja paina OK", Q_NULLPTR));
        numero5->setText(QApplication::translate("MainWindow2", "5", Q_NULLPTR));
        numero0->setText(QApplication::translate("MainWindow2", "0", Q_NULLPTR));
        numero3->setText(QApplication::translate("MainWindow2", "3", Q_NULLPTR));
        numero9->setText(QApplication::translate("MainWindow2", "9", Q_NULLPTR));
        numero4->setText(QApplication::translate("MainWindow2", "4", Q_NULLPTR));
        numero8->setText(QApplication::translate("MainWindow2", "8", Q_NULLPTR));
        numero1->setText(QApplication::translate("MainWindow2", "1", Q_NULLPTR));
        nappiok->setText(QApplication::translate("MainWindow2", "OK", Q_NULLPTR));
        label->setText(QString());
        nappikorjaa->setText(QApplication::translate("MainWindow2", "<", Q_NULLPTR));
        numero6->setText(QApplication::translate("MainWindow2", "6", Q_NULLPTR));
        numero2->setText(QApplication::translate("MainWindow2", "2", Q_NULLPTR));
        hankiPIN->setText(QString());
        nappiLopeta->setText(QApplication::translate("MainWindow2", "LOPETA", Q_NULLPTR));
        otsikko1_2->setText(QApplication::translate("MainWindow2", "Sy\303\266t\303\244 PIN-koodi ja paina OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
