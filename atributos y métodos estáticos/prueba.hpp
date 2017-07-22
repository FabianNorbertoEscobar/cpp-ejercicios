#ifndef PRUEBA_H
#define PRUEBA_H

class Prueba
{
private:
    static int objetos_instanciados;

public:
    Prueba();
    ~Prueba();
    static int get_objetos_instanciados();
};

#endif // PRUEBA_H
