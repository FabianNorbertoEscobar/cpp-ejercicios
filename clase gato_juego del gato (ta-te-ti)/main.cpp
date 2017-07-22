#include "gato.hpp"

#include <iostream>
#include <cstdlib>
#include <clocale>

#define OPCION_VALIDA(x,li,ls)  ((x)>=(li)&&(x)<=(ls))

using namespace std;

void nueva_partida(int jugador_inicial);
bool repetir_partida(int jugador_inicial);

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t JUEGO DEL GATO - TA TE TI \a\a" << endl << endl;

    cout << endl << "Modalidad: \t 2 jugadores" << endl << endl << "Jugador 1 -> X \t Jugador 2 -> O" << endl << endl;
    cout << endl << "En la primer partida, comienza el Jugador 1.";
    cout << endl << "En caso de repetir la partida, se irá alternando el jugador inicial." << endl;
    cout << endl << "Las casillas se enumeran del 1 al 9, de izquierda a derecha y de arriba a abajo.";
    cout << endl << "En cada turno, el jugador deberá indicar el número de la casilla a marcar." << endl;
    cout << endl << "La partida termina si algún jugador hace TA TE TI.";
    cout << endl << "Caso contrario, la partida termina cuando todas las casillas han sido marcadas" << endl << endl << endl << endl;

    system("pause");

    int jugador_inicial=1;

    do
    {
        nueva_partida(jugador_inicial);

        jugador_inicial=(jugador_inicial==1)?2:1;
    }
    while(repetir_partida(jugador_inicial));

    system("cls");

    cout << endl << "\t\t Vuelve a jugar pronto \a\a" << endl << endl << endl << endl;

    return 0;
}

void nueva_partida(int jugador_inicial)
{
    int turno=jugador_inicial;

    Gato gato;
    int casilla;

    for(int casillas_marcadas=0;casillas_marcadas<=9;casillas_marcadas++)
    {
        system("cls");

        cout << endl << "\t\t JUEGO DEL GATO - TA TE TI \a" << endl;

        gato.mostrar_gato();

        if(casillas_marcadas>4)
        {
            switch(gato.get_estado_gato())
            {
            case JUGADOR_1:
                cout << endl << "\t\t TA TE TI - GANÓ EL JUGADOR 1 \a\a" << endl << endl << endl;
                system("pause");
                return;

            case JUGADOR_2:
                cout << endl << "\t\t TA TE TI - GANÓ EL JUGADOR 2 \a\a" << endl << endl << endl;
                system("pause");
                return;

            case EMPATE:
                cout << endl << "\t\t\t   EMPATE \a\a" << endl << endl << endl;
                system("pause");
                return;
            }
        }

        cout << endl << endl << "\t\t TURNO: \t JUGADOR " << turno << endl;

        cout << endl << "\t\t MARCAR CASILLA: \t";
        int flag=0;

        do
        {
            if(flag==1)
            {
                if(!OPCION_VALIDA(casilla,1,9))
                {
                    cout << endl << "\t\t La casilla ingresada no existe.";
                    cout << endl << "\t\t Recuerde que las casillas están enumeradas de 1 a 9 \a\a";
                }
                else
                    cout << endl << "\t\t La casilla ya fue marcada. Escoja otra casilla. \a\a";

                cout << endl << "\t\t MARCAR CASILLA: \t";
            }

            cin >> casilla;
            flag=1;
        }
        while(!(OPCION_VALIDA(casilla,1,9)&&gato.get_estado_casilla(casilla)==VACIA));

        gato.marcar_casilla(casilla,turno);

        turno=(turno==1)?2:1;
    }
}

bool repetir_partida(int jugador_inicial)
{
    system("cls");

    cout << endl << "¿Desea repetir la partida? (Comenzará el jugador " << jugador_inicial << " ) \a\a" << endl;
    cout << endl << "\t 1- SI \t 2- NO \t Opción:\t";

    int opcion;
    int flag=0;

    do
    {
        if(flag==1)
        {
            system("cls");
            cout << endl << "La opción ingresada no es válida. Ingrese una opción válida: \a\a";
        }

        cin >> opcion;
        flag=1;
    }
    while(!OPCION_VALIDA(opcion,1,2));

    return opcion==1;
}
