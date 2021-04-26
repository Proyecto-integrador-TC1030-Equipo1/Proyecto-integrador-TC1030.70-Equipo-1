#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(){
    nombre = "-";
    direccion = "-";
    fecha = "-";
    sexo = "-";
    numero = 0;
}

Persona::Persona(string _nombre, string _direccion, string _fecha, string _sexo, int _numero){
    nombre = _nombre;
    direccion = _direccion;
    fecha = _fecha;
    sexo = _sexo;
    numero = _numero;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

string Persona::getDireccion(){
    return direccion;
}

void Persona::setDireccion(string _direccion){
    direccion = _direccion;
}

string Persona::getFecha(){
    return fecha;
}

void Persona::setFecha(string _fecha){
    fecha = _fecha;
}

string Persona::getSexo(){
    return sexo;
}

void Persona::setSexo(string _sexo){
    sexo = _sexo;
}

int Persona::getNumero(){
    return numero;
}

void Persona::setNumero(int _numero){
    numero = _numero;
}

void Persona::imprimir(){
    cout << "Nombre: " << nombre << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Fecha Nacimiento: " << fecha << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Numero Telefonico: " << numero << endl;
}