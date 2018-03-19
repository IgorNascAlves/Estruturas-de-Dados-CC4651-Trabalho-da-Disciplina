#ifndef Lds_H
#define Lds_H
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <exception>
#include <algorithm>

template <class T>
class Lds
{private:
    int n, alocacao;
    T *vetor;

  public:

      //construtor com uma assinatura
      Lds(int aloc=100){
          n=0;
          this->alocacao = aloc;
          this->vetor = new T[alocacao]; //alocando vetor do tipo T
      }

      /*
      //construtor com duas assinaturas
      Lds(T elemento, int quantidade){

          n = 0;
          this->alocacao = quantidade;
          this->vetor = new T[alocacao]; //alocando vetor tipo T

          for(int i =0; i<quantidade; i++){
              Inserir(elemento);
          }

      }
      */

    bool Realocar(int nalc) { //fun��o que tem o papel de realocar
      if (nalc <= n)
        return false;

      T *temp = new T[nalc];
      if (temp == NULL){
        return false;
      }

      copy(vetor, vetor + n, temp);
      delete[] vetor;
      vetor = temp;
      return true;
    }

    //fun��o que insere dado ordenado na lista
    bool InserirOrdenado(T novo) {

      if (n >= alocacao) // verifica se � possivel inserir
        if (!Realocar(2 * alocacao))
          return false;

      // buscando a posi��o para inserir conteudo
      int i = 0;
      for(i=0; i < n && vetor[i] < novo; i++);

      for (int j = n; j > i; j--) {
        vetor[j] = vetor[j - 1];
      }

      vetor[i] = novo;
      n++;
      return true;
    }

    int busca(T elemento) { //busca linear
      for (int i = 0; i < n; i++) {
        if (vetor[i] == elemento)
          return i;
      }
      return -1;
    }

    int buscaBinaria(T elemento) { //busca binaria
      int i = 0;
      int f = n - 1;
      while (i <= f) {
        int p = (i + f) / 2;
        if (elemento < vetor[p])
          f = p - 1;
        else if (elemento > vetor[p])
          i = p + 1;
        else
          return p;
      }

      return -1;
    }

    bool remove(T elemento) { // fun��o que remove elemento da lista
      int pos = busca(elemento);
      if (pos == -1)
        return false;

      for (int i = pos; i < n - 1; i++)
        vetor[i] = vetor[i + 1];

      n--;

      if (n <= alocacao / 2 && n + 1 >= 10)
        Realocar(n + 1);

      return true;
    }

      void Imprimir(){ // imprime elementos da lista

      for(int i=0; i<n; i++)
          cout << vetor[i] <<endl;
    }

    void operator=(const Lds<T> &igl) {
      n = 0;
      for (int i = 0; i < igl.n; i++) {
        Inserir(igl[i]);
      }
    }

    const T &operator[](int a) const {
      if (a >= n) {
        throw std::runtime_error("Deu ruim!!!!!Estourou");
        return vetor[0];
      }
      return vetor[a];
    }

    int size() const {
      return n;
    }

};

#endif // Lds_H
