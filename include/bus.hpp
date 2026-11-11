#include "vehiculo.hpp"

class Bus : public Vehiculo
{
private:
    int puestos;
public:
    Bus(string,int);
     Bus(string,int,);
    ~Bus();
};

Bus::Bus(string placa,int puestos):Vehiculo(placa)
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

Bus::Bus(string placa,int puestos, Propietario* propietario):Vehiculo(placa, propietario), puestos(puestos)
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
