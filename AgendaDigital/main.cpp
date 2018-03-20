#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"


int main(int argc, char *argv[])
{
    //QApplication aa(argc, argv);
    //MainWindow w;
    //w.show();
   Ldde<int> teste;
   teste.inserir(10);
   teste.inserir(50);
   teste.inserir(1);

   //teste.busca(1);

   teste.Remove(2);
   teste.Remove(10);
   teste.Remove(50);
   //teste.Remove(1);

   teste.inserir(5);

   teste.imprimir();
   //return aa.exec();
   return 0;
}
