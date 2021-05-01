#include "Producto.h"

//Constructores
Producto::Producto()
{
    nombre = "-";
    id = 0;
    peso = 1;
    tamano = 1;
    precioCompra = 1;
    precioVenta = 1;
}

Producto::Producto(string _nombre, int _id, float _peso, float _tamano, float _compra, float _venta)
{
    nombre = _nombre;
    id = _id;
    peso = _peso;
    tamano = _tamano;
    precioCompra = _compra;
    precioVenta = _venta;
}

Producto::~Producto() {}

//Getters
string Producto::getNombre()
{
    return nombre;
}

int Producto::getId()
{
    return id;
}

float Producto::getPrecioCompra()
{
    return precioCompra;
}

float Producto::getPrecioVenta()
{
    return precioVenta;
}

float Producto::getPeso()
{
    return peso;
}

float Producto::getTamano()
{
    return tamano;
}

//Setters
void Producto::setNombre(string _nombre)
{
    nombre = _nombre;
}

void Producto::setId(int _id)
{
    id = _id;
}

void Producto::setPrecioCompra(float _compra)
{
    precioCompra = _compra;
}

void Producto::setPrecioVenta(float _venta)
{
    precioVenta = _venta;
}

void Producto::setPeso(float _peso)
{
    peso = _peso;
}

void Producto::setTamano(float _tamano)
{
    tamano = _tamano;
}
