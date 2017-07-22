#include "moneda.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    Moneda::set_valor_moneda(MONEDA_usd, 15.622);        ///Dólares
    Moneda::set_valor_moneda(MONEDA_rs, 4.5270);         ///Reales
    Moneda::set_valor_moneda(MONEDA_uyu, 0.5564);        ///Pesos Uruguayos

    Moneda m1, m2(3500.30), m3(2000.00, MONEDA_usd);

    cout << endl <<endl << "\t\t CLASE MONEDA \a\a" << endl << endl;

    cout << endl << "M1: " << m1 << endl << "M2: " << m2 << endl << "M3: " << m3<<endl;

    cout << endl << "El valor de la suma M3 + M2 es: " << m3 + m2 << endl;

    m1 = 222.30 + m3; ///La constante representa el valor en pesos argentinos

    cout << endl << "El valor de la suma 222.30 + M3 es M1: " << m1 << endl;

    if (m1>=m3)
        cout << endl << "M1 es mayor o igual a M3" << endl;
    else
        cout << endl << "M1 es menor o igual a M3" << endl;

    m3.convertir(MONEDA_uyu);

    m3 += m2;

    cout << endl << "El valor de la suma M3 += M2 es M3: " << m2 << endl;

    m1.convertir(MONEDA_rs);

    cout << endl << "Antes de cambiar el símbolo: " << m1 << endl;

    Moneda::set_simbolo(MONEDA_rs, "Reales");

    cout << endl << "Después de cambiar el símbolo: " << m1 << endl;

    cout << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl << endl;
    cin.get();
    return 0;
}
