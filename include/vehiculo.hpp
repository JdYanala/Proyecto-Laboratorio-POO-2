#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
#include "propietario.hpp"
using namespace std;
class Vehiculo
{
private:
    string placa;
    Propietario *propietario;
public:
    Vehiculo(string);
    Vehiculo(string,Propietario*);
    virtual ~Vehiculo();
};

#endif