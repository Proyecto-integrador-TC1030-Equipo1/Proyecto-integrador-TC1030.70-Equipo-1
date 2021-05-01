#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto
{
private:
    string nombre;
    int id;
    float peso, tamano, precioCompra, precioVenta;

public:
    Producto();
    ~Producto();
    Producto(string, int, float, float, float, float);

    //getters
    string getNombre();
    int getId();
    float getPrecioCompra();
    float getPrecioVenta();
    float getPeso();
    float getTamano();

    //setters
    void setNombre(string);
    void setId(int);
    void setPrecioCompra(float);
    void setPrecioVenta(float);
    void setPeso(float);
    void setTamano(float);
};

#endif
