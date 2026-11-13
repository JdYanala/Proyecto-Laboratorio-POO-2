#include "vehiculo.hpp"

class Moto: public Vehiculo
{
private:
    int cilindraje;
public:
    Moto(string,int,string ,Propietario*);
    ~Moto();
    bool altoCilindraje();
    int calcularTarifa() override;
    string getDetalles() override;
};

