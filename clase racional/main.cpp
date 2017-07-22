#include "racional.hpp"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout << endl << endl << "\t\t CLASE RACIONAL \a\a" << endl;

    //Racional r1;
    Racional r2(13,7);
    Racional r3(8,4);
    Racional r4;
    Racional r5;
    Racional r6;
    r4=r2+r3;
    r5=r2*r3;
    r6=r2/r3;

    cout << endl << endl << "Racional 2: \t";
    r2.mostrar();
    cout << endl << endl << "Racional 3: \t";
    r3.mostrar();
    cout << endl << endl << "Racional 4: \t";
    r4.mostrar();
    cout << endl << endl << "Racional 5: \t";
    r5.mostrar();
    cout << endl << endl << "Racional 6: \t";
    r6.mostrar();

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl << endl;
    cin.get();
    return 0;
}

