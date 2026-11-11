#include "vehiculo.hpp"

class Moto: public Vehiculo
{
private:
    int cilindraje;
public:
    Moto(string,int);
    Moto(string,int, Propietario*);
    ~Moto();
    bool altoCilindraje();
};

Moto::Moto(string placa,int  cilindraje):Vehiculo(placa),cilindraje(cilindraje)
{
}

Moto::Moto(string placa, int cilindraje, Propietario* propietario):Vehiculo(placa, propietario),cilindraje(cilindraje)
{
}

Moto::~Moto()
{
}

bool Moto::altoCilindraje(){
    return cilindraje>400;
}
