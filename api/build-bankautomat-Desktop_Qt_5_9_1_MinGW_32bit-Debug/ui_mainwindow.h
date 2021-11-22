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
    QPushButton *numero6_2;
    QPushButton *numero7_2;
    QPushButton *numero8;
    QPushButton *numero9;
    QPushButton *numero0;
    QLineEdit *hankiID;
    QPushButton *nappiok;
    QPushButton *nappikorjaa;
    QLabel *otsikko1;
    QLineEdit *hankiPIN;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(940, 661);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        numero1 = new QPushButton(centralWidget);
        numero1->setObjectName(QStringLiteral("numero1"));
        numero1->setGeometry(QRect(330, 300, 71, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        numero1->setFont(font);
        numero1->setCursor(QCursor(Qt::PointingHandCursor));
        numero2 = new QPushButton(centralWidget);
        numero2->setObjectName(QStringLiteral("numero2"));
        numero2->setGeometry(QRect(400, 300, 71, 61));
        numero2->setFont(font);
        numero2->setCursor(QCursor(Qt::PointingHandCursor));
        numero3 = new QPushButton(centralWidget);
        numero3->setObjectName(QStringLiteral("numero3"));
        numero3->setGeometry(QRect(470, 300, 71, 61));
        numero3->setFont(font);
        numero3->setCursor(QCursor(Qt::PointingHandCursor));
        numero4 = new QPushButton(centralWidget);
        numero4->setObjectName(QStringLiteral("numero4"));
        numero4->setGeometry(QRect(330, 360, 71, 61));
        numero4->setFont(font);
        numero4->setCursor(QCursor(Qt::PointingHandCursor));
        numero5 = new QPushButton(centralWidget);
        numero5->setObjectName(QStringLiteral("numero5"));
        numero5->setGeometry(QRect(400, 360, 71, 61));
        numero5->setFont(font);
        numero5->setCursor(QCursor(Qt::PointingHandCursor));
        numero6_2 = new QPushButton(centralWidget);
        numero6_2->setObjectName(QStringLiteral("numero6_2"));
        numero6_2->setGeometry(QRect(470, 360, 71, 61));
        numero6_2->setFont(font);
        numero6_2->setCursor(QCursor(Qt::PointingHandCursor));
        numero7_2 = new QPushButton(centralWidget);
        numero7_2->setObjectName(QStringLiteral("numero7_2"));
        numero7_2->setGeometry(QRect(330, 420, 71, 61));
        numero7_2->setFont(font);
        numero7_2->setCursor(QCursor(Qt::PointingHandCursor));
        numero8 = new QPushButton(centralWidget);
        numero8->setObjectName(QStringLiteral("numero8"));
        numero8->setGeometry(QRect(400, 420, 71, 61));
        numero8->setFont(font);
        numero8->setCursor(QCursor(Qt::PointingHandCursor));
        numero9 = new QPushButton(centralWidget);
        numero9->setObjectName(QStringLiteral("numero9"));
        numero9->setGeometry(QRect(470, 420, 71, 61));
        numero9->setFont(font);
        numero9->setCursor(QCursor(Qt::PointingHandCursor));
        numero0 = new QPushButton(centralWidget);
        numero0->setObjectName(QStringLiteral("numero0"));
        numero0->setGeometry(QRect(400, 480, 71, 61));
        numero0->setFont(font);
        numero0->setCursor(QCursor(Qt::PointingHandCursor));
        hankiID = new QLineEdit(centralWidget);
        hankiID->setObjectName(QStringLiteral("hankiID"));
        hankiID->setGeometry(QRect(330, 190, 211, 111));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(hankiID->sizePolicy().hasHeightForWidth());
        hankiID->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(43);
        font1.setBold(true);
        font1.setWeight(75);
        hankiID->setFont(font1);
        hankiID->setCursor(QCursor(Qt::CrossCursor));
        hankiID->setLayoutDirection(Qt::LeftToRight);
        hankiID->setFrame(true);
        hankiID->setAlignment(Qt::AlignCenter);
        nappiok = new QPushButton(centralWidget);
        nappiok->setObjectName(QStringLiteral("nappiok"));
        nappiok->setGeometry(QRect(470, 480, 71, 61));
        nappiok->setFont(font);
        nappiok->setCursor(QCursor(Qt::PointingHandCursor));
        nappikorjaa = new QPushButton(centralWidget);
        nappikorjaa->setObjectName(QStringLiteral("nappikorjaa"));
        nappikorjaa->setGeometry(QRect(330, 480, 71, 61));
        nappikorjaa->setFont(font);
        nappikorjaa->setCursor(QCursor(Qt::PointingHandCursor));
        otsikko1 = new QLabel(centralWidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(200, 130, 491, 71));
        otsikko1->setFont(font);
        hankiPIN = new QLineEdit(centralWidget);
        hankiPIN->setObjectName(QStringLiteral("hankiPIN"));
        hankiPIN->setGeometry(QRect(550, 200, 141, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 940, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

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
        numero6_2->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        numero7_2->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        numero8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        numero9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        numero0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        hankiID->setText(QString());
        nappiok->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        nappikorjaa->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        otsikko1->setText(QApplication::translate("MainWindow", "Sy\303\266t\303\244 pankkikorttisi ID ja paina OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
