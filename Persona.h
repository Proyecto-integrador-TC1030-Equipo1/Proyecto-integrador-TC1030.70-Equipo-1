#ifndef Persona_H
#define Persona_H
#include <iostream>
#include "Direccion.h"

using namespace std;

class Persona{
    private:
        string nombre, fecha, sexo;
        Direccion direccion;
        int numero;
    public:
        Persona();
        Persona(string, Direccion, string, string, int);
        string getNombre();
        void setNombre(string);
        Direccion getDireccion();
        void setDireccion(Direccion);
        string getFecha();
        void setFecha(string);
        string getSexo();
        void setSexo(string);
        int getNumero();
        void setNumero(int);
        virtual void imprimir();
};
#endif
