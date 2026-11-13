#include "..\include\vehiculo.hpp"
#include "..\include\Excepciones.hpp"

Vehiculo::Vehiculo(string placa) : placa(placa)
{
}
Vehiculo::Vehiculo(string placa, Propietario *propietario, string categoria) : propietario(propietario), categoria(categoria)
{
    try
    {
        if (placa == "")
        {
            throw ExcepcionPlacaInvalida("[ERROR DE CREACION DE VEHICULO]: ");

        }
        else
        {
            this->placa = placa;
        }
    }
    catch (const ExcepcionPlacaInvalida &e)
    {
        cerr << e.what() << '\n';
    }
}
Vehiculo::~Vehiculo()
{
    cout << "       Destruyendo desde clase Vehiculo al Vehiculo : " << categoria << " " << placa << endl;
}
Propietario *Vehiculo::getPropietario() const
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

string Vehiculo::getDetalles()
{
    string msg = "  Placa: " + placa + "\n  Categoria: " + categoria + "\n  Nombre Propietario: ";
    if (propietario != nullptr)
    {
        msg += propietario->getNombre();
    }
    else
    {
        msg += "No tiene propietario";
    }

    return msg;
}

void Vehiculo::setPropietario(Propietario *propietario)
{
    this->propietario = propietario;
}

ostream &operator<<(ostream &os, Vehiculo &vehiculo)
{
    os << vehiculo.getDetalles();
    return os;
}
