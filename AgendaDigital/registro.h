#ifndef REGISTRO_H
#define REGISTRO_H

template <typename T>
 class Registro{
  private:
    T conteudo;
    Registro <T>*prox;
    Registro <T>*ant;
  public:
    Registro(T c);
    void setConteudo(T c);
    T getConteudo();
    Registro* getProximo();
    Registro* getAnterior();
    void setProximo(Registro <T>* x);
    void setAnterior(Registro <T>* x);
};
#endif // REGISTRO_H
