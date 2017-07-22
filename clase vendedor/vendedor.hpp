#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor
{
public:

    Vendedor(); // constructor
    void obtieneVentasDelUsuario(); // obtiene cifras de ventas desde el teclado
    void estableceVentas(int mes,double monto); // El usuario proporciona las cifras de ventas de un mes.
    void imprimeVentasAnuales();

private:

    double totalVentasAnuales(); // Función de utilidad privada para totalizar las ventas anuales
    double ventas[ 12 ]; // cifras de ventas de 12 meses
};

#endif // VENDEDOR_H
