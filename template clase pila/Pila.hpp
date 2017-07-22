#ifndef PILA_HPP
#define PILA_HPP

template <class T>
class Pila
{
private:
    int tamanio;
    int tope;
    T *nodo;

public:
    Pila(int tamanio=10);
    ~Pila();

    bool apilar(const T &nodo);
    bool desapilar(T &nodo);

    bool vacia()const;
    bool llena()const;

    bool get_tope(T &nodo)const;
};

#endif // PILA_HPP
