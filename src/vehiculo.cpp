#include "..\include\vehiculo.hpp"

Vehiculo::Vehiculo(string placa):placa(placa)
{
}
Vehiculo::Vehiculo(string placa,Propietario *propietario):placa(placa),propietario(propietario)
{
}
Vehiculo::~Vehiculo()
{
}