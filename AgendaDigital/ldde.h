#ifndef LDDE_H
#define LDDE_H
#include "registro.h"
#include "compromisso.h"
#include <iostream>
using namespace std;



template <typename T>
class Ldde{
private:
    Registro<T> *primeiro;
    Registro<T> *ultimo;
    int size;
public:
    Ldde(){
        size = 0;
        primeiro = NULL;
        ultimo = NULL;
    }
    bool inserir(T valor){
        Registro<T> *a;//antes do primeiro
        a = NULL;
        Registro<T> *b = NULL;//primeiro
        b = primeiro;
        Registro<T> *novo = new Registro<T>(valor);
        while(b && novo->getConteudo() > b->getConteudo()){
            a=b;
            b = b->getProximo();
        }

        if(a)
            a->setProximo(novo);
        else{ // caso o valor seja o menor da fila
            primeiro = novo;
        }

        if(b)//caso o valor a inserir seja o maior da fila
            b->setAnterior(novo);
        else
            ultimo = novo;


        novo->setProximo(b);
        novo->setAnterior(a);


        //		    if(dia>31 || dia<1 || mes>12 || mes<1 || ano<0){
        //		   	cout<<"A data eh invalida"<< endl;
        //			   return false;
        //		   }
        size++;

        return true;
    }

//    ~Ldde(){
//        delete primeiro;
//        delete ultimo;
//    }
    Compromisso buscaCompromisso(int ind){
        Registro<T> *b = primeiro;//primeiro
        int i=0;
        while(b && i++ != ind)
            b = b->getProximo();
        if(b)
            return b->getConteudo();
        }

    bool busca(int ind, T &valor){
        Registro<T> *b = primeiro;//primeiro
        int i=0;
        while(b && i++ != ind)
            b = b->getProximo();
        if(b){
            valor = b->getConteudo();
            return true;
        }
        return false;
    }
    bool remove(string t){
        Registro<T> *a = NULL;
        Registro<T> *b = primeiro;
        Registro<T> *c = buscaTitulo(t);

        if(!c){
            cout<<"O que voce esta tentando excluir não existe dentro da lista!!"<<endl;
            return false;
        }
        a = c->getAnterior();
        b = c->getProximo();

        if(a){
            a->setProximo(b);

        }else{
            primeiro = b;

        }

        if(b){
            b->setAnterior(a);

        }else{
            ultimo = a;

        }
        delete c;
        size--;
        return true;

    }
    int getSize(){
        return size;
    }
    void imprimir(){
        Registro<T> *b = primeiro;//primeiro
        while(b){
            cout<<b->getConteudo().getDia();
            cout<<"/"<<b->getConteudo().getMes();
            cout<<"/"<<b->getConteudo().getAno()<<"\n";
            cout<<"Titulo   :"<<b->getConteudo().getTitulo()<<"\n";
            cout<<"Descricao:"<<b->getConteudo().getDescricao();
            cout<<"\n\n";
            b = b->getProximo();
        }
    }
    Registro<Compromisso> *buscaData(Compromisso data){//recebe uma data e retorna o compromisso do dia
        Registro<Compromisso> *b = primeiro;
        while(b){
            if(b->getConteudo().getDia()== data.getDia() && b->getConteudo().getMes() ==  data.getMes() && b->getConteudo().getAno() ==  data.getAno())
                return b;

            b=b->getProximo();
        }
        return NULL;
    }
    Registro<Compromisso> *buscaTitulo(string t){// recebe uma string e retorna o compromisso com este mesmo titulo
        Registro<Compromisso> *b = primeiro;
        while(b){
            if(b->getConteudo().getTitulo()==t){
                return b;
            }
            b=b->getProximo();
        }
        return NULL;
    }

};

#endif // LDDE_H
