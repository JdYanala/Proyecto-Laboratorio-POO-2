#include "../include/bus.hpp"


Bus::Bus(string placa,int puestos, string categoria, Propietario* propietario):Vehiculo(placa, propietario, categoria), puestos(puestos)
{
     try
    {
        if(puestos>0){
            this->puestos=puestos;
        }else{
            throw runtime_error("<Cantidad PUESTOS Invalida> -> CANTIDAD DE PUESTOS MENOR O IGUAL A 0");
        }
    }
    catch(exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Bus::~Bus()
{
}

int Bus::calcularTarifa(){
    return (14000+300*d);
}
