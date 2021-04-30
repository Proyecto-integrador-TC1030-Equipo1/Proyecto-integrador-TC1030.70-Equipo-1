#ifndef Persona_h //Guardian de inclusion multiple
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente():Persona(){
  rfc="NA";
  //compras = Producto compras_();
  //carrito = Producto carrtio();
}

Cliente::Cliente(string _nombre, Direccion _direccion, string _fecha, string _sexo, int _numero, string _rfc):Persona(string _nombre, Direccion _direccion, string _fecha, string _sexo, int _numero){
  rfc = _rfc;
  //compras = Producto compras_();
  //carrito = Producto carrtio();
}

string Cliente::getRfc(){
  return rfc;
}

void Cliente::setRfc(string _rfc){
  rfc = _rfc;
}
