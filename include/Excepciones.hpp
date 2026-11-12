#include <iostream>
#include <exception>
#include <string>

using namespace std;

class ExcepcionPlacaInvalida : public exception
{
private:
    string mensaje;

public:
    ExcepcionPlacaInvalida(const string);
    const char *what() const noexcept override;
};



class ExcepcionDatosInvalidos : public exception
{
private:
    string mensaje;

public:
    ExcepcionDatosInvalidos(const string);
    const char *what() const noexcept override;
};


