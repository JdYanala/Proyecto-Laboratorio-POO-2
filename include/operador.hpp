#include "persona.hpp"
class Operador : public Persona
{
private:
    int CUE;
public:
    Operador(string,int,string,int);
    ~Operador();
};

Operador::Operador(string nombre,int documento,string descripcion, int CUE):Persona(nombre,documento,descripcion), CUE(CUE)
{
}

Operador::~Operador()
{
}

