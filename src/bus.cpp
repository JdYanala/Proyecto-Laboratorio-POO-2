#include "../include/bus.hpp"
#include "../include/Excepciones.hpp"

Bus::Bus(string placa, int puestos, string categoria, Propietario *propietario) : Vehiculo(placa, propietario, categoria), puestos(puestos)
{

    if (puestos > 0)
    {
        this->puestos = puestos;
    }
    else
    {
        throw ExcepcionDatosInvalidos("<Cantidad PUESTOS Invalida> - CANTIDAD DE PUESTOS MENOR O IGUAL A 0");
    }
}

Bus::~Bus()
{
}

int Bus::calcularTarifa()
{
    return (14000 + 300 * d);
}

string Bus::getDetalles()
{
    string msg = Vehiculo::getDetalles() + "\n  Puestos: " + to_string(puestos);
    return msg;
}
