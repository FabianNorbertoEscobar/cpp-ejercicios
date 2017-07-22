#ifndef EXCEPCIONDIVISIONENTRECERO_HPP
#define EXCEPCIONDIVISIONENTRECERO_HPP

class ExcepcionDivisionEntreCero
{
private:
    const char *mensaje;

public:
    ExcepcionDivisionEntreCero();

    const char *get_mensaje()const;
};

#endif // EXCEPCIONDIVISIONENTRECERO_HPP
