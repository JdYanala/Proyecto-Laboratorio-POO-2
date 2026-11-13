#include "../include/caseta.hpp"

Caseta::Caseta(Operador* operador):operador(operador)
{
    numeroDePasos = 0;
    dineroRecaudado = 0;
    conteo={
        {"Carro", 0},
        {"Moto", 0},
        {"Bus", 0},
        {"Camion", 0}
    };
}

Caseta::~Caseta()
{
    cout << "=======================================\n\nEliminando caseta..." << endl;
    for (int i = 0; i < pasos.size(); i++)
    {
        Paso* paso = pasos[i];
        cout << "     Eliminando paso: "<< i+1;
        delete paso;
    }
}

const vector<Paso*>& Caseta::getPasos() const
{
    return pasos;
}

void Caseta::agregarPaso(Vehiculo* vehiculo)
{
    int tarifa = vehiculo->calcularTarifa();
    pasos.push_back(new Paso(vehiculo->getPlaca(), vehiculo->getCategoria(), tarifa));
    numeroDePasos++;
    dineroRecaudado += tarifa;
    if(vehiculo->getCategoria() == "Carro")
    {
        conteo["Carro"]++;
    }
    else if(vehiculo->getCategoria() == "Moto")
    {
        conteo["Moto"]++;
    }
    else if(vehiculo->getCategoria() == "Bus")
    {
        conteo["Bus"]++;
    }
    else if(vehiculo->getCategoria() == "Camion")
    {
        conteo["Camion"]++;
    }
}

int Caseta::getDineroRecaudado() const
{
    return dineroRecaudado;
}

map<string, int> Caseta::getConteo() const
{
    return conteo;
}