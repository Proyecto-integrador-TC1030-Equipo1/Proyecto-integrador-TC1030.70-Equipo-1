#ifndef Inventario_h
#define Inventario_h
#include <iostream>
#ifndef Empleado_h //Si conoce una mejor forma de hacer esto agradeceria la retroalimentacion -Erick
#define Empleado_h
#include "Empleado.h"
#endif
#ifndef Producto_h
#define Producto_h
#include "Producto.h"
#endif
#ifndef Cliente_h
#define Cliente_h
#include "Cliente.h"
#endif
#include "Sucursal.h"

using namespace std;

class Inventario{
    private:
      Empleado atendio;
      Cliente cliente;
      Producto *productos;
      Sucursal *sucursales;
      int sizeProducto, sizeSucursal, memProducto, memSucursal, sAtendiendo;
    public:
      Inventario();
      void generarOrden();
      void operator + (Cliente);
      void operator + (Empleado);
      void transferirEmpleado(int, int, int);
      void agregarSucursal(Sucursal);
      void eliminarSucursal(int);
      void agregarProducto(Producto);
      void eliminarProducto(int);
      void atiende(Empleado);
};
#endif
