#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <clocale>

#include "hora.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    Hora inicio, fin(0,0,20); ///Horas, Minutos, Segundos

    cout << endl << endl << "\t\t CLASE HORA" << endl;

    cout << endl << "Ingrese el horario de inicio: \t\a";
    cin >> inicio;
    cout << endl << endl << "Ingrese el horario de fin: \t\a";
    cin >> fin;

    if(inicio >= fin)
    {
        cout << endl << endl << "Error! El horario de inicio debe ser menor al de fin.\a\a";
        return 0;
    }

    while(inicio < fin)
    {
        system("CLS");

        cout << endl << "Reloj corriendo \a" << endl;
        cout << endl << "Actual: " << inicio++ << endl << endl << "Fin: " << fin; ///++ incrementa en 1 segundo la hora

        Sleep(1000);
    }

    cout << endl << endl << "FIN \a\a";
    getch();
    system("CLS");

    cout << endl << endl << "\t\t CLASE HORA" << endl;

    Hora h1(22,54,21), h2(1,20,55), h3; ///La hora nunca debe ser mayor a las 23:59:59

    cout << endl << "H1: \t" << h1 << endl;
    cout << endl << "H2: \t" << h2 << endl;

    h3 = h1 + h2;
    cout << endl << "H3 = H1 + H2: \t" << h3 << endl;

    h3 += 2; ///Segundos
    cout << endl << "H3 += 2: \t" << h3 << endl;

    h3 = 3 + h3; ///Segundos
    cout << endl << "H3=3+h3: \t" << h3<< endl;

    h3 = Hora::get_hora_maxima(); ///Devuelve una hora a las 23:59:59
    cout << endl << "Hora máxima: \t " << h3 << endl;

    cout << endl << endl << "\t\t\t\t\t Fin del programa... \a\a" << endl;
    getch();
    return 0;
}
