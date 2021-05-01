#ifndef Inventario_h
#define Inventario_h
#include <iostream>
#include "Empleado.h"
#include "Producto.h"
#include "Cliente.h"
#include "Sucursal.h"
using namespace std;

class Inventario{
    private:
      Cliente cliente;
      Producto *productos;
      Sucursal *sucursales;

    public:
      Inventario();
      void generarOrden(Cliente);
      void operator + (Cliente);
      void transferirEmpleados(int, int, int);
      void agregarSucusal(Sucursal);
      void agregarProducto(Producto);
      void eliminarProducto(int);
      void generarOrden(Empleado);
};
#endif
