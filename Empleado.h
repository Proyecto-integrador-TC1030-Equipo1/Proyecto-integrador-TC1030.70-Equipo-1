#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Empleado : public Persona{
  public:
    Empleado();
    Empleado(string, Direccion, string, string, int, string);
    string getCargo();
    void setCargo(string);
    void imprimir();
    void setSucursalId(int);
    int getSucursalId();
  private:
    string cargo;
    int sucursalId;
};
