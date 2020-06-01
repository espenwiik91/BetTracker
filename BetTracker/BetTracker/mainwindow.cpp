#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QTableView>
#include <QStandardItemModel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->betType->addItem("BTTS");
    ui->betType->addItem("AWAY");
    ui->betType->addItem("HOME");
    ui->betType->addItem("GOAL SCORER");
    ui->betType->addItem("TOTAL CARDS");

    ui->tableBet->setRowCount(10);
    ui->tableBet->setColumnCount(7);
    ui->tableBet->verticalHeader()->setVisible(false);
    ui->tableBet->setHorizontalHeaderItem(0, new QTableWidgetItem("Sport"));
    ui->tableBet->setHorizontalHeaderItem(1, new QTableWidgetItem("Bet Type"));
    ui->tableBet->setHorizontalHeaderItem(2, new QTableWidgetItem("ODDS"));
    ui->tableBet->setHorizontalHeaderItem(3, new QTableWidgetItem("STAKE"));
    ui->tableBet->setHorizontalHeaderItem(4, new QTableWidgetItem("Tipster"));
    ui->tableBet->setHorizontalHeaderItem(5, new QTableWidgetItem("Bookie"));
    ui->tableBet->setHorizontalHeaderItem(6, new QTableWidgetItem("Pot.Prof"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

class bet {
    public:
        int iProfit;
        int iOdds;
        int iStake;
        QString sSport;
        QString sBet;
        QString sBookie;
        QString sTipster;
};


void MainWindow::on_pushButtonClose_clicked()
{
      ui->TestTxt->setText("Hello World");

      bet newBet;
      newBet.sBet = ui->betType->currentText();
      newBet.sSport = ui->chooseSport->currentText();
      newBet.sBookie = ui->bookie->currentText();
      newBet.sTipster = ui->betTipster->currentText();

      //ui->betList->addItem(newBet.sBet);
}

void MainWindow::on_place_clicked()
{
    //int profit;
    ui->sportLabel->setText(ui->chooseSport->currentText());
    ui->labelType->setText(ui->betType->currentText());
    ui->labelStake->setText(ui->odds->displayText());
    ui->labelOdds->setText(ui->stake->displayText());
    ui->labelTipster->setText(ui->betTipster->currentText());
    ui->labelBookie->setText(ui->bookie->currentText());

    QFrame *betCont = new QFrame(this);
    betCont->setGeometry(QRect(10,10,30,80));
    betCont->setStyleSheet("background-color: rgb(255, 255, 255");



}

void MainWindow::on_addBookie_clicked()
{

    QString addNewBookie = QInputDialog::getText(this, "Add new Bookie", "Add new Bookie");
    ui->bookie->addItem(addNewBookie);
}

void MainWindow::on_addTipster_clicked()
{
    QString addNewTipster = QInputDialog::getText(this, "Add new Tipster", "Add new Tipster");
    ui->betTipster->addItem(addNewTipster);
}


void MainWindow::on_addSport_clicked()
{
    QString addNewSport = QInputDialog::getText(this, "Add new Sport", "Add new Sport");
    ui->chooseSport->addItem(addNewSport);
}

void MainWindow::on_addBetType_clicked()
{
    QString addNewBetType = QInputDialog::getText(this, "Add new Bet Type", "Add new Bet Type");
    ui->betType->addItem(addNewBetType);
}
