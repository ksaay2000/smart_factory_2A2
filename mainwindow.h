#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "compte.h"
#include <QMainWindow>
#include "departement.h"
#include "employer.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void refreshw();
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_ajout_compte_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    Compte tempCompte;
    Departement tempdep;
    Employer tempemp;
};
#endif // MAINWINDOW_H
