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
using namespace std;/**/

int main(){
// Valor = 0 --- Crea 2 Sucursales
    Sucursal s1 = Sucursal("Plaza", 3);
    Sucursal s2 = Sucursal("Mercadp", 5);
    Inventario inv;
    inv.agregarSucursal(s1);
    inv.agregarSucursal(s2);
// Valor = 1 --- Agrega 1 de: Gerente, Administrador, Vendedor por sucursal
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
// Valor = 2 --- Agrega 4 productos, modifica 1 producto y quita 1 producto
    Producto p1 = Producto("Coca", 0, .500, 1, 3.5, 4.5);
    Producto p2 = Producto("Cigars", 2, .200, 1, 5.0, 6.0);
    Producto p3 = Producto("Papas", 2, .200, 1, 5.0, 6.0);
    Producto p4 = Producto("Gansito", 3, .100, 1, 3.5, 4.5);
    inv.agregarProducto(p1);
    inv.agregarProducto(p2);
    inv.agregarProducto(p3);
    inv.agregarProducto(p4);
    p1.setPeso(.600);
    p1.setPrecioCompra(6.5);
    p1.setPrecioCompra(7.5);
    inv.eliminarProducto(2);
// Valor = 3 --- Agrega el numero de piezas de cada producto a las sucursales
    inv.agregarAinvSucursal(0,0,10);
    inv.agregarAinvSucursal(0,1,10);
    inv.agregarAinvSucursal(0,2,10);
    inv.agregarAinvSucursal(1,0,10);
    inv.agregarAinvSucursal(1,1,10);
    inv.agregarAinvSucursal(1,2,10);
// Valor = 4 --- Agrega 3 clientes, modifica 1 cliente, quita 1 cliente
    Cliente c1,c2,c3;
    c1.setNombre("Roberto");
    c2.setNombre("Checo");
    c3.setNombre("Pablo");
    c3.~Cliente();
    c1.agregarProducto(3,1);
    c1.agregarProducto(4,0);
// Valor = 5 --- Generar una orden y asignarla a un administrador , generar datos de orden y del cliente
    inv.agregarCliente(c1);
    inv.atiende(a1);
    inv+1;
// Valor = 6 --- Generar una orden y asignarla a un vendedor , generar datos de orden y del cliente
    inv.agregarCliente(c1);
    inv.atiende(v1);//*/
    inv+1;
    return 0;
}
