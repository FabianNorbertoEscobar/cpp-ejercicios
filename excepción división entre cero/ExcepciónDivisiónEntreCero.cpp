#include "ExcepciónDivisiónEntreCero.hpp"

ExcepcionDivisionEntreCero::ExcepcionDivisionEntreCero():mensaje("Se detectó una división entre cero")
{

}

const char *ExcepcionDivisionEntreCero::get_mensaje()const
{
    return mensaje;
}
