#include "../include/caseta.hpp"
#include "../include/vehiculo.hpp"
#include "../include/carro.hpp"
#include "../include/paso.hpp"
#include "../include/operador.hpp"
#include "../include/propietario.hpp"
#include <vector>
#include <iostream>


int main()
{
    vector<Vehiculo*> vehiculos;
    vector<Persona*> personas;
    
    try
    {
        cout << "=============== CASO 1 ==================" << endl;
        Propietario*  PersonaCaso1= new Propietario("Juan",1085,"Estudiante",false);
        Carro* VehiculoCaso1 = new Carro("ABC123",3,"Carro",PersonaCaso1);
        vehiculos.push_back(VehiculoCaso1);
        personas.push_back(PersonaCaso1);

    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
    }
    
}