#include "vehiculo.hpp"

class Camion : public Vehiculo
{
private:
    int ejes;
public:
    Camion(string,int);
    ~Camion();
    void agregarEjes(int);
};

Camion::Camion(string placa, int ejes):Vehiculo(placa)
{  
    try
    {
        if(ejes>0){
            this->ejes=ejes;
        }else{
            throw runtime_error("<Cantidad ejes Invalida> -> CANTIDAD DE EJES MENOR O A 2");
        }
    }
    catch(exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Camion::~Camion()
{
}

void Camion::agregarEjes(int cant){
    ejes+=cant;
}
