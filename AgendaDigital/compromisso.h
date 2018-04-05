#ifndef compromisso_H
#define compromisso_H
#include <string>

using namespace std;


class Compromisso{
    private:
        string titulo;
        string descricao;
        int dia;
        int mes;
        int ano;

    public:
        Compromisso() {
            titulo = "";
            descricao = "";
            dia = 0;
            mes = 0;
            ano = 0;
        }
        Compromisso(string tit, string desc, int d, int m , int a ) {
            titulo = tit;
            descricao = desc;
            dia = d;
            mes = m;
            ano = a;
        }
        bool setMes(int i){
            if(i<1 && i>12)
                return false;
            mes = i;
            return true;

        }

        int getMes(){
            return mes;
        }


        void setDia(int i){
            dia = i;

        }
        int getDia(){
            return dia;
        }
        void setAno(int i){
            ano = i;

        }
        int getAno(){
            return ano;
        }

        void setTitulo(string a){
            titulo = a;
        }
        string getTitulo(){
            return titulo;
        }
        void setDescricao(string a){
            descricao = a;
        }
        string getDescricao(){
            return descricao;
        }
};
bool operator > (Compromisso x, Compromisso y){//retorna true se o 1 parametro acontecer depois do segundo
    if(x.getAno() > y.getAno())
        return true;
    else{
        if(x.getMes() > y.getMes() && x.getAno() == y.getAno())
            return true;
        else{
            if(x.getDia() > y.getDia() &&x.getMes() == y.getMes() && x.getAno() == y.getAno())
                return true;
            else
                return false;
        }
    }
}

#endif // compromisso_H
