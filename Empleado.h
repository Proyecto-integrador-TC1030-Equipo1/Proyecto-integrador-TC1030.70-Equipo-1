#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Empleado : public Persona{
  public:
    Empleado();
  private:
    string cargo;
};
