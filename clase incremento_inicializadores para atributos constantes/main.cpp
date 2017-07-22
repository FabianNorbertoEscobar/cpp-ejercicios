#include "incremento.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE INCREMENTO" << endl;

    Incremento valor(10,5);

    cout << endl << "Antes del incremento:";
    valor.imprimir();

    for(int i=0;i<5;i++)
    {
        valor.incrementar();
        cout << endl << "Después del incremento n°:" << i+1 << ":";
        valor.imprimir();
    }

    cin.get();
    return 0;
}
