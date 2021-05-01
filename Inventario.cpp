#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    sucursales = new Sucursal[1];
    productos = new Producto[1];
    memSucursal=1;
    sizeSucursal=0;
    memProducto=1;
    sizeProducto=0;
}

void Inventario::agregarSucursal(Sucursal nueva){
  if (sizeSucursal+1 > memSucursal){
    memSucursal= sizeSucursal+2;
    Sucursal *temp = new Sucursal[memSucursal];
    for (int i = 0; i <= sizeSucursal; i++) {
      temp[i]=sucursales[i];
    }
    sizeSucursal++;
    temp[sizeSucursal]=nueva;
    sucursales = temp;
  }else{
    sizeSucursal++;
    sucursales[sizeSucursal]=nueva;
  }
}

void Inventario::agregarProducto(Producto nuevo){
    if (sizeProducto+1 > memProducto){
        memProducto+=2;
        sizeProducto++;
        Producto *temp = new Producto[memProducto];
        for (int i = 0; i < sizeProducto; i++)
        {
           temp[i] = productos[i];
        }
        sizeProducto++;
        temp[sizeProducto] = nuevo;
        productos = temp;
    }else{
        sizeProducto++;
        productos[sizeProducto] = nuevo;
    }
    for (int i = 0; i <= sizeSucursal; i++) {
      sucursales[i].agregarProducto(0,sizeProducto);
    }
    cliente.agregarProducto(0,sizeProducto);
}

void Inventario::atiende(Empleado at){
  atendio = at;
  sAtendiendo = at.getSucursalId();
}

void Inventario::transferirEmpleado(int sOrigen, int sDestino, int indiceEmpleado){
  Empleado transfiriendo= sucursales[sOrigen].getEmpleado(indiceEmpleado);
  sucursales[sOrigen].eliminarEmpleado(indiceEmpleado);
  transfiriendo.setSucursalId(sDestino);
  sucursales[sDestino].aniadirEmpleado(transfiriendo);
}
