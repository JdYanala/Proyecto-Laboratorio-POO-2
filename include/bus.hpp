#include "vehiculo.hpp"

class Bus : public Vehiculo
{
private:
    int puestos;
public:
    Bus(string,int);
     Bus(string,int,string, Propietario*);
    ~Bus();
    int calcularTarifa() override;

};


