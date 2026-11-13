#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
#include "propietario.hpp"
#include "CodigoEstudiantil.h"
using namespace std;
class Vehiculo
{
private:
    string placa;
    Propietario *propietario;
    string categoria;
    
public:
    Vehiculo(string);
    Vehiculo(string,Propietario*,string);
    virtual ~Vehiculo();
    virtual int calcularTarifa() = 0;
    Propietario* getPropietario() const;
    string getPlaca() const;
    string getCategoria() const;
    virtual string getDetalles();
    
   
};
ostream& operator<<(ostream&, Vehiculo&);
#endif