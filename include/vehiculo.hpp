#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
using namespace std;
class Vehiculo
{
private:
    string placa;
public:
    Vehiculo(string);
    virtual ~Vehiculo();
};

#endif