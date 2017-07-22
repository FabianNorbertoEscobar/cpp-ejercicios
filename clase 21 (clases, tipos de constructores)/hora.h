

class Hora // Por convencion, las clases empiezan con mayuscula.
{
private: // Si no pongo private, por defecto es privado.
    int segRel; // Segundos relativos al inicio del dia.
    void normalizar();
    static const int segRelMax; // Le doy el valor en el .cpp
    static int husoHorarioPorDefecto;

public:
    Hora(); // Constructor por defecto de la clase Hora.
    Hora(int h,int m = 0,int s = 0); // Constructor parametrizado.
    Hora(const Hora &hora); // constructor de copia

    // Puedo tener tambien un constructor parametrizado por defecto -> Hora(int h = 0,int m = 0,int s = 0);

    void sumarSeg(int s);
    void imprimirHora()const; // El const indica que no voy a modificar al objeto llamador
    void sumarDosHoras(const Hora &hora);
    void imprimirHoraOtroFormato();
    static bool esHoraValida(int h,int m,int s); // Metodo que no depende del objeto llamador
    static void setHusoHorarioPorDefecto(int); //hacer
    static int getHusoHorarioPorDefecto();
    //Hora sumarHora(Hora h);
};

void corregirSegundoRelativo(int &segRel);
