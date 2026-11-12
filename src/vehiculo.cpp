#include "..\include\vehiculo.hpp"

Vehiculo::Vehiculo(string placa):placa(placa)
{
}
Vehiculo::Vehiculo(string placa,Propietario *propietario,string categoria):placa(placa),propietario(propietario),categoria(categoria)
{
}
Vehiculo::~Vehiculo()
{
    cout<<"Destruyendo "<<categoria<<" "<<placa<<endl;
}
Propietario* Vehiculo::getPropietario() const
{
    return propietario;
}

string Vehiculo::getPlaca() const
{
    return placa;
}

string Vehiculo::getCategoria() const
{
    return categoria;
}