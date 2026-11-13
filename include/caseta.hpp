#ifndef CASETA_HPP
#define CASETA_HPP
#include <vector>
#include <map>
#include "vehiculo.hpp"
#include "paso.hpp"
#include "operador.hpp"
using namespace std;
class Caseta
{
private:
    Operador* operador;
    vector<Paso*> pasos;
    int numeroDePasos;
    int dineroRecaudado;
    map<string, int> conteo;

public:
    Caseta(Operador*);
    ~Caseta();
    const vector<Paso*>& getPasos() const;
    void agregarPaso(Vehiculo*);
    int getDineroRecaudado() const;
    map<string, int> getConteo() const;
    
};



#endif