#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

class Direccion
{
public:
    Direccion();
    Direccion(std::string, std::string, std::string);
    std::string getPais() const;
    std::string getEstado() const;
    std::string getCiudad() const;
    std::string getCodigoPostal() const;
    std::string getCalleNum() const;
    void setPais(std::string);
    void setEstado(std::string);
    void setCiudad(std::string);
    void setCodigoPostal(std::string);
    void setCalleNum(std::string);
    void printDireccion();

private:
    //país
    std::string pais;
    //estado o entidad federativa
    std::string estado;
    //ciudad o municipio
    std::string ciudad;
    //código postal, puede incluir letras y carácteres especiales
    std::string codigoPostal;
    //dirección con calle y número
    std::string calleNum;
};

#endif
