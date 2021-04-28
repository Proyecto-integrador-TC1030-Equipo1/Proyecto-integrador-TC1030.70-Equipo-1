#ifndef COMPRA_H
#define COMPRA_H

#include <string>
#include "Cliente.h"
#include "Producto.h"

class Compra
{
public:
    Compra();
    Compra(Cliente, Producto);
    Cliente getCliente() const;
    Producto getProducto() const;
    int getIdCompra() const;
    void setCliente(Cliente);
    void setProducto(Producto);
    void setIdCompra(int);
    void printCompra();

private:
    //cliente que realizó la compra
    Cliente cliente;
    //producto que se compró
    Producto producto;
    //identificador de la compra
    int idCompra;
};

//Constructor por defecto que inicializa los objetos a valores por defecto, el estatus a cancelado, y el resto a -1
Compra::Compra()
{
    cliente = Cliente();
    producto = Producto();
    idCompra = -1;
}

//Constructor con parámetros que inicializa el cliente, el producto y la fecha y cambia el estatus a en camino
Compra::Compra(Cliente _cliente, Producto _producto)
{
    producto = _producto;
    cliente = _cliente;
    idCompra = -1;
}

//Método de acceso para el cliente. El valor de retorno es de tipo cliente.
Cliente Compra::getCliente() const
{
    return cliente;
}

//Método de acceso para el producto. El valor de retorno es de tipo producto.
Producto Compra::getProducto() const
{
    return producto;
}

//Método de acceso para el identificador de la compra. El valor de retorno es de tipo int.
int Compra::getIdCompra() const
{
    return idCompra;
}

//Método de modificación para el cliente. No tiene valor de retorno.
void Compra::setCliente(Cliente _cliente)
{
    cliente = _cliente;
}

//Método de modificación para el producto. No tiene valor de retorno.
void Compra::setProducto(Producto _producto)
{
    producto = _producto;
}

//método de modificación para el identificador de la compra. No tiene valor de retorno.
void Compra::setIdCompra(int _idCompra)
{
    idCompra = _idCompra;
}

//método para imprimir la información de la compra. No tiene valor de retorno.
void Compra::printCompra()
{
    std::cout << "-----FACTURA-----" << std::endl;
    std::cout << "ID de compra: " << idCompra << std::endl;
    std::cout << "Cliente: " << cliente.getNombre() << std::endl;
    std::cout << "Direccion de envio: " << std::endl;
    cliente.getDireccion().printDireccion();
    std::cout << "\t--Producto--" << std::endl;
    producto.printProducto();
}

#endif