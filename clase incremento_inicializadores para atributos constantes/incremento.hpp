#ifndef INCREMENTO_H
#define INCREMENTO_H

class Incremento
{
private:
    int cuenta;
    const int incremento;

public:
    Incremento(int cuenta=0,int incremento=1);
    void incrementar();
    void imprimir()const;

};

#endif // INCREMENTO_H
