/********************************************************************************
** Form generated from reading UI file 'lahjoita.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAHJOITA_H
#define UI_LAHJOITA_H

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

class Ui_lahjoita
{
public:
    QWidget *centralwidget;
    QPushButton *nappikorjaalahj;
    QPushButton *numero2lahj;
    QPushButton *numero0lahj;
    QLineEdit *hankiSummalahj;
    QLabel *otsikko1;
    QPushButton *numero8lahj;
    QPushButton *numero3lahj;
    QPushButton *numero4lahj;
    QPushButton *numero6lahj;
    QLabel *label;
    QPushButton *nappiPalaa;
    QPushButton *numero7lahj;
    QPushButton *numero5lahj;
    QPushButton *numero1lahj;
    QPushButton *numero9lahj;
    QPushButton *nappiLahjoita;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lahjoita)
    {
        if (lahjoita->objectName().isEmpty())
            lahjoita->setObjectName(QStringLiteral("lahjoita"));
        lahjoita->resize(1920, 1080);
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
        lahjoita->setPalette(palette);
        centralwidget = new QWidget(lahjoita);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        nappikorjaalahj = new QPushButton(centralwidget);
        nappikorjaalahj->setObjectName(QStringLiteral("nappikorjaalahj"));
        nappikorjaalahj->setGeometry(QRect(1090, 690, 101, 91));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        nappikorjaalahj->setFont(font);
        nappikorjaalahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero2lahj = new QPushButton(centralwidget);
        numero2lahj->setObjectName(QStringLiteral("numero2lahj"));
        numero2lahj->setGeometry(QRect(1190, 420, 101, 91));
        numero2lahj->setFont(font);
        numero2lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero2lahj->setAutoDefault(false);
        numero0lahj = new QPushButton(centralwidget);
        numero0lahj->setObjectName(QStringLiteral("numero0lahj"));
        numero0lahj->setGeometry(QRect(1190, 690, 101, 91));
        numero0lahj->setFont(font);
        numero0lahj->setCursor(QCursor(Qt::PointingHandCursor));
        hankiSummalahj = new QLineEdit(centralwidget);
        hankiSummalahj->setObjectName(QStringLiteral("hankiSummalahj"));
        hankiSummalahj->setGeometry(QRect(1090, 230, 301, 191));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hankiSummalahj->sizePolicy().hasHeightForWidth());
        hankiSummalahj->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(50);
        font1.setBold(true);
        font1.setWeight(75);
        hankiSummalahj->setFont(font1);
        hankiSummalahj->setCursor(QCursor(Qt::CrossCursor));
        hankiSummalahj->setLayoutDirection(Qt::LeftToRight);
        hankiSummalahj->setFrame(true);
        hankiSummalahj->setAlignment(Qt::AlignCenter);
        otsikko1 = new QLabel(centralwidget);
        otsikko1->setObjectName(QStringLiteral("otsikko1"));
        otsikko1->setGeometry(QRect(130, 50, 1661, 71));
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
        numero8lahj = new QPushButton(centralwidget);
        numero8lahj->setObjectName(QStringLiteral("numero8lahj"));
        numero8lahj->setGeometry(QRect(1190, 600, 101, 91));
        numero8lahj->setFont(font);
        numero8lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero3lahj = new QPushButton(centralwidget);
        numero3lahj->setObjectName(QStringLiteral("numero3lahj"));
        numero3lahj->setGeometry(QRect(1290, 420, 101, 91));
        numero3lahj->setFont(font);
        numero3lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero4lahj = new QPushButton(centralwidget);
        numero4lahj->setObjectName(QStringLiteral("numero4lahj"));
        numero4lahj->setGeometry(QRect(1090, 510, 101, 91));
        numero4lahj->setFont(font);
        numero4lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero6lahj = new QPushButton(centralwidget);
        numero6lahj->setObjectName(QStringLiteral("numero6lahj"));
        numero6lahj->setGeometry(QRect(1290, 510, 101, 91));
        numero6lahj->setFont(font);
        numero6lahj->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 230, 851, 551));
        nappiPalaa = new QPushButton(centralwidget);
        nappiPalaa->setObjectName(QStringLiteral("nappiPalaa"));
        nappiPalaa->setGeometry(QRect(10, 880, 391, 121));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        nappiPalaa->setFont(font3);
        numero7lahj = new QPushButton(centralwidget);
        numero7lahj->setObjectName(QStringLiteral("numero7lahj"));
        numero7lahj->setGeometry(QRect(1090, 600, 101, 91));
        numero7lahj->setFont(font);
        numero7lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero5lahj = new QPushButton(centralwidget);
        numero5lahj->setObjectName(QStringLiteral("numero5lahj"));
        numero5lahj->setGeometry(QRect(1190, 510, 101, 91));
        numero5lahj->setFont(font);
        numero5lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero1lahj = new QPushButton(centralwidget);
        numero1lahj->setObjectName(QStringLiteral("numero1lahj"));
        numero1lahj->setGeometry(QRect(1090, 420, 101, 91));
        numero1lahj->setFont(font);
        numero1lahj->setCursor(QCursor(Qt::PointingHandCursor));
        numero1lahj->setFlat(false);
        numero9lahj = new QPushButton(centralwidget);
        numero9lahj->setObjectName(QStringLiteral("numero9lahj"));
        numero9lahj->setGeometry(QRect(1290, 600, 101, 91));
        numero9lahj->setFont(font);
        numero9lahj->setCursor(QCursor(Qt::PointingHandCursor));
        nappiLahjoita = new QPushButton(centralwidget);
        nappiLahjoita->setObjectName(QStringLiteral("nappiLahjoita"));
        nappiLahjoita->setGeometry(QRect(1520, 880, 391, 121));
        nappiLahjoita->setFont(font3);
        lahjoita->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lahjoita);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        lahjoita->setMenuBar(menubar);
        statusbar = new QStatusBar(lahjoita);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        lahjoita->setStatusBar(statusbar);

        retranslateUi(lahjoita);

        nappikorjaalahj->setDefault(true);
        numero2lahj->setDefault(true);
        numero0lahj->setDefault(true);
        numero8lahj->setDefault(true);
        numero3lahj->setDefault(true);
        numero4lahj->setDefault(true);
        numero6lahj->setDefault(true);
        nappiPalaa->setDefault(true);
        numero7lahj->setDefault(true);
        numero5lahj->setDefault(true);
        numero1lahj->setDefault(true);
        numero9lahj->setDefault(true);
        nappiLahjoita->setDefault(true);


        QMetaObject::connectSlotsByName(lahjoita);
    } // setupUi

    void retranslateUi(QMainWindow *lahjoita)
    {
        lahjoita->setWindowTitle(QApplication::translate("lahjoita", "MainWindow", Q_NULLPTR));
        nappikorjaalahj->setText(QApplication::translate("lahjoita", "<", Q_NULLPTR));
        numero2lahj->setText(QApplication::translate("lahjoita", "2", Q_NULLPTR));
        numero0lahj->setText(QApplication::translate("lahjoita", "0", Q_NULLPTR));
        hankiSummalahj->setText(QString());
        otsikko1->setText(QApplication::translate("lahjoita", "Sy\303\266t\303\244 summa, jonka haluat lahjoittaa ja paina \"LAHJOITA\"-painiketta", Q_NULLPTR));
        numero8lahj->setText(QApplication::translate("lahjoita", "8", Q_NULLPTR));
        numero3lahj->setText(QApplication::translate("lahjoita", "3", Q_NULLPTR));
        numero4lahj->setText(QApplication::translate("lahjoita", "4", Q_NULLPTR));
        numero6lahj->setText(QApplication::translate("lahjoita", "6", Q_NULLPTR));
        label->setText(QString());
        nappiPalaa->setText(QApplication::translate("lahjoita", "PALAA", Q_NULLPTR));
        numero7lahj->setText(QApplication::translate("lahjoita", "7", Q_NULLPTR));
        numero5lahj->setText(QApplication::translate("lahjoita", "5", Q_NULLPTR));
        numero1lahj->setText(QApplication::translate("lahjoita", "1", Q_NULLPTR));
        numero9lahj->setText(QApplication::translate("lahjoita", "9", Q_NULLPTR));
        nappiLahjoita->setText(QApplication::translate("lahjoita", "LAHJOITA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class lahjoita: public Ui_lahjoita {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAHJOITA_H
