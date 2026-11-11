#include "persona.hpp"

class Propietario : public Persona
{
private:
    bool esVecino;
public:
    Propietario (string,int,string,bool);
    ~Propietario ();
};

Propietario ::Propietario (string nombre,int documento,string descripcion,bool vecino ):Persona(nombre,documento,descripcion),esVecino(vecino)
{
}

Propietario ::~Propietario ()
{
}
