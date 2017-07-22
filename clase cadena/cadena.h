#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <clocale>
#include "string.h"

using namespace std;

class Cadena
{
private:

    char *cad;

    static char* duplicar_cadena(const char *cad);

public:

    Cadena(const char *cadena=NULL);
    Cadena(const Cadena &cadena);

    ~Cadena();

    void operator = (const Cadena &cadena);

    bool operator == (const char *cad)const;
    bool operator != (const Cadena &cadena)const;

    Cadena operator + (const Cadena &cadena)const;

    void operator += (const char *cad);

    friend Cadena operator + (const char *cad,const Cadena &cadena);

    friend ostream& operator << (ostream &stream,const Cadena &cadena);
    friend istream& operator >> (istream &stream,Cadena &cadena);
};
