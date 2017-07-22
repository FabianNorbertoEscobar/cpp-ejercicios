#include "Manubrio.hpp"

#include <iostream>

using namespace std;

Manubrio::Manubrio(bool canastita)
{
    this->canastita=canastita;
}

ostream& operator << (ostream &stream,const Manubrio &manubrio)
{
    return stream << "Canastita en manubrio: " << (manubrio.canastita?"SI":"NO");
}
