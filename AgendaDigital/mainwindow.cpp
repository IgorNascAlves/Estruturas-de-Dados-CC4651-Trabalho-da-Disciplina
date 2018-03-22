#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tblExibir->setColumnCount(3);
    ui->tblExibir->setRowCount(10);
    //ui->gbOpcoes->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEntrar_clicked()
{
    //ui->gbOpcoes->setHidden(false);
}
