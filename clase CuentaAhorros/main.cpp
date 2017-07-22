#include "CuentaAhorros.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE CUENTA AHORROS" << endl;

    CuentaAhorros ahorrador1(2000);
    CuentaAhorros ahorrador2(3000);

    cout << endl << "Saldo ahorrador 1: \t" << ahorrador1.get_saldo_ahorro();
    cout << endl << "Saldo ahorrador 2: \t" << ahorrador2.get_saldo_ahorro() << endl;

    cout << endl << "Último interés mensual ahorrador 1: \t" << ahorrador1.ultimo_interes_mensual();
    cout << endl << "Último interés mensual ahorrador 2: \t" << ahorrador2.ultimo_interes_mensual() << endl;

    CuentaAhorros::modifica_tasa_interes(3);

    cout << endl << "Saldo ahorrador 1: \t" << ahorrador1.get_saldo_ahorro();
    cout << endl << "Saldo ahorrador 2: \t" << ahorrador2.get_saldo_ahorro() << endl;

    cout << endl << "Último interés mensual ahorrador 1: \t" << ahorrador1.ultimo_interes_mensual();
    cout << endl << "Último interés mensual ahorrador 2: \t" << ahorrador2.ultimo_interes_mensual() << endl;

    CuentaAhorros::modifica_tasa_interes(4);

    cout << endl << "Saldo ahorrador 1: \t" << ahorrador1.get_saldo_ahorro();
    cout << endl << "Saldo ahorrador 2: \t" << ahorrador2.get_saldo_ahorro() << endl;

    cout << endl << "Último interés mensual ahorrador 1: \t" << ahorrador1.ultimo_interes_mensual();
    cout << endl << "Último interés mensual ahorrador 2: \t" << ahorrador2.ultimo_interes_mensual() << endl;

    return 0;
}
