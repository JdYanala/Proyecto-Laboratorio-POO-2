#ifndef OPERADOR_HPP
#define OPERADOR_HPP
#include "persona.hpp"
class Operador : public Persona
{
private:
    int CUE;
public:
    Operador(string,int,string,int);
    ~Operador();
};
#endif

