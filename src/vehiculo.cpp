#include "..\include\vehiculo.hpp"
#include "..\include\Excepciones.hpp"

Vehiculo::Vehiculo(string placa):placa(placa)
{
}
Vehiculo::Vehiculo(string placa,Propietario *propietario,string categoria):propietario(propietario),categoria(categoria)
{
    if(placa=="")
    {
        throw ExcepcionPlacaInvalida("[ERROR DE CREACION DE VEHICULO]: ");
    }
    else
    {
        this->placa=placa;
    }
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

string Vehiculo::getDetalles() const
{
    string msg = "  Placa: " + placa+"\n  Categoria: " + categoria + "\n  Nombre Propietario: ";
    if(propietario!=nullptr)
    {
        msg+= propietario->getNombre();
    }

    return msg;
}