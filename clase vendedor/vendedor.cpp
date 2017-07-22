#include "vendedor.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

// La función constructor inicializa el arreglo
Vendedor::Vendedor()
{
    for(int mes=0; mes<12; mes++)
        ventas[mes]=0.0;
} // fin del constructor Vendedor

// Función para obtener 12 cifras de ventas del usuario
// desde el teclado
void Vendedor::obtieneVentasDelUsuario()
{
    double montoVentas;

    for(int mes=1; mes<=12; mes++)
    {
        cout << "Introduzca el monto de las ventas del mes " << mes << ":\t";
        cin >> montoVentas;
        estableceVentas(mes,montoVentas);
    } // fin de for
} // fin de la función obtieneVentasDelUsuario

// Función para establecer una de 12 cifras de ventas mensuales.
// Observe que el valor del mes debe ser de 0 a 11.
void Vendedor::estableceVentas(int mes,double monto)
{
    if (mes>=1&&mes<=12&&monto>0)
        ventas[mes-1]=monto; // ajusta los subíndices 0-11
    else
        cout << endl << "Mes o monto de ventas no válido" << endl;
} // fin de la función estableceVentas

// Imprime el total de las ventas anuales
void Vendedor::imprimeVentasAnuales()
{
    cout << setprecision( 2 )
         << setiosflags( ios::fixed | ios::showpoint )
         << endl << "El total de las ventas anuales es: $" << totalVentasAnuales() << endl;
} // fin de la función imprimeVentasAnuales

// Función de utilidad privada para totalizar las ventas anuales
double Vendedor::totalVentasAnuales()
{
    double total=0.0;

    for(int mes=0; mes<12; mes++ )
        total+=ventas[mes];

    return total;
} // fin de la función totalVentasAnuales
