#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButtonClose_clicked();

    void on_place_clicked();

    void on_addBookie_clicked();

    void on_addTipster_clicked();

    void on_addSport_clicked();

    void on_addBetType_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
