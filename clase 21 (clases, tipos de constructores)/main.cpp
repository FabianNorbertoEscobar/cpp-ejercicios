#include <iostream>
#include "hora.h"

using namespace std;

int main()
{
    Hora h(5,60,0);
    const Hora h2(h);

    h2.imprimirHora();

    if(Hora::esHoraValida(24,00,01))
        cout << "Valida" << endl;
    else
        cout << "No valida" << endl;

    return 0;
}
