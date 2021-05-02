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
// Valor = 0 --- Crea 2 Sucursales
// Valor = 1 --- Agrega 1 de: Gerente, Administrador, Vendedor por sucursal
// Valor = 2 --- Agrega 4 productos, modifica 1 producto y quita 1 producto
// Valor = 3 --- Agrega el numero de piezas de cada producto a las sucursales
// Valor = 4 --- Agrega 3 clientes, modifica 1 cliente, quita 1 cliente
// Valor = 5 --- Generar una orden y asignarla a un administrador , generar datos de orden y del cliente
// Valor = 6 --- Generar una orden y asignarla a un vendedor , generar datos de orden y del cliente
    string sucursal1 = "plaza";
    string sucursal2 = "mercado";
    int mem1 = 3;
    int mem2 = 5;
    Sucursal s1 = Sucursal(sucursal1, mem1);
    Sucursal s2 = Sucursal(sucursal2, mem2);
    Inventario inv;
    inv.agregarSucursal(s1);
    inv.agregarSucursal(s2);
    Empleado g1,g2,v1,v2,a1,a2;
    g1.setNombre("Arnoldo");
    g1.setCargo("Gerente");
    g2.setNombre("Gonzalo");
    g2.setCargo("Gerente");
    v1.setNombre("Pizarro");
    v1.setCargo("Vendedor");
    v2.setNombre("Juan");
    v2.setCargo("Vendedor");
    a1.setNombre("Rodolfo");
    a1.setCargo("Administrador");
    a2.setNombre("Lazaro");
    a2.setCargo("Administrador");
    s1.aniadirEmpleado(g1);
    s1.aniadirEmpleado(v1);
    s1.aniadirEmpleado(a1);
    s2.aniadirEmpleado(g2);
    s2.aniadirEmpleado(v2);
    s2.aniadirEmpleado(a2);
    


    return 0;
}
