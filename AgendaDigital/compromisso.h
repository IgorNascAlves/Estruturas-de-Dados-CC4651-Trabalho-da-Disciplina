#ifndef compromisso_H
#define compromisso_H
#include "ldde.h"


class Compromisso
{

private:

    string Titulo;
    string Descricao;
    int Dia;
    int Mes;
    int Ano;

public:
    Compromisso() {
        Titulo = 0;
        Descricao = 0;
        Dia = 0;
        Mes = 0;
        Ano = 0;
    }

    bool setMes(int i){
        if(i<1 && i>12)
            return false;
        Mes = i;
        return true;

    }

    int getMes(){
        return Mes;
    }


    void setDia(int i){
        Dia = i;

    }
    int getDia(){
        return Dia;
    }
    void setAno(int i){
        Ano = i;

    }
    int getAno(){
        return Ano;
    }

    void setTitulo(string a){
        Titulo = a;
    }
    string getTitulo(){
        return Titulo;
    }
    void setDescricao(string a){
        Descricao = a;
    }
    string getDescricao(){
        return Descricao;
    }






};


#endif // compromisso_H
