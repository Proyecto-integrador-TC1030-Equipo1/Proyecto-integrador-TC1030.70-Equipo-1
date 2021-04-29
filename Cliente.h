#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Cliente : public Persona{
  public:
    Cliente();
  private:
    string rfc;
    Producto compras, carrito;
};
