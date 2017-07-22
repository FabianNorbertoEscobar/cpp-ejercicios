#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

const double PI=3.14159;

inline double volumen_esfera(const double radio)
{
    return (4.0/3.0)*PI*pow(radio,3);
}

int main()
{
    double radio;

    cout << endl << "\t\t VOLUMEN DE ESFERA" << endl;

    cout << endl << "Ingrese el radio de la esfera: \t";
    cin >> radio;

    cout << endl << "El volumen de la esfera es: \t" << volumen_esfera(radio) << endl;

    cin.get();
    return 0;
}
