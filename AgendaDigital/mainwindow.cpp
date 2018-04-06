#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tblExibir->setColumnCount(3);
    ui->tblExibir->setRowCount(0);
    id = -1;
    ui->btnSair->setEnabled(false);
    //ui->gbOpcoes->setHidden(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnEntrar_clicked()
{
    Lds<Pessoa> v = Cadastrados;
    string usr = (ui->lblUser->text()).toStdString();
    string senha = (ui->lblSenha->text()).toStdString();
    for(int i =0;i<=v.getN();i++)
        if(v[i]->getLogin() == usr){
            if(v[i]->getSenha() == senha){
                id = i;
                ui->lblNome->setEnabled(false);
                ui->lblUser->setEnabled(false);
                ui->lblSenha->setEnabled(false);
                ui->btnEntrar->setEnabled(false);
                ui->btnCadastro->setEnabled(false);
                ui->btnSair->setEnabled(true);
            }
        }
    if(id == -1)
    {
        QMessageBox msgBox;
        msgBox.setText("usuario ou senha incorretos");
        msgBox.exec();
    }
}
void MainWindow::atualizaExibir(){
    ui->tblExibir->clear();
    ui->tblExibir->setRowCount(0);
    if(id > -1){
        int size = Cadastrados[id]->getTarefas()->getSize();
        ui->tblExibir->setRowCount(size);
        Compromisso valor;
        int i=0;
        while(Cadastrados[id]->getTarefas()->busca(i++,valor)){
            ui->tblExibir->setItem(i,0, new QTableWidgetItem(QString::fromStdString(valor.getTitulo())));
            ui->tblExibir->setItem(i,1, new QTableWidgetItem(QString::fromStdString(valor.getDescricao())));
            ui->tblExibir->setItem(i,2, new QTableWidgetItem(valor.getDia()));
        }
    }
}
void MainWindow::on_btnCadastro_clicked()
{
    string usr = (ui->lblUser->text()).toStdString();
    string senha = (ui->lblSenha->text()).toStdString();
    string nome = (ui->lblNome->text()).toStdString();
    checkLogin teste;
    teste.checaLogin(Cadastrados,nome,usr,senha);
    Cadastrados.imprimir();
    id = Cadastrados.busca(Pessoa ("",usr,""));
    ui->lblNome->setEnabled(false);
    ui->lblUser->setEnabled(false);
    ui->lblSenha->setEnabled(false);
    ui->btnEntrar->setEnabled(false);
    ui->btnCadastro->setEnabled(false);
    ui->btnSair->setEnabled(true);
    atualizaExibir();
}

void MainWindow::on_btnSalvar_clicked()
{
    string titulo = (ui->lblTitulo->text()).toStdString();
    string descricao = (ui->textEdit->toPlainText().toStdString());
    int dia = (ui->calendarWidget->selectedDate().day());
    int mes = (ui->calendarWidget->selectedDate().month());
    int ano = (ui->calendarWidget->selectedDate().year());
    Cadastrados[0]->getTarefas()->inserir(Compromisso(titulo,descricao,dia,mes,ano));
    Cadastrados[0]->getTarefas()->imprimir();
    atualizaExibir();

}

void MainWindow::on_btnSair_clicked()
{
    ui->lblNome->setEnabled(true);
    ui->lblUser->setEnabled(true);
    ui->lblSenha->setEnabled(true);
    ui->btnEntrar->setEnabled(true);
    ui->btnCadastro->setEnabled(true);
    ui->btnSair->setEnabled(false);
    id = -1;
    atualizaExibir();
}
