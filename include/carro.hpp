#ifndef CARRO_HPP
#define CARRO_HPP
#include "vehiculo.hpp"

class Carro:public Vehiculo
{
private:
    int pasajeros;
public:
    Carro(string,int,string, Propietario*);
    ~Carro();
    void subirPasajeros(int);
    int calcularTarifa() override;
    string getDetalles() override;
};

#endif

