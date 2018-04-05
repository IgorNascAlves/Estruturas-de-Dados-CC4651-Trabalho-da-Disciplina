#ifndef CHECKLOGIN_H
#define CHECKLOGIN_H
#include <string>
#include<lds.h>
#include<pessoa.h>
#include <QMessageBox>
using namespace std;

class checkLogin{
public:
    bool checaLogin(Lds<Pessoa> &v,string nome,string usr,string senha){
        for(int i =0;i<=v.getN();i++)
        {
            if(v[i]->getLogin() == usr){
                QMessageBox msgBox;
                msgBox.setText("Ja existe um usuario com esse nome.");
                msgBox.exec();
                cout<<"Ja existe um usuario com esse nome"<<endl;
                return false;
            }
        }
        v.inserir(Pessoa(nome,usr,senha));
        return true;
    }
};
#endif // CHECKLOGIN_H
