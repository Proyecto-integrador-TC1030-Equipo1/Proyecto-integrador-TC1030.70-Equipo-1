#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto
{
public:
    Producto();
    Producto(std::string, double);
    std::string getNombre() const;
    double getPrecio() const;
    int getIdProducto() const;
    void setNombre(std::string);
    void setPrecio(double);
    void setIdProducto(int);
    void printProducto();

private:
    //número que identifica el producto
    int idProducto;
    //precio de venta del producto
    double precio;
    //nombre del producto
    std::string nombre;
};

//constructor por defecto sin argumento que inicializa el nombre a un string vacío y el resto de atributos en -1
Producto::Producto()
{
    nombre = "";
    precio = -1;
    idProducto = -1;
}

//constructor con parámetros que recibe el nombre y el precio
Producto::Producto(std::string _nombre, double _precio)
{
    nombre = _nombre;
    precio = _precio;
    idProducto = -1;
}

//método de acceso para el nombre del producto
std::string Producto::getNombre() const
{
    return nombre;
}

//método de acceso para el precio del producto
double Producto::getPrecio() const
{
    return precio;
}

//método de acceso para el id del producto
int Producto::getIdProducto() const
{
    return idProducto;
}

//método de modificación para el nombre del producto
void Producto::setNombre(std::string _nombre)
{
    nombre = _nombre;
}

//método de modificación para el precio del producto
void Producto::setPrecio(double _precio)
{
    precio = _precio;
}

//método de modificación para el id del producto
void Producto::setIdProducto(int _idProducto)
{
    idProducto = _idProducto;
}

//método para imprimir la información del producto
void Producto::printProducto()
{
    std::cout << "Nombre del producto: " << nombre << std::endl;
    std::cout << "ID del producto: " << idProducto << std::endl;
    std::cout << "Precio del producto: " << precio << std::endl;
}

#endif