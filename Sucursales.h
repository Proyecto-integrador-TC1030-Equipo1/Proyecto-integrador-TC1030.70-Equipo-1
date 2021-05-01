#ifndef Inventario_h
#define Inventario_h
#include <iostream>
#include "Cliente.h"
#include "Empleado.h"
using namespace std;

class Sucursal{
  private:
    string nombreSucursal;
    int *inv, sizeMem, size;
    Cliente cliente;
    Empleado *empleado;
  public:
    Sucursal();
    Sucursal(string);
    string getnombreSucursal();
    void agregarProducto(int,int);
    void modificarProducto(int, int);
    void eliminarProducto(int);
    void aniadirEmpleado(Empleado);
    void transferirEmpleado(Sucursal);
    void eliminarEmpleado(int);
};
#endif
