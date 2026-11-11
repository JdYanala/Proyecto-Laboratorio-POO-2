#include "vehiculo.hpp"

class Carro:public Vehiculo
{
private:
    int pasajeros;
public:
    Carro(string,int);
    Carro(string,int, Propietario*);
    ~Carro();
    void subirPasajeros(int);
};

Carro::Carro(string placa, int pasajeros):Vehiculo(placa)
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

Carro::Carro(string placa, int pasajeros, Propietario* propietario):Vehiculo(placa, propietario)
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
