#include <iostream>
#include <clocale>

#include "cuenta.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << endl << "\t\t CLASE CUENTA" << endl << endl;

    Cuenta contador;    // instancia del objeto contador de la clase Cuenta
    Cuenta *ptrContador = &contador; // apuntador hacia contador
    Cuenta &refContador = contador; // referencia hacia contador

    cout << "Asigna 7 a x y lo imprime utilizando el nombre del objeto:";
    contador.x = 7; // asigna 7 al dato miembro x
    contador.imprime(); // llama a la función miembro imprime

    cout << "Asigna 8 a x y lo imprime utilizando una referencia:";
    refContador.x = 8; // asigna 8 al dato miembro x
    refContador.imprime(); // llama a la función miembro imprime

    cout << "Asigna 10 a x y lo imprime utilizando un apuntador:";
    ptrContador->x = 10; // asigna 10 al dato miembro x
    ptrContador->imprime(); // llama a la función miembro imprime

    cin.get();
    return 0;
} // fin de la función main

/*
este programa utiliza una clase sencilla llamada Cuenta con el dato miembro público x de tipo int y la
función miembro pública imprime, para ilustrar el acceso a los miembros de una clase mediante los operadores
de selección de miembros. El programa define tres variables relacionadas con el tipo Cuenta: contador,
refContador (la referencia a un objeto Cuenta) y ptrContador (un apuntador a un objeto
Cuenta). La variable refContador hace referencia a contador, y la variable ptrContador apunta a
contador. Aquí es importante notar que el dato miembro x se declara como public solamente para mostrar
la forma en que se accede a los miembros public sin manipuladores (es decir, un nombre, una referencia
o un apuntador). Como establecimos, por lo general los datos se hacen private
*/
