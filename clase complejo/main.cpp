#include "complejo.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout << endl << endl << "\t\t CLASE COMPLEJO \a\a" <<endl;

    Complejo c0;
    Complejo c1;
    Complejo c2(1, 2);
    Complejo c3(3, 4);

    cout << endl << "Valores iniciales:" << endl << endl;
    cout << "c0 = " << c0 << endl << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl << "c3 = " << c3 << endl;

    cout << endl << "Operaciones realizadas:" << endl << endl<< "c0 = 5 * c3" << endl << endl << "c1 = c2 * c3" << endl;

    c0 = 5 * c3;
    c1 = c2 * c3;

    cout << endl << "Valores finales:" << endl << endl;
    cout << "c0 = " << c0 << endl << "c1 = " << c1 << endl;

    cout << endl << "\t\t\t\t\t Fin del programa... \n\n" << endl;
    cin.get();
    return 0;
}


