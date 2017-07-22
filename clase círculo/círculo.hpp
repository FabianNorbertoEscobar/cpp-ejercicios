#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>
#include <string.h>

using namespace std;

class Circulo
{
private:

    /// atributos
    float x;
    float y;

    unsigned diametro;
    char* color;        // la memoria de la cadena apuntada por color se asigna dinámicamente

    /// método privado
    static char* duplicar_cadena(const char *cadena);

public:

    /// constructores
    Circulo(float x=0,float y=0,unsigned diametro=0,const char* color=NULL);
    Circulo(const Circulo &circulo);

    /// destructor
    ~Circulo();     // libera la cadena apuntada por el atributo color

    /// métodos
    void cambiar_color(const char* color);

    /// operadores sobrecargados
    Circulo& operator = (const Circulo &circulo);

    Circulo operator ++ (int);
    Circulo operator -- (int);

    /// funciones amigas
    friend ostream& operator << (ostream &stream,const Circulo &circulo);
};
