#include "../include/caseta.hpp"
#include "../include/vehiculo.hpp"
#include "../include/carro.hpp"
#include "../include/moto.hpp"
#include "../include/paso.hpp"
#include "../include/operador.hpp"
#include "../include/propietario.hpp"
#include "../include/bus.hpp"
#include "../include/camion.hpp"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<Vehiculo *> vehiculos;
    vector<Persona *> personas;
    Operador *operador = new Operador("David", 1234, "Operador", 5678);
    personas.push_back(operador);
    Caseta *caseta1 = new Caseta(operador);

    try
    { // CASO 1
        cout << "=============== CASO 1 ==================" << endl;
        Propietario *PersonaCaso1 = new Propietario("Juan", 1085, "Estudiante", false);
        Carro *VehiculoCaso1 = new Carro("ABC123", 3, "Carro", PersonaCaso1);
        cout << *VehiculoCaso1 << endl;
        cout << "    Tarifa: " << VehiculoCaso1->calcularTarifa() << endl;
        vehiculos.push_back(VehiculoCaso1);
        personas.push_back(PersonaCaso1);
        // CASO 2
        cout << "=============== CASO 2 ==================" << endl;
        Propietario *PersonaCaso2 = new Propietario("David", 1086, "Estudiante", true);
        personas.push_back(PersonaCaso2);
        VehiculoCaso1->setPropietario(PersonaCaso2);

        cout << *VehiculoCaso1 << endl;
        cout << "    Tarifa: " << VehiculoCaso1->calcularTarifa() << endl;
        // CASO 3
        cout << "=============== CASO 3 ==================" << endl;
        Propietario *PersonaCaso3 = new Propietario("Pipe", 1087, "Estudiante", true);
        Moto *VehiculoCaso3 = new Moto("ABC321", 125, "Moto", PersonaCaso3);
        personas.push_back(PersonaCaso3);
        vehiculos.push_back(VehiculoCaso3);
        cout << *VehiculoCaso3 << endl;
        cout << "    Tarifa: " << VehiculoCaso3->calcularTarifa() << endl;
        // CASO 4
        cout << "=============== CASO 4 ==================" << endl;
        Propietario *PersonaCaso4 = new Propietario("Camilo", 1088, "Estudiante", false);
        personas.push_back(PersonaCaso4);
        Moto *VehiculoCaso4 = new Moto("XDD568", 500, "Moto", PersonaCaso4);
        vehiculos.push_back(VehiculoCaso4);
        cout << *VehiculoCaso4 << endl;
        cout << "    Tarifa: " << VehiculoCaso4->calcularTarifa() << endl;
        // CASO 5
        cout << "=============== CASO 5 ==================" << endl;
        Propietario *PersonaCaso5 = new Propietario("Andres", 1089, "Estudiante", true);
        personas.push_back(PersonaCaso5);
        Bus *VehiculoCaso5 = new Bus("JAJ222", 38, "Bus", PersonaCaso5);
        vehiculos.push_back(VehiculoCaso5);
        cout << *VehiculoCaso5 << endl;
        cout << "    Tarifa: " << VehiculoCaso5->calcularTarifa() << endl;
        // CASO 6
        cout << "=============== CASO 6 ==================" << endl;
        Camion *VehiculoCaso6 = new Camion("BBF658", 3, "Camion", nullptr);
        vehiculos.push_back(VehiculoCaso6);
        cout << *VehiculoCaso6 << endl;
        cout << "    Tarifa: " << VehiculoCaso6->calcularTarifa() << endl;
        // CASO 7
        cout << "=============== CASO 7 ==================" << endl;
        VehiculoCaso6->agregarEjes(1);
        cout << *VehiculoCaso6 << endl;
        cout << "    Tarifa: " << VehiculoCaso6->calcularTarifa() << endl;
        // CASO 8
        cout << "=============== CASO 8 ==================" << endl;
        Carro *VehiculoCaso8 = new Carro("", 3, "Carro", nullptr);
        // CASO 9
        cout << "=============== CASO 9 ==================" << endl;
        Camion *VehiculoCaso9 = new Camion("BBF658", 1, "Camion", nullptr);
        // CASO 10
        cout << "=============== CASO 10 ==================" << endl;
        caseta1->agregarPaso(VehiculoCaso1);
        caseta1->agregarPaso(VehiculoCaso3);
        caseta1->agregarPaso(VehiculoCaso5);
        caseta1->agregarPaso(VehiculoCaso6);
        cout << "Dinero recaudado: " << caseta1->getDineroRecaudado() << endl;
        cout << "Conteo de vehiculos por tipo: " << endl;
        for (auto tipoVehiculo : caseta1->getConteo())
        {

            cout << "    " << tipoVehiculo.first << ": " << tipoVehiculo.second << endl;
        }
        // CASO 12
        cout << "=============== CASO 12 ==================" << endl;

        cout << "----Eliminando vehiculos----" << endl;
        for (int i = 0; i < vehiculos.size(); i++)
        {
            delete vehiculos[i];
        }

        delete caseta1;

        for (auto n : personas)
        {
            delete n;
        }
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }
}