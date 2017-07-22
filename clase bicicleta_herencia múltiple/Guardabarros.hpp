#ifndef GUARDABARROS_H
#define GUARDABARROS_H

#include <iostream>

using namespace std;

class Guardabarros
{
protected:
    unsigned cantidad_guardabarros;

public:
    Guardabarros(unsigned cantidad_guardabarros=2);

    friend ostream& operator << (ostream &stream,const Guardabarros &guardabarros);
};

#endif // GUARDABARROS_H
