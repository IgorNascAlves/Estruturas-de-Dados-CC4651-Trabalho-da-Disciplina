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
//    teste.inserir(Compromisso("Jogar", "Fifa 18", 32, 15, 2018));
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
    //Cadastrados[0].getTarefas()[0];

    Cadastrados[0].getTarefas()->inserir(Compromisso("Jogar", "Fifa 18", 10, 1, 2018));
    Cadastrados[0].getTarefas()->imprimir();

    Cadastrados[0].getTarefas()->inserir(Compromisso("Basquete", "nba2k", 5, 2, 2018));
    Cadastrados[0].getTarefas()->imprimir();

    Cadastrados[0].getTarefas()->imprimir();
    Cadastrados.inserir(Pessoa ("Alexandre","Japa","543210"));
    Cadastrados.inserir(Pessoa ("Rafa","R","43242"));
    Cadastrados.inserir(Pessoa ("Guilherme","G","5435"));
    Cadastrados.inserir(Pessoa ("Augusto","A","12312"));
    Cadastrados.imprimir();

//    Lds<string> teste;
//    teste.inserir("cavalo");
//    teste.inserir("bolas");
//    teste.imprimir();

//    Lds<int> testeInt;
////    for(int i = 200;i>170;i--)
////        testeInt.inserir(i);
//    testeInt.inserir(500);
//    cout<<testeInt[5]<<endl;
//    //testeInt.imprimir();

//    Pessoa* teste;
//    teste = new Pessoa[2];
//    teste[0] = Pessoa("aaaa","bbb","ccc");
//    teste[1] = Pessoa("ddd","eeee","fff");
//    teste[1] = teste[0];

    return 0;

// ERRO DOIS ESTA NO mainwindow.h
//    MainWindow w;
//    w.show();   //parte visual
    QApplication a(argc, argv);
    return a.exec();
}
