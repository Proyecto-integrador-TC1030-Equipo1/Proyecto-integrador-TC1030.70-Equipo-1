#ifndef Inventario_h
#define Inventario_h
#include <iostream>
#include "Empleado.h"
using namespace std;

class Inventario{
    private:
    public:
        void añadir();
        void eliminar();
        void generarOrden(Empleado);
};
#endif
