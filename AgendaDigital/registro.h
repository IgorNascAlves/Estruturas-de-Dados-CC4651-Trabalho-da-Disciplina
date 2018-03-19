#ifndef REGISTRO_H
#define REGISTRO_H

template <typename T>
 class Registro{
  private:
    T conteudo;
    Registro <T>*prox;
    Registro <T>*ant;
  public:

        Registro(T c){
          this->conteudo = c;
          prox = NULL;
          ant = NULL;
        }
        void setConteudo(T c){
          this->conteudo = c;
        }
        T getConteudo(){
          return conteudo;
        }
        Registro* getProximo(){
          return prox;
        }
        Registro* getAnterior(){
          return ant;
        }
        void setProximo(Registro <T>* x){
          prox = x;
        }
        void setAnterior(Registro <T>* x){
          ant = x;
        }

};
#endif // REGISTRO_H

