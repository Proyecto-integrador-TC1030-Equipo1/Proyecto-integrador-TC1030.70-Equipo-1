#ifndef Sucursal_h
#define Sucursal_h
#include <iostream>
#ifndef Cliente_h
#define Cliente_h
#include "Cliente.h"
#endif
#ifndef Empleado_h
#define Empleado_h
#include "Empleado.h"
#endif
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
    Empleado getEmpleado(int);
    string getNombreSucursal();
    void agregarProducto(int,int);
    void eliminarProducto(int);
    void aniadirEmpleado(Empleado);
    void eliminarEmpleado(int);
    int getSize();
    void actualizarSucursalId(int);
};
#endif
