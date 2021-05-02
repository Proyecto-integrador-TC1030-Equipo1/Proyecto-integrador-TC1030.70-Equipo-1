#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    sucursales = new Sucursal[1];
    productos = new Producto[1];
    memSucursal=1;
    sizeSucursal=0;
    memProducto=1;
    sizeProducto=0;
}

void Inventario::agregarSucursal(Sucursal nueva){
  if (sizeSucursal+1 > memSucursal){
    memSucursal= sizeSucursal+2;
    Sucursal *temp = new Sucursal[memSucursal];
    for (int i = 0; i <= sizeSucursal; i++) {
      temp[i]=sucursales[i];
    }
    sizeSucursal++;
    temp[sizeSucursal]=nueva;
    sucursales = temp;
  }else{
    sizeSucursal++;
    sucursales[sizeSucursal]=nueva;
  }
}

void Inventario::agregarProducto(Producto nuevo){
    if (sizeProducto+1 > memProducto){
        memProducto+=2;
        sizeProducto++;
        Producto *temp = new Producto[memProducto];
        for (int i = 0; i < sizeProducto; i++)
        {
           temp[i] = productos[i];
        }
        sizeProducto++;
        temp[sizeProducto] = nuevo;
        productos = temp;
    }else{
        sizeProducto++;
        productos[sizeProducto] = nuevo;
    }
    for (int i = 0; i <= sizeSucursal; i++) {
      sucursales[i].agregarProducto(0,sizeProducto);
    }
    cliente.agregarProducto(0,sizeProducto);
}

void Inventario::eliminarProducto(int indice){
  if (indice<memProducto){
    for (int j=indice; j<memProducto; j++){
      productos[j]=productos[j+1];
    }
    productos[sizeof(productos)-1]=Producto();
    for (int i = 0; i < sizeSucursal; i++) {
      sucursales[i].eliminarProducto(indice);
    }
    cliente.eliminarProducto(indice);
}}

void Inventario::atiende(Empleado at){
  atendio = at;
  sAtendiendo = at.getSucursalId();
}

void Inventario::transferirEmpleado(int sOrigen, int sDestino, int indiceEmpleado){
  Empleado transfiriendo= sucursales[sOrigen].getEmpleado(indiceEmpleado);
  sucursales[sOrigen].eliminarEmpleado(indiceEmpleado);
  transfiriendo.setSucursalId(sDestino);
  sucursales[sDestino].aniadirEmpleado(transfiriendo);
}

void Inventario::generarOrden(int sucuId){
  if (atendio.getCargo() == "gerente" || atendio.getCargo() == "vendedor") {
    int cesta[memProducto], cont=0;
    double total=0;
    string cestaN[memProducto];
    for (int i = 0; i < sizeProducto; i++) {
      if (cliente.getInv(i) > 0 || sucursales[sucuId].getInv(i) >0) {
        cesta[cont]= cliente.getInv(i);
        cestaN[cont]= productos[i].getNombre();
        cont++;
        total= total + (productos[i].getPrecioVenta()*cliente.getInv(i));
        sucursales[sucuId].setInv(i, sucursales[sucuId].getInv(i)-cliente.getInv(i));
      }
    }
    if (cont == 0){
      cout << "Se necesita adquirir uno o mas prodcutos\n";
    }else{
      cout << "Cliente: " << cliente.getNombre() <<"| Atendio: "<<atendio.getNombre()<< "| Total: " << total<<endl;
      for (int i = 0; i <= cont; i++) {
        cout << cestaN[i] <<": $"<< cesta[i] << endl;
        cout << "Gracias por su preferencia" << endl;
      }
    }
  }else{
    cout << "Este empleado no puede generar ordenes\n";
  }
}

void Inventario::operator + (int sucuId){
  generarOrden(sucuId);
}

void Inventario::eliminarSucursal(int indice){
  if (indice<memSucursal){
    for (int j=indice; j<memSucursal; j++){
      sucursales[j]=sucursales[j+1];
      sucursales[j].actualizarSucursalId(j+1);
      //for (int k=0;k<sucursales[j].getSize();k++){
        //sucursales[j]=

      //}
    }
    sucursales[sizeof(sucursales)-1]=Sucursal();
}}

//MÉTODO Eliminar Sucursal ~ No "delete", arreglo con varias posiciones. . .
//. . .Al mover de espacio (ejemplo con "2"), el espacio vacio se pondrá un cero como valor establecido.

void Inventario::agregarAinvSucursal(int iSuc,int indice, int cantidad){
  sucursales[iSuc].agregarProducto(indice, cantidad);
}

void Inventario::agregarCliente(Cliente c1){
  cliente = c1;
}
