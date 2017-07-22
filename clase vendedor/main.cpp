#include <iostream>
#include <clocale>

#include "vendedor.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE VENDEDOR" << endl;

    Vendedor vendedor; // crea el objeto v de Vendedor

    cout << endl << "Ingrese los montos de las ventas de cada mes:" << endl << endl;
    vendedor.obtieneVentasDelUsuario();

    vendedor.imprimeVentasAnuales();

    cin.get();
    return 0;
}
