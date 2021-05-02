#ifndef Persona_h //Guardian de inclusion multiple
#define Persona_h
#include "Persona.h"
#endif
#include <iostream>
#include "Cliente.h"
using namespace std;

Cliente::Cliente():Persona(){
  rfc="NA";
  inv = new int [1];
  inv[0] = 0;
  sizeMem = 1;
  formaPago="Efectivo";
}

Cliente::Cliente(string _nombre, Direccion _direccion, string _fecha, string _sexo, int _numero, string _rfc):Persona(_nombre, _direccion, _fecha, _sexo, _numero){
  rfc = _rfc;
  inv = new int [1];
  inv[0] = 0;
  sizeMem = 1;
  formaPago="Efectivo";
}

string Cliente::getFormaPago(){
  return formaPago;
}

void Cliente::setFormaPago(string fp){
  formaPago = fp;
}

string Cliente::getRfc(){
  return rfc;
}

void Cliente::setRfc(string _rfc){
  rfc = _rfc;
}

void Cliente::imprimir(){
  Persona::imprimir();
  cout << "Rfc: " << rfc << endl;
}

void Cliente::agregarProducto(int cantidad, int indice){ //indice =mem
  if (indice+1 > sizeMem){
    sizeMem= indice;
    int *temp = new int[sizeMem];
    for (int i = 0; i < sizeMem-2; i++) {
      if (sizeof(inv) <= i){
        temp[i]= inv[i];
      }else{
        temp[i]=0;
      }

    }
    temp[indice]=cantidad;
    temp[sizeMem-1]=0;
    inv = temp;
  }else{
    inv[indice]=cantidad;
  }
}

int Cliente::getInv(int indice){
  return inv[indice];
}

void Cliente::setInv(int indice, int cantidad){
  inv[indice]=cantidad;
}

void Cliente::eliminarProducto(int indice){
  if (indice<sizeMem){
    for (int j=indice; j<sizeMem; j++){
      inv[j]=inv[j+1];
    }
    inv[sizeof(inv)-1]=0;
  }
}
