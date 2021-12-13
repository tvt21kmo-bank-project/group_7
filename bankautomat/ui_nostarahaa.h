/********************************************************************************
** Form generated from reading UI file 'nostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTARAHAA_H
#define UI_NOSTARAHAA_H

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

class Ui_nostarahaa
{
public:
    QWidget *centralwidget;
    QPushButton *nappiNosta100;
    QLabel *saldolbl;
    QPushButton *nostoNappi;
    QPushButton *nappiNosta40;
    QPushButton *nappiNosta60;
    QPushButton *nappiNosta20;
    QLabel *label;
    QLabel *osoitelbl;
    QLabel *label_2;
    QLabel *sukunimilbl;
    QLabel *puhlbl;
    QPushButton *nappiNosta200;
    QPushButton *nappiNosta500;
    QLabel *hetulbl;
    QPushButton *nappiSulje;
    QLabel *etunimilbl;
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
    QPushButton *nappikorjaa;
    QLineEdit *nostoTaulu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nostarahaa)
    {
        if (nostarahaa->objectName().isEmpty())
            nostarahaa->setObjectName(QStringLiteral("nostarahaa"));
        nostarahaa->resize(1920, 1061);
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
        nostarahaa->setPalette(palette);
        centralwidget = new QWidget(nostarahaa);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        nappiNosta100 = new QPushButton(centralwidget);
        nappiNosta100->setObjectName(QStringLiteral("nappiNosta100"));
        nappiNosta100->setGeometry(QRect(950, 480, 300, 80));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        nappiNosta100->setFont(font);
        saldolbl = new QLabel(centralwidget);
        saldolbl->setObjectName(QStringLiteral("saldolbl"));
        saldolbl->setGeometry(QRect(150, 230, 891, 41));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        saldolbl->setPalette(palette1);
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        saldolbl->setFont(font1);
        nostoNappi = new QPushButton(centralwidget);
        nostoNappi->setObjectName(QStringLiteral("nostoNappi"));
        nostoNappi->setGeometry(QRect(20, 740, 251, 81));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        nostoNappi->setFont(font2);
        nappiNosta40 = new QPushButton(centralwidget);
        nappiNosta40->setObjectName(QStringLiteral("nappiNosta40"));
        nappiNosta40->setGeometry(QRect(330, 480, 300, 80));
        nappiNosta40->setFont(font);
        nappiNosta60 = new QPushButton(centralwidget);
        nappiNosta60->setObjectName(QStringLiteral("nappiNosta60"));
        nappiNosta60->setGeometry(QRect(640, 480, 300, 80));
        nappiNosta60->setFont(font);
        nappiNosta20 = new QPushButton(centralwidget);
        nappiNosta20->setObjectName(QStringLiteral("nappiNosta20"));
        nappiNosta20->setGeometry(QRect(20, 480, 300, 80));
        nappiNosta20->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 400, 741, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label->setPalette(palette2);
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        osoitelbl = new QLabel(centralwidget);
        osoitelbl->setObjectName(QStringLiteral("osoitelbl"));
        osoitelbl->setGeometry(QRect(150, 150, 921, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        osoitelbl->setPalette(palette3);
        osoitelbl->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 560, 1511, 61));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_2->setPalette(palette4);
        label_2->setFont(font3);
        sukunimilbl = new QLabel(centralwidget);
        sukunimilbl->setObjectName(QStringLiteral("sukunimilbl"));
        sukunimilbl->setGeometry(QRect(150, 70, 941, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        sukunimilbl->setPalette(palette5);
        sukunimilbl->setFont(font1);
        puhlbl = new QLabel(centralwidget);
        puhlbl->setObjectName(QStringLiteral("puhlbl"));
        puhlbl->setGeometry(QRect(150, 190, 901, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        puhlbl->setPalette(palette6);
        puhlbl->setFont(font1);
        nappiNosta200 = new QPushButton(centralwidget);
        nappiNosta200->setObjectName(QStringLiteral("nappiNosta200"));
        nappiNosta200->setGeometry(QRect(1260, 480, 300, 80));
        nappiNosta200->setFont(font);
        nappiNosta500 = new QPushButton(centralwidget);
        nappiNosta500->setObjectName(QStringLiteral("nappiNosta500"));
        nappiNosta500->setGeometry(QRect(1570, 480, 300, 80));
        nappiNosta500->setFont(font);
        hetulbl = new QLabel(centralwidget);
        hetulbl->setObjectName(QStringLiteral("hetulbl"));
        hetulbl->setGeometry(QRect(150, 110, 931, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        hetulbl->setPalette(palette7);
        hetulbl->setFont(font1);
        nappiSulje = new QPushButton(centralwidget);
        nappiSulje->setObjectName(QStringLiteral("nappiSulje"));
        nappiSulje->setGeometry(QRect(1630, 910, 231, 91));
        nappiSulje->setFont(font);
        etunimilbl = new QLabel(centralwidget);
        etunimilbl->setObjectName(QStringLiteral("etunimilbl"));
        etunimilbl->setGeometry(QRect(150, 30, 941, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        etunimilbl->setPalette(palette8);
        etunimilbl->setFont(font1);
        numero1 = new QPushButton(centralwidget);
        numero1->setObjectName(QStringLiteral("numero1"));
        numero1->setGeometry(QRect(270, 630, 70, 70));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        numero1->setFont(font4);
        numero1->setCursor(QCursor(Qt::PointingHandCursor));
        numero1->setFlat(false);
        numero2 = new QPushButton(centralwidget);
        numero2->setObjectName(QStringLiteral("numero2"));
        numero2->setGeometry(QRect(340, 630, 70, 70));
        numero2->setFont(font4);
        numero2->setCursor(QCursor(Qt::PointingHandCursor));
        numero2->setFlat(false);
        numero3 = new QPushButton(centralwidget);
        numero3->setObjectName(QStringLiteral("numero3"));
        numero3->setGeometry(QRect(410, 630, 70, 70));
        numero3->setFont(font4);
        numero3->setCursor(QCursor(Qt::PointingHandCursor));
        numero3->setFlat(false);
        numero4 = new QPushButton(centralwidget);
        numero4->setObjectName(QStringLiteral("numero4"));
        numero4->setGeometry(QRect(270, 700, 70, 70));
        numero4->setFont(font4);
        numero4->setCursor(QCursor(Qt::PointingHandCursor));
        numero4->setFlat(false);
        numero5 = new QPushButton(centralwidget);
        numero5->setObjectName(QStringLiteral("numero5"));
        numero5->setGeometry(QRect(340, 700, 70, 70));
        numero5->setFont(font4);
        numero5->setCursor(QCursor(Qt::PointingHandCursor));
        numero5->setFlat(false);
        numero6 = new QPushButton(centralwidget);
        numero6->setObjectName(QStringLiteral("numero6"));
        numero6->setGeometry(QRect(410, 700, 70, 70));
        numero6->setFont(font4);
        numero6->setCursor(QCursor(Qt::PointingHandCursor));
        numero6->setFlat(false);
        numero7 = new QPushButton(centralwidget);
        numero7->setObjectName(QStringLiteral("numero7"));
        numero7->setGeometry(QRect(270, 770, 70, 70));
        numero7->setFont(font4);
        numero7->setCursor(QCursor(Qt::PointingHandCursor));
        numero7->setFlat(false);
        numero8 = new QPushButton(centralwidget);
        numero8->setObjectName(QStringLiteral("numero8"));
        numero8->setGeometry(QRect(340, 770, 70, 70));
        numero8->setFont(font4);
        numero8->setCursor(QCursor(Qt::PointingHandCursor));
        numero8->setFlat(false);
        numero9 = new QPushButton(centralwidget);
        numero9->setObjectName(QStringLiteral("numero9"));
        numero9->setGeometry(QRect(410, 770, 70, 70));
        numero9->setFont(font4);
        numero9->setCursor(QCursor(Qt::PointingHandCursor));
        numero9->setFlat(false);
        numero0 = new QPushButton(centralwidget);
        numero0->setObjectName(QStringLiteral("numero0"));
        numero0->setGeometry(QRect(340, 840, 70, 70));
        numero0->setFont(font4);
        numero0->setCursor(QCursor(Qt::PointingHandCursor));
        numero0->setFlat(false);
        nappikorjaa = new QPushButton(centralwidget);
        nappikorjaa->setObjectName(QStringLiteral("nappikorjaa"));
        nappikorjaa->setGeometry(QRect(270, 840, 70, 70));
        nappikorjaa->setFont(font4);
        nappikorjaa->setCursor(QCursor(Qt::PointingHandCursor));
        nappikorjaa->setFlat(false);
        nostoTaulu = new QLineEdit(centralwidget);
        nostoTaulu->setObjectName(QStringLiteral("nostoTaulu"));
        nostoTaulu->setGeometry(QRect(20, 630, 250, 103));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nostoTaulu->sizePolicy().hasHeightForWidth());
        nostoTaulu->setSizePolicy(sizePolicy);
        nostoTaulu->setFont(font);
        nostoTaulu->setCursor(QCursor(Qt::CrossCursor));
        nostoTaulu->setLayoutDirection(Qt::LeftToRight);
        nostoTaulu->setFrame(true);
        nostoTaulu->setAlignment(Qt::AlignCenter);
        nostarahaa->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nostarahaa);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        nostarahaa->setMenuBar(menubar);
        statusbar = new QStatusBar(nostarahaa);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        nostarahaa->setStatusBar(statusbar);

        retranslateUi(nostarahaa);

        nappiNosta100->setDefault(true);
        nostoNappi->setDefault(true);
        nappiNosta40->setDefault(true);
        nappiNosta60->setDefault(true);
        nappiNosta20->setDefault(true);
        nappiNosta200->setDefault(true);
        nappiNosta500->setDefault(true);
        nappiSulje->setDefault(true);
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
        nappikorjaa->setDefault(true);


        QMetaObject::connectSlotsByName(nostarahaa);
    } // setupUi

    void retranslateUi(QMainWindow *nostarahaa)
    {
        nostarahaa->setWindowTitle(QApplication::translate("nostarahaa", "MainWindow", Q_NULLPTR));
        nappiNosta100->setText(QApplication::translate("nostarahaa", "100 \342\202\254", Q_NULLPTR));
        saldolbl->setText(QApplication::translate("nostarahaa", "Saldo: ", Q_NULLPTR));
        nostoNappi->setText(QApplication::translate("nostarahaa", "Nosta t\303\244m\303\244 m\303\244\303\244r\303\244", Q_NULLPTR));
        nappiNosta40->setText(QApplication::translate("nostarahaa", "40 \342\202\254", Q_NULLPTR));
        nappiNosta60->setText(QApplication::translate("nostarahaa", "60 \342\202\254", Q_NULLPTR));
        nappiNosta20->setText(QApplication::translate("nostarahaa", "20 \342\202\254", Q_NULLPTR));
        label->setText(QApplication::translate("nostarahaa", "Valitse kuinka paljon haluat nostaa:", Q_NULLPTR));
        osoitelbl->setText(QApplication::translate("nostarahaa", "Osoite: ", Q_NULLPTR));
        label_2->setText(QApplication::translate("nostarahaa", "MUU SUMMA (n\303\244pp\303\244ile se t\303\244h\303\244n ja paina \"Nosta t\303\244m\303\244 m\303\244\303\244r\303\244\" -painiketta)", Q_NULLPTR));
        sukunimilbl->setText(QApplication::translate("nostarahaa", "Sukunimi: ", Q_NULLPTR));
        puhlbl->setText(QApplication::translate("nostarahaa", "Puhelinnumero: ", Q_NULLPTR));
        nappiNosta200->setText(QApplication::translate("nostarahaa", "200 \342\202\254", Q_NULLPTR));
        nappiNosta500->setText(QApplication::translate("nostarahaa", "500 \342\202\254", Q_NULLPTR));
        hetulbl->setText(QApplication::translate("nostarahaa", "Henkil\303\266turvatunnus: ", Q_NULLPTR));
        nappiSulje->setText(QApplication::translate("nostarahaa", "LOPETA", Q_NULLPTR));
        etunimilbl->setText(QApplication::translate("nostarahaa", "Etunimi: ", Q_NULLPTR));
        numero1->setText(QApplication::translate("nostarahaa", "1", Q_NULLPTR));
        numero2->setText(QApplication::translate("nostarahaa", "2", Q_NULLPTR));
        numero3->setText(QApplication::translate("nostarahaa", "3", Q_NULLPTR));
        numero4->setText(QApplication::translate("nostarahaa", "4", Q_NULLPTR));
        numero5->setText(QApplication::translate("nostarahaa", "5", Q_NULLPTR));
        numero6->setText(QApplication::translate("nostarahaa", "6", Q_NULLPTR));
        numero7->setText(QApplication::translate("nostarahaa", "7", Q_NULLPTR));
        numero8->setText(QApplication::translate("nostarahaa", "8", Q_NULLPTR));
        numero9->setText(QApplication::translate("nostarahaa", "9", Q_NULLPTR));
        numero0->setText(QApplication::translate("nostarahaa", "0", Q_NULLPTR));
        nappikorjaa->setText(QApplication::translate("nostarahaa", "<", Q_NULLPTR));
        nostoTaulu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nostarahaa: public Ui_nostarahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H
