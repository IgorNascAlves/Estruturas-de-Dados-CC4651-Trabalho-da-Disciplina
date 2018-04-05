#ifndef Lds_H
#define Lds_H
#include <iostream>
using namespace std;
template <class T>
class Lds{
    private:
        T* v;
        int n;
        int tamAloc;

    public:
        Lds(){
            n = 0;
            tamAloc = 1;
            v = new T[tamAloc];
        }
        bool inserir(T valor){
            int i=0;
            while(i<n && v[i]<valor)i++;
            if(!empurra(i,valor))
                return false;
            n++;
            return true;
        }
        int busca(T valor){
            int ind = buscaRecursivaBinaria(0,n,valor);
            if(ind != -1)
                return ind;
            cout<<"Não encontrado"<<endl;
            return -1;
        }
        void imprimir(){
            for(int i=0;i<n;i++)
                cout<<i<<": "<<v[i]<<endl;
        }
        bool remover(T valor){
            int i = busca(valor);
            if(i < 0 || !puxa(i))
                return false;
            n--;
            return true;
        }
        void removerInd(int i){
            remover(v[i]);
        }
        T* operator[](int i){
            if(i>=n)
                return v;
           return v+i;
        }
        bool operator +(T valor){
            return inserir(valor);
        }
        ~Lds(){
//            int i = 0;
//            while(i<n){
//                removerInd(i);
//                i++;
//            }
        }

    private:
        void copiar(T* v, T*v2){
            for(int i=0;i<n;i++)
                v2[i] = v[i];
        }
        bool realoca(){
            T* v2 = new T[tamAloc*2];
            if(!v2)
                return false;
            tamAloc = tamAloc*2;
            copiar(v,v2);
            v = v2;
            return true;
        }
        bool desaloca(){
            int tamAloc2 = tamAloc/2;
            T* v2 = new T[tamAloc2];
            if(!v2)
                return false;
            tamAloc = tamAloc2;
            copiar(v,v2);
            v = v2;
            return true;
        }
        bool empurra(int i,T valor){
            if(n >= tamAloc)
                if(!realoca())
                    return false;
            int j=0;
            for(j=n ; j>i; j=j-1)
                v[j] = v[j-1]; // linha com problema

            v[i] = valor;
            return true;
        }
        bool puxa(int i){
            if(n < tamAloc/2)
                if(!desaloca())
                    return false;
            int j=0;
            for(j=i ; j<n;j++)
                v[j] = v[j+1];
            return true;
        }
        int buscaRecursivaBinaria(int i, int f, T valor){
            if(i>f)
                return -1;
            int p = (i+f)/2;
            if(v[p] == valor)
                return p;
            if(v[p] < valor)
                return buscaRecursivaBinaria(p+1,f,valor);
            else
                return buscaRecursivaBinaria(i,p-1,valor);
        }
};
#endif // Lds_H
