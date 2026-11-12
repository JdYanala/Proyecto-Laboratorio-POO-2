#include "../include/paso.hpp"

Paso::Paso(){}

Paso::Paso(string placa, string categoria, int tarifa) : placa(placa), categoria(categoria), tarifa(tarifa)
{
}


Paso::~Paso()
{
    cout << " " << placa << endl;
}

string Paso::getCategoria() const
{
    return categoria;
}

int Paso::getTarifa() const
{
    return tarifa;
}

string Paso::getPlaca() const
{
    return placa;
}
