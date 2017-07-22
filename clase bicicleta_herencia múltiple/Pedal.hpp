#ifndef PEDAL_H
#define PEDAL_H

#include <iostream>

using namespace std;

class Pedal
{
protected:
    bool plastico;

public:
    Pedal(bool plastico=true);

    friend ostream& operator << (ostream &stream,const Pedal &pedal);
};

#endif // PEDAL_H
