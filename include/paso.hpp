#ifndef PASO_HPP
#define PASO_HPP
#include <string>
#include <iostream>
using namespace std;

class Paso
{
private:
    string placa;
    string categoria;
    int tarifa;
public:
    Paso(string, string, int);
    Paso();
    ~Paso();
    string getCategoria() const;
    int getTarifa() const;
    string getPlaca() const;
};



#endif