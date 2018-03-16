#include "registro.h"






Registro::Registro(T c){
  this->conteudo = c;
  prox = NULL;
  ant = NULL;
}
Registro::void setConteudo(T c){
  this->conteudo = c;
}
Registro::T getConteudo(){
  return conteudo;
}
Registro::Registro* getProximo(){
  return prox;
}
Registro::Registro* getAnterior(){
  return ant;
}
Registro::void setProximo(Registro <T>* x){
  prox = x;
}
Registro ::void setAnterior(Registro <T>* x){
  ant = x;
}



