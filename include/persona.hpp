#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int documento;  
    string descripcion;
public:
    Persona(string,int,string);
    virtual ~Persona();
};


#endif