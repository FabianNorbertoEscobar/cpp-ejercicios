#ifndef ENTERO_HPP
#define ENTERO_HPP

class Entero
{
private:
    int valor;

public:
    Entero(int valor=0);
    ~Entero();

    void set_entero(int valor);
    int get_entero()const;
};

#endif // ENTERO_HPP
