#include "persona.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("cls");

    cout << endl << endl << "\t\t CLASE PERSONA \a\a" <<endl;

    Persona persona;

    cin >> persona;

    cout << persona;

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl << endl;
    cin.get();
    return 0;
}
