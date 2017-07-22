#ifndef ENGRANAJE_H
#define ENGRANAJE_H

#include <iostream>

using namespace std;

class Engranaje
{
protected:
    bool engrasado;

public:
    Engranaje(bool engrasado=true);

    friend ostream& operator << (ostream &stream,const Engranaje &engranaje);
};


#endif // ENGRANAJE_H
