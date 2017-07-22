#ifndef CAMBIO_H
#define CAMBIO_H

#include <iostream>

using namespace std;

class Cambio
{
protected:
    bool cambio;

public:
    Cambio(bool cambio=true);

    friend ostream& operator << (ostream &stream,const Cambio &cambio);
};

#endif // CAMBIO_H
