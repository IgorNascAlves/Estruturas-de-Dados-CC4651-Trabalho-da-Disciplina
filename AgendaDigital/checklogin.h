#ifndef CHECKLOGIN_H
#define CHECKLOGIN_H
#include <string>
#include<lds.h>
#include<pessoa.h>


using namespace std;


class checkLogin{
    private:

    public:
        bool checaLogin(Lds<Pessoa>Cadastrados,string usr,string nome,string senha){
            for(int i =0;i<=Cadastrados.getN();i++)
            {
                if (Cadastrados[i]->login == usr)
                    cout<<"Ja existe um usuario com esse nome"<<endl;
                    return false;
            }

            Cadastrados.inserir(Pessoa(nome,usr,senha));)
            return true;
    }



};
#endif // CHECKLOGIN_H
