#include "../include/camion.hpp"

Camion::~Camion()
{
}

void Camion::agregarEjes(int cant){
    ejes+=cant;
}

Camion::Camion(string placa, int ejes, string categoria, Propietario* propietario):Vehiculo(placa, propietario, categoria)
{  
    try
    {
        if(ejes>0){
            this->ejes=ejes;
        }else{
            throw runtime_error("<Cantidad ejes Invalida> -> CANTIDAD DE EJES MENOR O A 2");
        }
    }
    catch(exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Camion::calcularTarifa(){
    return (8000+100*d)*ejes;
}