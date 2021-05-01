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
    Empleado *empleados;
  public:
    Sucursal();
    Sucursal(string, int);
    string getNombreSucursal();
    void agregarProducto(int,int);
    void eliminarProducto(int);
    void aniadirEmpleado(Empleado);
    void eliminarEmpleado(int);
};
#endif
