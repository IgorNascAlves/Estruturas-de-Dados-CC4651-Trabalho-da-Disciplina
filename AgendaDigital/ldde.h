#ifndef LDDE_H
#define LDDE_H
#include "registro.h"
#include <iostream>
using namespace std;


template <typename T>
class Ldde{
private:
    Registro<T> *primeiro;
    Registro<T> *ultimo;
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
	
	//remocao pode sofrer modificacao ainda!!!!
	    bool remover(T valor){
         Registro<T> *a = NULL;
         Registro<T> *b = primeiro;
         Registro<T> *c = busca(novo->getConteudo()); 
         
         if(!c){
         cout<<"O que voce esta tentando excluir não existe dentro da lista!!"<<endl;
         return false        
         }
         
         a = c->getAnterior();
         b = c->getProximo();
         a->setProximo(b);
         b->setAnterior(a);
         delete c;
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
	  Registro<T> *busca(T valor){
                Registro<T> *b = primeiro;
                while(b){
                         if(b->getConteudo()==valor){
                            return b;
                                          }
                            b=b->getProximo();
                }                
    }

};


#endif // LDDE_H
