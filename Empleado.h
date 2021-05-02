#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Empleado : public Persona{
  public:
    Empleado();
    Empleado(string, Direccion, string, string, int, string, int);
    string getCargo();
    void setCargo(string);
    void imprimir();
    void setSucursalId(int);
    int getSucursalId();
    string getNombre();
  private:
    string cargo;
    int sucursalId;
};
