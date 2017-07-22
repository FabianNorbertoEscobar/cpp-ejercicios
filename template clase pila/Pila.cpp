#include "Pila.hpp"

#include <iostream>

using namespace std;

template <class T>
Pila<T>::Pila(int tamanio)
{
    this->tamanio=(tamanio>0)?tamanio:10;
    tope=0;
    nodo=new T[tamanio];
}

template <class T>
Pila<T>::~Pila()
{
    delete[] nodo;
}

template <class T>
bool Pila<T>::apilar(const T &nodo)
{
    if(llena())
        return false;

    this->nodo[tope]=nodo;
    tope++;
    return true;
}

template <class T>
bool Pila<T>::desapilar(T &nodo)
{
    if(vacia())
        return false;

    tope--;
    nodo=this->nodo[tope];
    return true;
}

template <class T>
bool Pila<T>::vacia()const
{
    return tope==0;
}

template <class T>
bool Pila<T>::llena()const
{
    return tope==tamanio;
}

template <class T>
bool Pila<T>::get_tope(T &nodo)const
{
    if(vacia())
        return false;

    nodo=this->nodo[tope];
    return true;
}
