#include "../include/Excepciones.hpp"

const char *ExcepcionPlacaInvalida::what() const noexcept
{
    string msg = mensaje + "<Placa Invalida> - Placa no puede ser vacia";
    return msg.c_str();
}

ExcepcionPlacaInvalida::ExcepcionPlacaInvalida(const string mensaje) : mensaje(mensaje)
{
}

const char *ExcepcionDatosInvalidos::what() const noexcept
{
    string msg = "[DATOS INVALIDOS]: "+ mensaje;
    return msg.c_str();
}

ExcepcionDatosInvalidos::ExcepcionDatosInvalidos(const string mensaje) : mensaje(mensaje)
{
}