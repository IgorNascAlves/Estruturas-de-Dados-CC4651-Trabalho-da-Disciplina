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

void MainWindow::on_btnCadastro_clicked()
{
    string usr = (ui->lblUser->text()).toStdString();
    string senha = (ui->lblSenha->text()).toStdString();
    string nome = (ui->lblNome->text()).toStdString();
    //Cadastrados.inserir(Pessoa(nome,usr,senha));
}
