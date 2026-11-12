#include "../include/carro.hpp"


Carro::Carro(string placa, int pasajeros, string categoria, Propietario* propietario):Vehiculo(placa, propietario, categoria)
{
    try
    {
        if(pasajeros>0){
            this->pasajeros=pasajeros;
        }else{
            throw runtime_error("<Cantidad Pasajeros Invalida> -> CANTIDAD DE PASAJEROS MENOR O IGUAL A 0");
        }
    }
    catch(exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}



Carro::~Carro()
{
}

void Carro::subirPasajeros(int cant){
    pasajeros+=cant;
}

int Carro::calcularTarifa(){
    int tarifa = 10000+200*u;

    if(getPropietario()->getEsVecino()==true){
        return tarifa*((100-(30+c))/100);
    }
    return tarifa;
}

