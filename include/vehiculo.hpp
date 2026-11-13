#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
#include "propietario.hpp"
//Codigo Estudiantil: 104626011541 | Tres Ultimos Digitos: 541
int c= 5;
int d=4;
int u=1;
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