#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tblExibir->setColumnCount(4);
    ui->tblExibir->setRowCount(1);
    id = -1;
    ui->btnSair->setEnabled(false);
    ui->gbCompromisso->setHidden(true);
   // ui->tblExibir->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::atualizaExibir(bool entrando){
    ui->tblExibir->clear();
    ui->tblExibir->setRowCount(0);
    if(id > -1){
        int size = Cadastrados[id]->getTarefas()->getSize();
        ui->tblExibir->setRowCount(size);
        Compromisso valor;
        int i=0;
        while(Cadastrados[id]->getTarefas()->busca(i++,valor)){
            ui->tblExibir->setItem(i-1,0, new QTableWidgetItem(QString::fromStdString(valor.getTitulo())));
            ui->tblExibir->setItem(i-1,1, new QTableWidgetItem(QString::fromStdString(valor.getDescricao())));
            ui->tblExibir->setItem(i-1,2, new QTableWidgetItem(QString::fromStdString(valor.concatenaData())));
            ui->tblExibir->setItem(i-1,3, new QTableWidgetItem(QString::fromStdString(valor.converterHorario())));
        }
    }
    ui->lblNome->setText("");
    ui->lblSenha->setText("");
    ui->lblUser->setText("");
    ui->lblTitulo->setText("");
    ui->textEdit->setText("");
    ui->timeEdit->setTime(QTime(0,0,0,0));

    ui->calendarWidget->showToday();

    ui->lblNome->setEnabled(!entrando);
    ui->lblUser->setEnabled(!entrando);
    ui->lblSenha->setEnabled(!entrando);
    ui->btnEntrar->setEnabled(!entrando);
    ui->btnCadastro->setEnabled(!entrando);
    ui->btnSair->setEnabled(entrando);
    ui->gbCompromisso->setHidden(!entrando);
}


void MainWindow::on_btnEntrar_clicked()
{
    bool entrou = false;
    Lds<Pessoa> v = Cadastrados;
    string usr = (ui->lblUser->text()).toStdString();
    string senha = (ui->lblSenha->text()).toStdString();
    for(int i =0;i<=v.getN();i++)
        if(v[i]->getLogin() == usr){
            if(v[i]->getSenha() == senha){
                id = i;
                entrou = true;
            }
        }
    if(id == -1)
    {
        QMessageBox msgBox;
        msgBox.setText("usuario ou senha incorretos");
        msgBox.exec();
    }
    atualizaExibir(entrou);
}

void MainWindow::on_btnCadastro_clicked()
{
    bool entrou = false;
    string usr = (ui->lblUser->text()).toStdString();
    string senha = (ui->lblSenha->text()).toStdString();
    string nome = (ui->lblNome->text()).toStdString();
    checkLogin teste;
    if(teste.checaLogin(Cadastrados,nome,usr,senha)){
        Cadastrados.imprimir();
        id = Cadastrados.busca(Pessoa ("",usr,""));
        entrou = true;
    }
    atualizaExibir(entrou);
}

void MainWindow::on_btnSalvar_clicked()
{
    string titulo = (ui->lblTitulo->text()).toStdString();
    string descricao = (ui->textEdit->toPlainText().toStdString());
    int dia = (ui->calendarWidget->selectedDate().day());
    int mes = (ui->calendarWidget->selectedDate().month());
    int ano = (ui->calendarWidget->selectedDate().year());
    int hora = (ui->timeEdit->time().hour());
    int min = (ui->timeEdit->time().minute());
    Cadastrados[id]->getTarefas()->inserir(Compromisso(titulo,descricao,dia,mes,ano,hora,min));
    Cadastrados[id]->getTarefas()->imprimir();
    atualizaExibir(true);
}

void MainWindow::on_btnSair_clicked()
{
    id = -1;
    atualizaExibir(false);
}

void MainWindow::on_btnBuscar_clicked()
{
    Lds<Pessoa> v = Cadastrados;
    string titulo = (ui->lblTitulo->text()).toStdString();
    Registro<Compromisso> * busca = v[id]->getTarefas()->buscaTitulo(titulo);
    if(busca){
        Compromisso hoje = busca->getConteudo();
        ui->calendarWidget->setSelectedDate(QDate(hoje.getAno(),hoje.getMes(),hoje.getDia()));
        ui->lblTitulo->setText(QString::fromStdString(hoje.getTitulo()));
        ui->textEdit->setText(QString::fromStdString(hoje.getDescricao()));
    }else{
        QMessageBox msgBox;
        msgBox.setText("Registro não encontrado");
        msgBox.exec();
    }

}

void MainWindow::on_btnDeletar_clicked()
{
    Cadastrados[id]->getTarefas()->remove(ui->lblTitulo->text().toStdString());
    atualizaExibir(true);
}


void MainWindow::on_tblExibir_doubleClicked(const QModelIndex &index)
{

    QMessageBox msgBox;
    int i = index.row();
    Compromisso valor = Cadastrados[id]->getTarefas()->buscaCompromisso(i);
    msgBox.setText(QString::fromStdString(valor.getTitulo()+"\n"+ valor.getDescricao()+"\n"+valor.concatenaData()+"   -   "+ valor.converterHorario()));
    msgBox.exec();
}


