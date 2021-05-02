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
#include "inventario.h"
#include "Sucursal.h"
using namespace std;

int main(){
  Cliente c1 = Cliente();
  c1.imprimir();
  Empleado e1 = Empleado();
  e1.setSucursalId(3);
  e1.imprimir();
  return 0;
}
