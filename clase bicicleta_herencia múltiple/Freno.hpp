#ifndef FRENO_H
#define FRENO_H

#include <iostream>

using namespace std;

class Freno
{
protected:
    unsigned cantidad_frenos;

public:
    Freno(int cantidad_frenos=2);

    friend ostream& operator << (ostream &stream,const Freno &freno);
};

#endif // FRENO_H
