#ifndef GATO_H
#define GATO_H

#define     VACIA           0
#define     JUGADOR_1       1
#define     JUGADOR_2       2
#define     EMPATE          3
#define     JUGANDO         4

class Gato
{
private:

    int casilla_1;
    int casilla_2;
    int casilla_3;
    int casilla_4;
    int casilla_5;
    int casilla_6;
    int casilla_7;
    int casilla_8;
    int casilla_9;

    int estado;

public:

    Gato();
    bool marcar_casilla(int casilla,int jugador);
    int get_estado_casilla(int casilla)const;
    void set_estado_gato();
    int get_estado_gato()const;
    void mostrar_gato()const;
    char simbolo_casilla(int casilla)const;
};

#endif // GATO_H
