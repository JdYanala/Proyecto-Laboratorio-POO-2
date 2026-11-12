#include "../include/caseta.hpp"

Caseta::Caseta(Operador* operador):operador(operador)
{
    numeroDePasos = 0;
    dineroRecaudado = 0;
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
}