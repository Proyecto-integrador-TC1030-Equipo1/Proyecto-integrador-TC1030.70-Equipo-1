#ifndef Persona_H
#define Persona_H
#include <iostream>

using namespace std;

class Persona{
    private:
        string nombre, direccion, fecha, sexo;
        int numero;
    public:
        Persona();
        Persona(string, string, string, string, int);
        string getNombre();
        void setNombre(string);
        string getDireccion();
        void setDireccion(string);
        string getFecha();
        void setFecha(string);
        string getSexo();
        void setSexo(string);
        int getNumero();
        void setNumero(int);
        void imprimir();
};
#endif