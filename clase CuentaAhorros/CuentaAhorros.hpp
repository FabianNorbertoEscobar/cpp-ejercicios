#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H

class CuentaAhorros
{
private:
    double saldo_ahorro;
    static double tasa_interes_anual;

public:
    CuentaAhorros(double saldo_ahorro=0);
    double ultimo_interes_mensual();
    static void modifica_tasa_interes(double tasa_interes_mensual);
    double get_saldo_ahorro()const;
};

#endif // CUENTAAHORROS_H
