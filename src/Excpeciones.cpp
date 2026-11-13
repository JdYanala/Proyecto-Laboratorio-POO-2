#include "../include/Excepciones.hpp"

const char *ExcepcionPlacaInvalida::what() const noexcept
{
    
 
    return mensaje.c_str();
}

ExcepcionPlacaInvalida::ExcepcionPlacaInvalida(const string mensaje) : mensaje(mensaje)
{
    this->mensaje = mensaje + "<Placa Invalida> - Placa no puede ser vacia";
}

const char *ExcepcionDatosInvalidos::what() const  noexcept
{
   
    return mensaje.c_str();
}

ExcepcionDatosInvalidos::ExcepcionDatosInvalidos(const string mensaje) : mensaje(mensaje)
{
     this->mensaje = "[DATOS INVALIDOS]: "+ mensaje;
}