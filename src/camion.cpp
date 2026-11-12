#include "../include/camion.hpp"
#include "../include/Excepciones.hpp"
Camion::~Camion()
{
}

void Camion::agregarEjes(int cant)
{
    ejes += cant;
}

Camion::Camion(string placa, int ejes, string categoria, Propietario *propietario) : Vehiculo(placa, propietario, categoria)
{

    if (ejes >= 2)
    {
        this->ejes = ejes;
    }
    else
    {
        throw ExcepcionDatosInvalidos("<Cantidad ejes Invalida> - Cantidad de ejes menor que 2");
    }
}

int Camion::calcularTarifa()
{
    return (8000 + 100 * d) * ejes;
}