#include "prueba.hpp"

#include <iostream>

#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "ATRIBUTOS Y MÉTODOS ESTÁTICOS" << endl;

    cout << endl << "Objetos instanciados: \t" << Prueba::get_objetos_instanciados();
    Prueba *prueba_1=new Prueba();
    cout << endl << "Objetos instanciados: \t" << prueba_1->get_objetos_instanciados();
    Prueba prueba_2;
    cout << endl << "Objetos instanciados: \t" << prueba_2.get_objetos_instanciados();
    delete prueba_1;
    cout << endl << "Objetos instanciados: \t" << Prueba::get_objetos_instanciados();

    return 0;
}
