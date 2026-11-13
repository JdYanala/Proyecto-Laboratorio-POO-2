#ifndef CAMION_HPP
#define CAMION_HPP
#include "vehiculo.hpp"

class Camion : public Vehiculo
{
private:
    int ejes;
public:
   
    Camion(string,int,string, Propietario*);
    ~Camion();
    void agregarEjes(int);
    int calcularTarifa() override;
    string getDetalles() override;
};

#endif
