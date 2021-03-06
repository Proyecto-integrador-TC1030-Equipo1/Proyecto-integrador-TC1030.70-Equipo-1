#ifndef Persona_h
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>

class Cliente : public Persona{
  public:
    Cliente();
    ~Cliente();
    Cliente(string, Direccion, string, string, int, string);
    string getFormaPago();
    int getInv(int);
    void setInv(int, int);
    void setFormaPago(string);
    string getRfc();
    void setRfc(string);
    void imprimir();
    void agregarProducto(int,int);
    void eliminarProducto(int);
  private:
    string rfc, formaPago;
    int *inv, sizeMem;

};
