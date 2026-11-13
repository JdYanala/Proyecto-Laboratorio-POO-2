#include "../include/carro.hpp"
#include "../include/Excepciones.hpp"

Carro::Carro(string placa, int pasajeros, string categoria, Propietario *propietario) : Vehiculo(placa, propietario, categoria)
{

    if (pasajeros > 0)
    {
        this->pasajeros = pasajeros;
    }
    else
    {
        throw ExcepcionDatosInvalidos("<Cantidad Pasajeros Invalida> - Cantidad de pasajeros menor o igual a 0");
    }
}


Carro::~Carro()
{
    cout << "   Destruyendo desde clase Carro a: " << getPlaca() << endl;
}

void Carro::subirPasajeros(int cant)
{
    pasajeros += cant;
}

int Carro::calcularTarifa()
{   
    int tarifa = 10000 + (200 * u);

    if (getPropietario()->getEsVecino() == true)
    {

        return (tarifa * (100 - (30 + c)) )/100;
    }
    return tarifa;
}
string Carro::getDetalles()
{
    string msg = Vehiculo::getDetalles() + "\n  Pasajeros: " + to_string(pasajeros);
    return msg;
}