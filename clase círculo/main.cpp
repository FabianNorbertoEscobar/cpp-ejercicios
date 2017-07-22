#include "círculo.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 4B");

    cout << endl << endl << "\t\t CLASE CÍRCULO \a\a" << endl;

    Circulo c1(10.5,20.0,1,"Rojo Intenso"),c2,c3;

    c2 = c1--;    // decrementa, si se puede, el diámetro

    c3 = c2++;    // incrementa, si se puede, el diámetro

    Circulo c4 = c3++;

    c4.cambiar_color("Amarillo patito flúo");
    c3.cambiar_color("Verde manzana");

    cout << endl << endl << "C1: \t" << c1;
    cout << endl << endl << "C2: \t" << c2;
    cout << endl << endl << "C3: \t" << c3;
    cout << endl << endl << "C4: \t" << c4;

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl << endl;
    cin.get();
    return 0;
}
