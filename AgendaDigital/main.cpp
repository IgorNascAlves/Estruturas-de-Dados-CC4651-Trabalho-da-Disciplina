#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"
#include "pessoa.h"

int main(int argc, char *argv[])
{
    /*
    Ldde<Compromisso> teste;
    teste.inserir(Compromisso("dormir", "Soocorro preciso dormir", 20, 4, 2018));
    teste.inserir(Compromisso("ir a FEI", "Fazer o q ne?", 12, 4, 2018));
    teste.inserir(Compromisso("Ir a feira", "Vender pastel de flango", 23, 4, 2018));
    teste.inserir(Compromisso("Casa das prima", "Ninguem e de ferro", 7, 5, 2018));
    teste.inserir(Compromisso("Ir a fei", "aula do tio patinhas", 23, 3, 2018));
    teste.inserir(Compromisso("Cinema", "guerra civil", 7, 2, 2018));
    teste.imprimir();
    */
    //teste.Remove(10);
    //puts("");
    //teste.imprimir();
    //teste.inserir(5);
    //teste.imprimir();
    Pessoa x;
    x.getTarefas().inserir(Compromisso("Cinema", "guerra civil",10, 10, 2030));
    x.getTarefas().imprimir();

    //return 0;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
