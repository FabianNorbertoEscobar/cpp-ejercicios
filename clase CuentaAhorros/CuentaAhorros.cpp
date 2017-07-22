#include "CuentaAhorros.hpp"

#include <iostream>

using namespace std;

double CuentaAhorros::tasa_interes_anual=2;

CuentaAhorros::CuentaAhorros(double saldo_ahorro)
{
    this->saldo_ahorro=saldo_ahorro;
}

double CuentaAhorros::ultimo_interes_mensual()
{
    double interes_mensual=saldo_ahorro*tasa_interes_anual/12;
    saldo_ahorro+=interes_mensual;
    return interes_mensual;
}

void CuentaAhorros::modifica_tasa_interes(double tasa_interes_anual)
{
    CuentaAhorros::tasa_interes_anual=tasa_interes_anual;
}

double CuentaAhorros::get_saldo_ahorro()const
{
    return saldo_ahorro;
}
