#ifndef PESSOA_H
#define PESSOA_H
#include "ldde.h"

using namespace std;

class Pessoa{

private:
    string nome;
    string login;
    string senha;
    Ldde <Compromisso> tarefas;
public:
    Pessoa(): nome(""), login(""), senha(""){
    }
    Pessoa(string n, string l, string s){
        nome = n;
        login= l;
        senha = s;
    }

    Ldde<Compromisso>* getTarefas(){
        return &tarefas;
    }


    string getNome(){
        return nome;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    string getLogin(){
        return login;
    }

    void setLogin(string login){
        this->login = login;
    }

    string getSenha(){
        return senha;
    }

    void setSenha(string senha){
        this->senha = senha;
    }


};
bool operator ==(Pessoa a, Pessoa b){
    if(a.getLogin() == b.getLogin())
        return true;
    return false;
}
bool operator <(Pessoa a, Pessoa b){
    if(a.getLogin() < b.getLogin())
        return true;
    return false;
}
//void operator =(Pessoa &a, Pessoa &b){
//    a.setLogin(b.getLogin());
//    a.setNome(b.getNome());
//    a.setSenha(b.getSenha());
//    a.getTarefas()->inserir(b.getTarefas());
//}
ostream &operator <<(ostream& a, Pessoa b){
    a<<"Nome: "<<b.getNome()<<" Senha: "<<b.getSenha()<<endl;
    return a;
}
#endif // PESSOA_H
