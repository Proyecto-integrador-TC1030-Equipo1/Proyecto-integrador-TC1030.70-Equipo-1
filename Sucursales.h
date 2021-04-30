// - 30.4.21 - 
#include <iostream>
#include <string>
using namespace std;

class Sucursales{
  private:
    string nombreSucursal;

  public:
    Sucursales();
    Sucursales(string);
    string getnombreSucursal();
    void agregar();
    void modificar();
    void borrar();
    void asociarE();
};