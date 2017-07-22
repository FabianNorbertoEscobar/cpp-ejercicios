#include "bulto y producto.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout << endl << endl << "\t\t CLASE BULTO Y CLASE PRODUCTO \a\a" << endl << endl;

    Producto p1("Heladera",180,70,70);
    Producto p2("Microondas",40,20,20);
    Producto p3("Celular",10,2,15);

    cout << endl << endl << "Producto 1:" << endl << p1;
    cout << endl << endl << "Producto 2:" << endl << p2;
    cout << endl << endl << "Producto 3:" << endl << p3;

    Bulto bx=p1+p2+p3;

    cout << endl << endl << "Bulto:" << endl << bx;

    cout << endl << endl << "Get Descripción: \t" << bx.get_descripcion() << endl; /// Heladera|Microondas|Celular
    cout << fixed << setprecision(2);
    cout << endl << "Get Volumen: \t" << bx.get_volumen() << endl; /// 2221800.00


/*
    Bulto b1("bulto1",1,2,3);
    Bulto b2("bulto2",4,5,6);

    cout << endl << endl << "Bulto 1:" << endl << b1;
    cout << endl << endl << "Bulto 2:" << endl << b2;

    b2= b2+p1;

    cout << endl << endl << "Bulto 2:" << endl << b2;
*/

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl;
    cin.get();
    return 0;
}
