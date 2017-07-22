#ifndef COLA_HPP
#define COLA_HPP

template <class T>
class Cola
{
private:
    int tamanio;
    int primero;
    int ultimo;
    T *nodo;

public:
    Cola(int tamanio=10);
    ~Cola();

    bool acolar(const T &nodo);
    bool desacolar(T &nodo);

    bool vacia()const;
    bool llena()const;

    bool get_primero(T &nodo)const;
    bool get_ultimo(T &nodo)const;
};

#endif // COLA_HPP

