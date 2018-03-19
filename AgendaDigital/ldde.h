#ifndef LDDE_H
#define LDDE_H
#include "registro.h"
#include <iostream>
using namespace std;


template <typename T>
class Ldde{
private:
    Registro<T> *primeiro;
public:
    Ldde(){
        primeiro = NULL;
    }
    Ldde(T valor){
        primeiro = NULL;
        primeiro->setConteudo(valor);
    }

    bool inserir(T valor){
        Registro<T> *a = NULL;//antes do primeiro
        Registro<T> *b = primeiro;//primeiro
        Registro<T> *novo = new Registro<T>(valor);
            while(b && novo->getConteudo()> b->getConteudo()){
                a=b;
                b = b->getProximo();
            }
            if(!a){ // caso o valor seja o menor da fila
                primeiro = novo;
                primeiro->setProximo(b);
                b->setAnterior(primeiro);
                return true;
            }
            if(!b){//caso o valor a inserir seja o maior da fila
                    a->setProximo(novo);
                    novo->setAnterior(a);
                    return true;
                }
            return false;
    }
    void imprimir(){
        Registro<T> *b = primeiro;//primeiro
        while(b){
            cout<<"valor de b"<<b->getConteudo();
            b = b->getProximo();
        }

    }
};


#endif // LDDE_H
