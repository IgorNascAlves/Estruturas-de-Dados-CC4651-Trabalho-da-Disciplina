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

    string setNome(string nome){
        this->nome = nome;
    }

    string getLogin(){
        return login;
    }

    string setLogin(string login){
        this->login = login;
    }

    string getSenha(){
        return senha;
    }

    string setSenha(string senha){
        this->senha = senha;
    }


};
#endif // PESSOA_H
