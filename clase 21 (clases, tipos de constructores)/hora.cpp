#include <iostream>
#include "hora.h"

using namespace std;

const int Hora::segRelMax = 86400;
int Hora::husoHorarioPorDefecto = -3;

Hora::Hora() // Constructor por defecto de la clase Hora.
{
    segRel = 0;
}



Hora::Hora(int h,int m,int s) // Los parametros por defecto ya estan definidos en el .h
{
    segRel = h*3600 + m*60 + s;
    normalizar();
}



Hora::Hora(const Hora &hora)
{
    segRel = hora.segRel;
}



void Hora::sumarSeg(int s)
{
    segRel += s;
    normalizar();
}



void Hora::imprimirHora()const
{
    cout << segRel / 3600 << ":" << segRel % 3600 / 60 << ":" << segRel % 60 << endl;
}



void Hora::sumarDosHoras(const Hora &hora)
{
    segRel += hora.segRel;
    normalizar();
}



void Hora::normalizar()
{
    while(segRel < 0)
        segRel += 86400;
    segRel %= 86400;
}



void Hora::imprimirHoraOtroFormato()
{
    if(segRel >= 43200 && segRel <= 46800)
        cout << (segRel / 3600) << ":" << segRel % 3600 / 60 << ":" << segRel % 60 << " PM" << endl;
    else
    {
        if(segRel > 46800)
            cout << (segRel / 3600) - 12 << ":" << segRel % 3600 / 60 << ":" << segRel % 60 << " PM" << endl;
        else
            cout << segRel / 3600 << ":" << segRel % 3600 / 60 << ":" << segRel % 60 << " AM" << endl;
    }
}



void corregirSegundoRelativo(int &segRel)
{
    while(segRel < 0)
        segRel += 86400;
    segRel %= 86400;
}



bool Hora::esHoraValida(int h,int m,int s)
{
    return h*3600 + m*60 + s <= 86400 && h*3600 + m*60 + s >= 0;
}



