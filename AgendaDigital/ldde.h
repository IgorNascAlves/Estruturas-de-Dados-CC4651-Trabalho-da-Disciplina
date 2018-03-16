#ifndef LDDE_H
#define LDDE_H


template <typename T>
class Ldde{
private:
    Registro<T> *primeiro = new Registro<T>(NULL);
public:
    Ldde(T valor);
    bool inserir(T valor);
    void imprimir();
};


#endif // LDDE_H
