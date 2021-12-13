/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *numero1;
    QPushButton *numero2;
    QPushButton *numero3;
    QPushButton *numero4;
    QPushButton *numero5;
    QPushButton *numero6;
    QPushButton *numero7;
    QPushButton *numero8;
    QPushButton *numero9;
    QPushButton *numero0;
    QLineEdit *hankiID;
    QPushButton *nappiok;
    QPushButton *nappikorjaa;
    QLabel *otsikko1;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1061);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
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
        MainWindow->setPalette(palette);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        numero1 = new QPushButton(centralWidget);
        numero1->setObjectName(QStringLiteral("numero1"));
        numero1->setGeometry(QRect(1090, 420, 101, 91));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        numero1->setFont(font);
        numero1->setCursor(QCursor(Qt::PointingHandCursor));
        numero1->setFlat(false);
        numero2 = new QPushButton(centralWidget);
        numero2->setObjectName(QStringLiteral("numero2"));
        numero2->setGeometry(QRect(1190, 420, 101, 91));
        numero2->setFont(font);
        numero2->setCursor(QCursor(Qt::PointingHandCursor));
        numero2->setAutoDefault(false);
        numero3 = new QPushButton(centralWidget);
        numero3->setObjectName(QStringLiteral("numero3"));
        numero3->setGeometry(QRect(1290, 420, 101, 91));
        numero3->setFont(font);
        numero3->setCursor(QCursor(Qt::PointingHandCursor));
        numero4 = new QPushButton(centralWidget);
        numero4->setObjectName(QStringLiteral("numero4"));
        numero4->setGeometry(QRect(1090, 510, 101, 91));
        numero4->setFont(font);
        numero4->setCursor(QCursor(Qt::PointingHandCursor));
        numero5 = new QPushButton(centralWidget);
        numero5->setObjectName(QStringLiteral("numero5"));
        numero5->setGeometry(QRect(1190, 510, 101, 91));
        numero5->setFont(font);
        numero5->setCursor(QCursor(Qt::PointingHandCursor));
        numero6 = new QPushButton(centralWidget);
        numero6->setObjectName(QStringLiteral("numero6"));
        numero6->setGeometry(QRect(1290, 510, 101, 91));
        numero6->setFont(font);
        numero6->setCursor(QCursor(Qt::PointingHandCursor));
        numero7 = new QPushButton(centralWidget);
        numero7->setObjectName(QStringLiteral("numero7"));
        numero7->setGeometry(QRect(1090, 600, 101, 91));
        numero7->setFont(font);
        numero7->setCursor(QCursor(Qt::PointingHandCursor));
        numero8 = new QPushButton(centralWidget);
        numero8->setObjectName(QStringLiteral("numero8"));
        numero8->setGeometry(QRect(1190, 600, 101, 91));
        numero8->setFont(font);
        numero8->setCursor(QCursor(Qt::PointingHandCursor));
        numero9 = new QPushButton(centralWidget);
        numero9->setObjectName(QStringLiteral("numero9"));
        numero9->setGeometry(QRect(1290, 600, 101, 91));
        numero9->setFont(font);
        numero9->setCursor(QCursor(Qt::PointingHandCursor));
        numero0 = new QPushButton(centralWidget);
        numero0->setObjectName(QStringLiteral("numero0"));
        numero0->setGeometry(QRect(1190, 690, 101, 91));
        numero0->setFont(font);
        numero0->setCursor(QCursor(Qt::PointingHandCursor));
        hankiID = new QLineEdit(centralWidget);
        hankiID->setObjectName(QStringLiteral("hankiID"));
        hankiID->setGeometry(QRect(1090, 230, 301, 191));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(hankiID->sizePolicy().hasHeightForWidth());
        hankiID->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        font1.setWeight(75);
        hankiID->setFont(font1);
        hankiID->setCursor(QCursor(Qt::CrossCursor));
        hankiID->setLayoutDirection(Qt::LeftToRight);
        hankiID->setFrame(true);
        hankiID->setAlignment(Qt::AlignCenter);
        nappiok = new QPushButton(centralWidget);
        nappiok->setObjectName(QStringLiteral("nappiok"));
        nappiok->setGeometry(QRect(1290, 690, 101, 91));
        nappiok->setFont(font);
        nappiok->setCursor(QCursor(Qt::PointingHandCursor));
        nappikorjaa = new QPushButton(centralWidget);
        nappikorjaa->setObjectName(QStringLiteral("nappikorjaa"));
        nappikorjaa->setGeometry(QRect(1090, 690, 101, 91));
        nappikorjaa->setFont(font);
        nappikorjaa->setCursor(QCursor(Qt::PointingHandCursor));
        otsikko1 = new QLabel(centralWidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(550, 50, 881, 91));
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
        QFont font2;
        font2.setPointSize(35);
        font2.setBold(true);
        font2.setWeight(75);
        otsikko1->setFont(font2);
        otsikko1->setLayoutDirection(Qt::RightToLeft);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 230, 851, 551));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        numero1->raise();
        numero2->raise();
        numero3->raise();
        numero4->raise();
        numero5->raise();
        numero6->raise();
        numero7->raise();
        numero8->raise();
        numero9->raise();
        numero0->raise();
        hankiID->raise();
        nappiok->raise();
        nappikorjaa->raise();
        otsikko1->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        numero1->setDefault(true);
        numero2->setDefault(true);
        numero3->setDefault(true);
        numero4->setDefault(true);
        numero5->setDefault(true);
        numero6->setDefault(true);
        numero7->setDefault(true);
        numero8->setDefault(true);
        numero9->setDefault(true);
        numero0->setDefault(true);
        nappiok->setDefault(true);
        nappikorjaa->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        numero1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        numero2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        numero3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        numero4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        numero5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        numero6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        numero7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        numero8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        numero9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        numero0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        hankiID->setText(QString());
        nappiok->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        nappikorjaa->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        otsikko1->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 pankkikorttisi ID ja paina OK", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
