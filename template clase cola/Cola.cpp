#include "Cola.hpp"

#include <iostream>

using namespace std;

template <class T>
Cola<T>::Cola(int tamanio)
{
    this->tamanio=(tamanio>0)?tamanio:10;
    primero=0;
    ultimo=-1;
    nodo=new T[tamanio];
}

template <class T>
Cola<T>::~Cola()
{
    delete[] nodo;
}

template <class T>
bool Cola<T>::acolar(const T &nodo)
{
    if(llena())
        return false;

    ultimo=(ultimo+1)%tamanio;
    this->nodo[ultimo]=nodo;

    return true;
}

template <class T>
bool Cola<T>::desacolar(T &nodo)
{
    if(vacia())
        return false;

    nodo=this->nodo[primero];

    if(primero==ultimo)
    {
        primero=0;
        ultimo=-1;
    }
    else
        primero=(primero+1)%tamanio;

    return true;
}

template <class T>
bool Cola<T>::vacia()const
{
    return ultimo==-1;
}

template <class T>
bool Cola<T>::llena()const
{
    return (ultimo+1)%tamanio==primero&&ultimo!=-1;
}

template <class T>
bool Cola<T>::get_primero(T &nodo)const
{
    if(ultimo==-1)
        return false;

    nodo=this->nodo[primero];
    return true;
}

template <class T>
bool Cola<T>::get_ultimo(T &nodo)const
{
    if(ultimo==-1)
        return false;

    nodo=this->nodo[primero];
    return true;
}
