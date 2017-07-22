#include "Cola.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t TEMPLATE CLASE COLA" << endl;

    Cola <int> cola_int;
    int nodo_int;

    cout << endl << "Se ha creado una cola de enteros" << endl;

    cout << endl << "La cola " << (cola_int.vacia()?"está":"no está") << " vacía" << endl;

    cout << endl << "Acolando nodos:" << endl;
    while(!cola_int.llena())
    {
        cout << endl << "Acolar entero: \t";
        cin >> nodo_int;
        cola_int.acolar(nodo_int);
    }

    cout << endl << "La cola " << (cola_int.llena()?"está":"no está") << "llena" << endl;

    int primero_int;
    int ultimo_int;
    cola_int.get_primero(primero_int);
    cola_int.get_ultimo(ultimo_int);

    cout << endl << "El primer nodo de la cola es: \t" << primero_int;
    cout << endl << "El último nodo de la cola es: \t" << ultimo_int;

    cout << endl << "Desacolando nodos:" << endl;
    while(!cola_int.vacia())
    {
        cola_int.desacolar(nodo_int);
        cout << endl << "Nodo desacolado: \t" << nodo_int;
    }

    cout << endl << "La cola " << (cola_int.vacia()?"está":"no está") << " vacía" << endl;

    return 0;
}
