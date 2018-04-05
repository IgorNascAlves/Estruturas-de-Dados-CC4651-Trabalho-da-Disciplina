#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

    //BLOCO QUE GERA ERRO DOIS
#include "pessoa.h"
#include "ldde.h"

#include <string.h>
#include "registro.h"
#include "lds.h"
#include <iostream>
#include <cstdlib>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnEntrar_clicked();
    void on_btnCadastro_clicked();

private:
    Ui::MainWindow *ui;
    Lds<Pessoa> Cadastrados;
};

#endif // MAINWINDOW_H
