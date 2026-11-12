#include "persona.hpp"

class Propietario : public Persona
{
private:
    bool esVecino;
public:
    Propietario (string,int,string,bool);
    ~Propietario ();
    bool getEsVecino() const;
};

