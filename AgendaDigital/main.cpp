#include "mainwindow.h"
#include <QApplication>
#include "registro.h"
#include "ldde.h"
#include "lds.h"


int main(int argc, char *argv[])
{
    QApplication aa(argc, argv);
    MainWindow w;
    w.show();
   //Ldde<int> teste;
   //teste.inserir(10);
    return aa.exec();
}
