#include "../include/moto.hpp"


Moto::Moto(string placa, int cilindraje,string categoria, Propietario* propietario):Vehiculo(placa, propietario, categoria),cilindraje(cilindraje)
{
}

Moto::~Moto()
{
    cout << "   Destruyendo desde clase Moto a: " << getPlaca() << endl;
}

bool Moto::altoCilindraje(){
    return cilindraje>400;
}

int  Moto::calcularTarifa(){
    int tarifa = 3000+100*u;

    if(getPropietario()->getEsVecino()==true){
        return (tarifa*(100-(30+c)))/100;
    }
    return tarifa;
}

string Moto::getDetalles()
{
    string tipoCilindraje;
    if(cilindraje>400){
       tipoCilindraje="Alta Cilindraje";
    }
    else{

        tipoCilindraje="Bajo Cilindraje";
    }
    
    string msg = Vehiculo::getDetalles() + "\n  Cilindraje: " + to_string(cilindraje) + "\n  Tipo de Moto: " + tipoCilindraje;
    return msg;
}

