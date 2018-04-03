#include <iostream>
#include <cstdlib>
#include "ldde.h"
using namespace std;

template <typename T>
class Pessoa{

private:
    string nome;
    string login;
    string senha;
	Ldde <Compromisso> tarefas;

	
public:
    Pessoa(): nome(""), login(""), senha(""){
    }

	

    void getNome(){
        return nome;
    }

    string setNome(string nome){
        this->nome = nome;
    }

    void getLogin(){
        return login;
    }

    string setLogin(string login){
        this->login = login;
    }

    void getSenha(){
        return senha;
    }

    string setSenha(string senha){
        this->senha = senha;
    }


};

