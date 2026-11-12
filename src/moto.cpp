#include "../include/moto.hpp"


Moto::Moto(string placa, int cilindraje,string categoria, Propietario* propietario):Vehiculo(placa, propietario, categoria),cilindraje(cilindraje)
{
}

Moto::~Moto()
{
}

bool Moto::altoCilindraje(){
    return cilindraje>400;
}

int  Moto::calcularTarifa(){
    int tarifa = 3000+200*u;

    if(getPropietario()->getEsVecino()==true){
        return tarifa*((100-(30+c))/100);
    }
    return tarifa;
}

