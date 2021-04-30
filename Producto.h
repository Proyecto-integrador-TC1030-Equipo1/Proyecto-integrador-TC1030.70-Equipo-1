#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using namespace std;

class Producto
{
private:
    string nombre;
    int cantidad, id, precioCompra, precioVenta;
    float peso, tamano;
    bool existencia;

public:
    Producto();
    Producto();

    //getters
    string getNombre();
    int getCantidad();
    int getId();
    int getPrecioCompra();
    int getPrecioVenta();
    float getPeso();
    float getTamano();
    bool getExistencia();

    //setters
    void setNombre(string);
    void setCantidad(int);
    void setId(int);
    void setPrecioCompra(int);
    void setPrecioVenta(int);
    void setPeso(float);
    void setTamano(float);
    void setExistencia(bool);
};

#endif