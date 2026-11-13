#include "../include/caseta.hpp"
#include "../include/vehiculo.hpp"
#include "../include/carro.hpp"
#include "../include/paso.hpp"
#include "../include/operador.hpp"
#include "../include/propietario.hpp"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<Vehiculo*> vehiculos;
    vector<Persona*> personas;
    Operador* operador = new Operador("David", 1234, "Operador", 5678);
    personas.push_back(operador);
    Caseta* caseta1 = new Caseta( operador);
    
    try
    {   //CASO 1
        cout << "=============== CASO 1 ==================" << endl;
        Propietario*  PersonaCaso1= new Propietario("Juan",1085,"Estudiante",false);
        Carro* VehiculoCaso1 = new Carro("ABC123",3,"Carro",PersonaCaso1);
        cout << *VehiculoCaso1 << endl;
        caseta1->agregarPaso(VehiculoCaso1);
        cout <<"    Registo del Paso: "<<*caseta1->getPasos()[0]<<endl;
        vehiculos.push_back(VehiculoCaso1);
        personas.push_back(PersonaCaso1);
        //CASO 2
        cout << "=============== CASO 2 ==================" << endl;
        
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }
    
}