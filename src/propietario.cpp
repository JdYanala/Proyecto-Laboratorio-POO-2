#include "../include/propietario.hpp"

Propietario :: Propietario (string nombre,int documento,string descripcion,bool vecino ):Persona(nombre,documento,descripcion),esVecino(vecino)
{
}

Propietario ::~Propietario ()
{
}

bool Propietario ::getEsVecino() const
{
    return esVecino;
}