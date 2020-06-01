/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonClose;
    QLabel *TestTxt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *addBookie;
    QPushButton *addTipster;
    QPushButton *addSport;
    QPushButton *addBetType;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *sportLabel;
    QLabel *labelType;
    QLabel *labelOdds;
    QLabel *labelStake;
    QLabel *labelTipster;
    QLabel *labelBookie;
    QTableWidget *tableBet;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *chooseSport;
    QComboBox *betType;
    QLineEdit *odds;
    QLineEdit *stake;
    QComboBox *betTipster;
    QComboBox *bookie;
    QPushButton *place;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuBET_TRACK;
    QMenu *menu420;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonClose = new QPushButton(centralwidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(730, 510, 75, 23));
        TestTxt = new QLabel(centralwidget);
        TestTxt->setObjectName(QString::fromUtf8("TestTxt"));
        TestTxt->setGeometry(QRect(710, 480, 61, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 490, 91, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 490, 91, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 490, 51, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 490, 41, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 490, 91, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(530, 490, 91, 16));
        addBookie = new QPushButton(centralwidget);
        addBookie->setObjectName(QString::fromUtf8("addBookie"));
        addBookie->setGeometry(QRect(10, 110, 75, 23));
        addTipster = new QPushButton(centralwidget);
        addTipster->setObjectName(QString::fromUtf8("addTipster"));
        addTipster->setGeometry(QRect(10, 140, 75, 23));
        addSport = new QPushButton(centralwidget);
        addSport->setObjectName(QString::fromUtf8("addSport"));
        addSport->setGeometry(QRect(10, 170, 75, 23));
        addBetType = new QPushButton(centralwidget);
        addBetType->setObjectName(QString::fromUtf8("addBetType"));
        addBetType->setGeometry(QRect(10, 200, 75, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 0, 461, 16));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        sportLabel = new QLabel(widget);
        sportLabel->setObjectName(QString::fromUtf8("sportLabel"));

        horizontalLayout_3->addWidget(sportLabel);

        labelType = new QLabel(widget);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        horizontalLayout_3->addWidget(labelType);

        labelOdds = new QLabel(widget);
        labelOdds->setObjectName(QString::fromUtf8("labelOdds"));

        horizontalLayout_3->addWidget(labelOdds);

        labelStake = new QLabel(widget);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));

        horizontalLayout_3->addWidget(labelStake);

        labelTipster = new QLabel(widget);
        labelTipster->setObjectName(QString::fromUtf8("labelTipster"));

        horizontalLayout_3->addWidget(labelTipster);

        labelBookie = new QLabel(widget);
        labelBookie->setObjectName(QString::fromUtf8("labelBookie"));

        horizontalLayout_3->addWidget(labelBookie);

        tableBet = new QTableWidget(centralwidget);
        tableBet->setObjectName(QString::fromUtf8("tableBet"));
        tableBet->setGeometry(QRect(120, 50, 621, 371));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(21, 510, 656, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chooseSport = new QComboBox(widget1);
        chooseSport->addItem(QString());
        chooseSport->addItem(QString());
        chooseSport->addItem(QString());
        chooseSport->setObjectName(QString::fromUtf8("chooseSport"));

        horizontalLayout->addWidget(chooseSport);

        betType = new QComboBox(widget1);
        betType->addItem(QString());
        betType->setObjectName(QString::fromUtf8("betType"));

        horizontalLayout->addWidget(betType);

        odds = new QLineEdit(widget1);
        odds->setObjectName(QString::fromUtf8("odds"));

        horizontalLayout->addWidget(odds);

        stake = new QLineEdit(widget1);
        stake->setObjectName(QString::fromUtf8("stake"));

        horizontalLayout->addWidget(stake);

        betTipster = new QComboBox(widget1);
        betTipster->addItem(QString());
        betTipster->addItem(QString());
        betTipster->addItem(QString());
        betTipster->setObjectName(QString::fromUtf8("betTipster"));

        horizontalLayout->addWidget(betTipster);

        bookie = new QComboBox(widget1);
        bookie->addItem(QString());
        bookie->addItem(QString());
        bookie->addItem(QString());
        bookie->setObjectName(QString::fromUtf8("bookie"));

        horizontalLayout->addWidget(bookie);


        horizontalLayout_2->addLayout(horizontalLayout);

        place = new QPushButton(widget1);
        place->setObjectName(QString::fromUtf8("place"));

        horizontalLayout_2->addWidget(place);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 0, 239, 25));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuBET_TRACK = new QMenu(menubar);
        menuBET_TRACK->setObjectName(QString::fromUtf8("menuBET_TRACK"));
        menu420 = new QMenu(menubar);
        menu420->setObjectName(QString::fromUtf8("menu420"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBET_TRACK->menuAction());
        menubar->addAction(menu420->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("MainWindow", "Tull", nullptr));
        TestTxt->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CHOOSE SPORT", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "BET TYPE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ODDS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "STAKE", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "BET TIPSTER", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "BOOKIE", nullptr));
        addBookie->setText(QCoreApplication::translate("MainWindow", "Add Bokkie", nullptr));
        addTipster->setText(QCoreApplication::translate("MainWindow", "Add Tipster", nullptr));
        addSport->setText(QCoreApplication::translate("MainWindow", "Add Sport", nullptr));
        addBetType->setText(QCoreApplication::translate("MainWindow", "Add Bet Type", nullptr));
        sportLabel->setText(QString());
        labelType->setText(QString());
        labelOdds->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelStake->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelTipster->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelBookie->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        chooseSport->setItemText(0, QCoreApplication::translate("MainWindow", "FOOTBALL", nullptr));
        chooseSport->setItemText(1, QCoreApplication::translate("MainWindow", "BASKETBALL", nullptr));
        chooseSport->setItemText(2, QCoreApplication::translate("MainWindow", "ESPORTS", nullptr));

        betType->setItemText(0, QCoreApplication::translate("MainWindow", "ASIAN +/+", nullptr));

#if QT_CONFIG(tooltip)
        betType->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Select Bet Type</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        betTipster->setItemText(0, QCoreApplication::translate("MainWindow", "SJAKKTREKK", nullptr));
        betTipster->setItemText(1, QCoreApplication::translate("MainWindow", "BIG BRAIN", nullptr));
        betTipster->setItemText(2, QCoreApplication::translate("MainWindow", "OnsideOllie", nullptr));

        bookie->setItemText(0, QCoreApplication::translate("MainWindow", "MrGreen", nullptr));
        bookie->setItemText(1, QCoreApplication::translate("MainWindow", "BET365", nullptr));
        bookie->setItemText(2, QString());

        place->setText(QCoreApplication::translate("MainWindow", "PLACE", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "HISTORY", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "BONUSES", nullptr));
        menuBET_TRACK->setTitle(QCoreApplication::translate("MainWindow", "BET TRACK", nullptr));
        menu420->setTitle(QCoreApplication::translate("MainWindow", "420", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
