#ifndef Persona_h //Guardian de inclusion multiple
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>
#include "Empleado.h"
using namespace std;

Empleado::Empleado():Persona(){
  cargo="NA";
  sucursalId=0;
}

Empleado::Empleado(string _nombre, Direccion _direccion, string _fecha, string _sexo, int _numero, string _cargo, int sId) : Persona(_nombre, _direccion, _fecha, _sexo, _numero){
  cargo = _cargo;
  sucursalId = sId;
}

string Empleado::getCargo(){
  return cargo;
}

void Empleado::setCargo(string _cargo){
  cargo = _cargo;
}

int Empleado::getSucursalId(){
  return sucursalId;
}

void Empleado::setSucursalId(int sId){
  sucursalId = sId;
}

void Empleado::imprimir(){
  Persona::imprimir();
  cout << "Cargo: " << cargo << endl;
}
