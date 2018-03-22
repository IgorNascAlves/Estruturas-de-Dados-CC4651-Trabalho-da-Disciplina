#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"
#include "pessoa.h"


int main(int argc, char *argv[])
{
    Ldde<int> teste;
    for(int i=10;i>=0;i--)
        teste.inserir(i);
    teste.imprimir();
    for(int i=0;i<10;i++)
        teste.Remove(i);
    //teste.Remove(10);
    //puts("");
    //teste.imprimir();
    //teste.inserir(5);
    //teste.imprimir();

    //return 0;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
