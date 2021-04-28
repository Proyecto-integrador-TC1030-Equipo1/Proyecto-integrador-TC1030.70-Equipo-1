#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Direccion.h"

class Cliente
{
public:
    Cliente();
    Cliente(std::string, Direccion);
    std::string getNombre() const;
    int getIdCliente() const;
    Direccion getDireccion() const;
    void setNombre(std::string);
    void setIdCliente(int);
    void setDireccion(Direccion);
    void printCliente();

private:
    //nombre del cliente
    std::string nombre;
    //id que identifica al cliente
    int idCliente;
    //dirección de envío del cliente
    Direccion direccion;
};

//constructor por defecto que inicializa el nombre como un string vacío, el id como -1 y la dirección a valores por defecto
Cliente::Cliente()
{
    nombre = "";
    idCliente = -1;
    direccion = Direccion();
}

//constructor con parámetros que recibe el nombre y la dirección
Cliente::Cliente(std::string _nombre, Direccion _direccion)
{
    nombre = _nombre;
    direccion = _direccion;
    idCliente = -1;
}

//método de acceso para el nombre del cliente
std::string Cliente::getNombre() const
{
    return nombre;
}

//método de acceso para el id del cliente
int Cliente::getIdCliente() const
{
    return idCliente;
}

//método de acceso para la dirección de envío del cliente
Direccion Cliente::getDireccion() const
{
    return direccion;
}

//método de modificación para el nombre del cliente
void Cliente::setNombre(std::string _nombre)
{
    nombre = _nombre;
}

//método de modificación para el id del cliente
void Cliente::setIdCliente(int _idCliente)
{
    idCliente = _idCliente;
}

//método de modificación para la dirección de envío del cliente
void Cliente::setDireccion(Direccion _direccion)
{
    direccion = _direccion;
}

//método para imprimir la información del cliente
void Cliente::printCliente()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << idCliente << std::endl;
    std::cout << "Direccion: " << std::endl;
    direccion.printDireccion();
}

#endif