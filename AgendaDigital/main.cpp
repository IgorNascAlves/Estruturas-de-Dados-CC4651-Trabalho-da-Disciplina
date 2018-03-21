#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"


int main(int argc, char *argv[])
{
    Lds<int> teste;

    teste.inserir(10);
    teste.inserir(1);
    teste.remover(5);
    teste.remover(1);
    teste.remover(10);
    teste.imprimir();
    cout<<endl;

    for(int i=10;i>=0;i--)
        teste.inserir(i);

    cout<<teste.remover(10)<<endl;
    cout<<teste.remover(101)<<endl;
    //cout<<teste.busca(100)<<endl;
    //cout<<teste.busca(101)<<endl;
    teste.imprimir();

//   MainWindow w;
//   w.show();
//   Ldde<int> teste;
//   teste.inserir(10);
//   teste.inserir(50);
//   teste.inserir(1);

//   teste.busca(1);

//   teste.Remove(2);
//   teste.Remove(10);
//   teste.Remove(50);
//   teste.Remove(1);

//   teste.inserir(5);

//   teste.imprimir();

    return 0;
    //QApplication aa(argc, argv);
    //return aa.exec();
}
