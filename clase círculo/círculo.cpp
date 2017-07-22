#include "círculo.hpp"

using namespace std;

/// método privado
char* Circulo:: duplicar_cadena(const char *cadena)
{
    char *copia;

    if(cadena&&*cadena!='\0')
    {
        try
        {
            copia=new char[strlen(cadena)+1];
            strcpy(copia,cadena);
        }
        catch(bad_alloc&)
        {
            cout << endl << endl << "\t\t No hay memoria \a\a" << endl;
            copia=NULL;
        }
    }
    else
        copia=NULL;

    return copia;
}

/// constructores
Circulo:: Circulo(float x,float y,unsigned diametro,const char* color)
{
    this->x=x;
    this->y=y;
    this->diametro=diametro;

    if(color&&*color!='\0')
    {
        try
        {
            this->color=new char[strlen(color)+1];
            strcpy(this->color,color);
        }
        catch(bad_alloc&)
        {
            cout << endl << endl << "\t\t No hay memoria \a\a" << endl;
            this->color=NULL;
        }
    }
    else
        this->color=NULL;
}

Circulo:: Circulo(const Circulo &circulo)
{
    x=circulo.x;
    y=circulo.y;
    diametro=circulo.diametro;
    color=duplicar_cadena(circulo.color);
}

/// destructor
Circulo:: ~Circulo()
{
    delete[] color;
}

/// métodos
void Circulo:: cambiar_color(const char* color)
{
    this->color=duplicar_cadena(color);
}

/// operadores sobrecargados
Circulo& Circulo:: operator = (const Circulo &circulo)
{
    x=circulo.x;
    y=circulo.y;
    diametro=circulo.diametro;
    color=duplicar_cadena(circulo.color);
    return *this;
}

Circulo Circulo:: operator ++ (int)
{
    Circulo copia(*this);
    diametro++;
    return copia;
}

Circulo Circulo:: operator -- (int)
{
    Circulo copia(*this);
    if(diametro>0)
        diametro--;
    return copia;
}

/// funciones amigas
ostream& operator << (ostream &stream,const Circulo &circulo)   //sería mejor dibujarlo
{
    stream << "Posición: (" << circulo.x << "," << circulo.y << "); Diámetro: " << circulo.diametro << "; Color: " << circulo.color;
    return stream;
}
