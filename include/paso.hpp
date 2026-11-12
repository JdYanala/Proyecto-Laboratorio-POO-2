#ifdef PASO_HPP
#define PASO_HPP
#include <iostream>
using namespace std;

class Paso
{
private:
    string placa;
    string categoria;
    float tarifa;
public:
    Paso(string, string, float);
    ~Paso();
};

Paso::Paso(string placa, string categoria, float tarifa) : placa(placa), categoria(categoria), tarifa(tarifa)
{
}


Paso::~Paso()
{
}



#endif