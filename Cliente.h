#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Cliente : public Persona{
  public:
    Cliente();
    Cliente(string, Direccion, string, string, int, string);
    string getRfc();
    void setRfc(string);
    void imprimir();
  private:
    string rfc;
    //Producto compras, carrito;
};
