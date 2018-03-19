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
	        ultimo = NULL;
	    }
	    
	    bool inserir(T valor){
	        Registro<T> *a;//antes do primeiro
	        a = NULL;
	        Registro<T> *b = NULL;//primeiro
	        b = primeiro;
	        Registro<T> *novo = new Registro<T>(valor);
	            while(b && novo->getConteudo()> b->getConteudo()){
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

				return true;
	    }
	    void imprimir(){
	        Registro<T> *b = primeiro;//primeiro
			int i = 0;
	        while(b){
	            cout<<i<<" - valor e : "<<b->getConteudo()<<"\n";
	            b = b->getProximo();
	            i++;
	        }
	    }
	    int buscar(T valor){
	 		 Registro<T> *b = primeiro;
	 		 int i = 0;
	 		 while(b && b->getConteudo()){
				if(b->getConteudo() == valor)
				    return i;
				b = b->getProximo();
				i++;
			}
			return -1;
		}

};


#endif // LDDE_H
