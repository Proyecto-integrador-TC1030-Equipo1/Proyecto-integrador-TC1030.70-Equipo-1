#include <iostream>
#include "Sucursales.h"
#include<bits/stdc++.h>
using namespace std;

Sucursal::Sucursal(){
  nombreSucursal = "NA";
  inv = new int [3];
  for (int i = 0; i < 3; i++) {
    inv[i]=0;
  }
  sizeMem = 3;
  size=0;
}

Sucursal::Sucursal(string nombre, int mem){ //mem = numero de productos en el inventario
  nombreSucursal = nombre;
  sizeMem = mem;
  inv = new int [sizeMem];
  for (int i = 0; i < sizeMem; i++) {
    inv[i]=0;
  }
  size=0;
}

void Sucursal::agregarProducto(int cantidad, int indice){ //indice =mem
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

void Sucursal::eliminarProducto(int indice){
  if (indice<sizeMem){
    for (int j=indice; j<sizeMem; j++){
      inv[j]=inv[j+1];
    }
    inv[sizeof(inv)-1]=0;
  }
}

void Sucursal::aniadirEmpleado(Empleado employee){
  if (size==0){
    Empleado *empleados= new Empleado[1];
    empleados[0]=employee;
  }else{
    Empleado *temp = new Empleado[size+1];
    for (int i = 0; i < size; i++) {
      temp[i]=empleados[i];
    }
    size++;
    empleados[size-1]=employee;
  }
}

void Sucursal::eliminarEmpleado(int indice){
  if (indice<size){
    for (int j=indice; j<size; j++){
      empleados[j]=empleados[j+1];
    }
    empleados[sizeof(empleados)-1]=Empleado();
  }
}
