#include "../include/persona.hpp"

Persona::Persona(string nombre,int documento,string descripcion):nombre(nombre),documento(documento),descripcion(descripcion)
{
}

Persona::~Persona()
{
}

string Persona::getNombre() const{
    return nombre;
}
