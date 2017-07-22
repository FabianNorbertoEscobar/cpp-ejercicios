#include "gato.hpp"

#include <iostream>

using namespace std;

Gato::Gato()
{
    casilla_1=VACIA;
    casilla_2=VACIA;
    casilla_3=VACIA;
    casilla_4=VACIA;
    casilla_5=VACIA;
    casilla_6=VACIA;
    casilla_7=VACIA;
    casilla_8=VACIA;
    casilla_9=VACIA;

    estado=VACIA;
}

bool Gato::marcar_casilla(int casilla,int jugador)
{
    if(get_estado_casilla(casilla)==VACIA)
    {
        switch(casilla)
        {
        case 1:
            casilla_1=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 2:
            casilla_2=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 3:
            casilla_3=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 4:
            casilla_4=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 5:
            casilla_5=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 6:
            casilla_6=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 7:
            casilla_7=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 8:
            casilla_8=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;

        case 9:
            casilla_9=(jugador==JUGADOR_1)?JUGADOR_1:JUGADOR_2;
            set_estado_gato();
            break;
        }

        return true;
    }
    return false;
}


int Gato::get_estado_casilla(int casilla)const
{
    switch(casilla)
    {
    case 1:
        if(casilla_1==VACIA)
            return VACIA;
        if(casilla_1==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 2:
        if(casilla_2==VACIA)
            return VACIA;
        if(casilla_2==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 3:
        if(casilla_3==VACIA)
            return VACIA;
        if(casilla_3==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 4:
        if(casilla_4==VACIA)
            return VACIA;
        if(casilla_4==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 5:
        if(casilla_5==VACIA)
            return VACIA;
        if(casilla_5==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 6:
        if(casilla_6==VACIA)
            return VACIA;
        if(casilla_6==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 7:
        if(casilla_7==VACIA)
            return VACIA;
        if(casilla_7==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 8:
        if(casilla_8==VACIA)
            return VACIA;
        if(casilla_8==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;

    case 9:
        if(casilla_9==VACIA)
            return VACIA;
        if(casilla_9==JUGADOR_1)
            return JUGADOR_1;
        return JUGADOR_2;
    }

    return VACIA;   // solo para evitar warning de sin retorno
}

void Gato::set_estado_gato()
{
    if(casilla_1==VACIA&&casilla_2==VACIA&&casilla_3==VACIA&&
            casilla_4==VACIA&&casilla_5==VACIA&&casilla_6==VACIA&&
            casilla_7==VACIA&&casilla_8==VACIA&&casilla_9==VACIA)
    {
        estado=VACIA;
        return;
    }

    if((casilla_1==JUGADOR_1&&casilla_2==JUGADOR_1&&casilla_3==JUGADOR_1)||
            (casilla_4==JUGADOR_1&&casilla_5==JUGADOR_1&&casilla_6==JUGADOR_1)||
            (casilla_7==JUGADOR_1&&casilla_8==JUGADOR_1&&casilla_9==JUGADOR_1)||
            (casilla_1==JUGADOR_1&&casilla_4==JUGADOR_1&&casilla_7==JUGADOR_1)||
            (casilla_2==JUGADOR_1&&casilla_5==JUGADOR_1&&casilla_8==JUGADOR_1)||
            (casilla_3==JUGADOR_1&&casilla_6==JUGADOR_1&&casilla_9==JUGADOR_1)||
            (casilla_1==JUGADOR_1&&casilla_5==JUGADOR_1&&casilla_9==JUGADOR_1)||
            (casilla_3==JUGADOR_1&&casilla_5==JUGADOR_1&&casilla_7==JUGADOR_1))
    {
        estado=JUGADOR_1;
        return;
    }

    if((casilla_1==JUGADOR_2&&casilla_2==JUGADOR_2&&casilla_3==JUGADOR_2)||
            (casilla_4==JUGADOR_2&&casilla_5==JUGADOR_2&&casilla_6==JUGADOR_2)||
            (casilla_7==JUGADOR_2&&casilla_8==JUGADOR_2&&casilla_9==JUGADOR_2)||
            (casilla_1==JUGADOR_2&&casilla_4==JUGADOR_2&&casilla_7==JUGADOR_2)||
            (casilla_2==JUGADOR_2&&casilla_5==JUGADOR_2&&casilla_8==JUGADOR_2)||
            (casilla_3==JUGADOR_2&&casilla_6==JUGADOR_2&&casilla_9==JUGADOR_2)||
            (casilla_1==JUGADOR_2&&casilla_5==JUGADOR_2&&casilla_9==JUGADOR_2)||
            (casilla_3==JUGADOR_2&&casilla_5==JUGADOR_2&&casilla_7==JUGADOR_2))
    {
        estado=JUGADOR_2;
        return;
    }

    if(casilla_1!=VACIA&&casilla_2!=VACIA&&casilla_3!=VACIA&&
            casilla_4!=VACIA&&casilla_5!=VACIA&&casilla_6!=VACIA&&
            casilla_7!=VACIA&&casilla_8!=VACIA&&casilla_9!=VACIA)
        estado=EMPATE;
    else
        estado=JUGANDO;
}

int Gato::get_estado_gato()const
{
    return estado;
}

void Gato::mostrar_gato()const
{
    cout << endl;
    cout << endl << "\t\t\t " << simbolo_casilla(1) << " | " << simbolo_casilla(2) << " | " << simbolo_casilla(3);
    cout << endl << "\t\t\t" << "---|---|---";
    cout << endl << "\t\t\t " << simbolo_casilla(4) << " | " << simbolo_casilla(5) << " | " << simbolo_casilla(6);
    cout << endl << "\t\t\t" << "---|---|---";
    cout << endl << "\t\t\t " << simbolo_casilla(7) << " | " << simbolo_casilla(8) << " | " << simbolo_casilla(9);
    cout << endl;
}

char Gato::simbolo_casilla(int casilla)const
{
    switch(casilla)
    {
    case 1:
        if(casilla_1==VACIA)
            return ' ';
        if(casilla_1==JUGADOR_1)
            return 'X';
        return 'O';

    case 2:
        if(casilla_2==VACIA)
            return ' ';
        if(casilla_2==JUGADOR_1)
            return 'X';
        return 'O';

    case 3:
        if(casilla_3==VACIA)
            return ' ';
        if(casilla_3==JUGADOR_1)
            return 'X';
        return 'O';

    case 4:
        if(casilla_4==VACIA)
            return ' ';
        if(casilla_4==JUGADOR_1)
            return 'X';
        return 'O';

    case 5:
        if(casilla_5==VACIA)
            return ' ';
        if(casilla_5==JUGADOR_1)
            return 'X';
        return 'O';

    case 6:
        if(casilla_6==VACIA)
            return ' ';
        if(casilla_6==JUGADOR_1)
            return 'X';
        return 'O';

    case 7:
        if(casilla_7==VACIA)
            return ' ';
        if(casilla_7==JUGADOR_1)
            return 'X';
        return 'O';

    case 8:
        if(casilla_8==VACIA)
            return ' ';
        if(casilla_8==JUGADOR_1)
            return 'X';
        return 'O';

    case 9:
        if(casilla_9==VACIA)
            return ' ';
        if(casilla_9==JUGADOR_1)
            return 'X';
        return 'O';
    }

    return 'O'; // solo para evitar warning de sin retorno
}
