#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"
#include "pessoa.h"
#include <iostream>
#include <cstdlib>



int main(int argc, char *argv[])
{

//    Ldde<Compromisso> teste;
//    teste.inserir(Compromisso("dormir", "Soocorro preciso dormir", 20, 4, 2018));
//    teste.inserir(Compromisso("ir a FEI", "Fazer o q ne?", 12, 4, 2018));
//    teste.inserir(Compromisso("Ir a feira", "Vender pastel", 23, 4, 2018));
//    teste.inserir(Compromisso("Dormir mais", "Ninguem e de ferro", 7, 5, 2018));
//    teste.inserir(Compromisso("Ir a fei", "aula do tio patinhas", 23, 3, 2018));
//    teste.inserir(Compromisso("Cinema", "guerra civil", 7, 2, 2018));
//    //teste.inserir(Compromisso("Jogar", "Fifa 18", 32, 15, 2018));
//    teste.imprimir();
//    cout<<"-------------------------------------------------\n";
//    teste.remove("Ir a feira");

//    teste.imprimir();

//    Pessoa x;
//    x.getTarefas()->inserir(Compromisso("Cinema", "guerra civil",10, 10, 2030));
//    x.getTarefas()->imprimir();

    //BLOCO QUE GERA ERRO UM
    Lds<Pessoa> Cadastrados;
    Cadastrados.inserir(Pessoa ("Igor","Popo","012345"));
    Cadastrados.inserir(Pessoa ("Alexandre","Japa","543210"));
    Cadastrados.imprimir();

    return 0;

// ERRO DOIS ESTA NO mainwindow.h
//    MainWindow w;
//    w.show();   //parte visual
    QApplication a(argc, argv);
    return a.exec();
}
