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

//constructor por defecto sin argumentos que inicializa todos los atributos a strings vacíos
Direccion::Direccion()
{
    pais = "";
    estado = "";
    ciudad = "";
    codigoPostal = "";
    calleNum = "";
}

//constructor con parámetros que recibe el país, el estado y la ciudad y el resto strings vacíos
Direccion::Direccion(std::string _pais, std::string _estado, std::string _ciudad)
{
    pais = _pais;
    estado = _estado;
    ciudad = _ciudad;
    codigoPostal = "";
    calleNum = "";
}

//método de acceso para el país
std::string Direccion::getPais() const
{
    return pais;
}

//método de acceso para el estado
std::string Direccion::getEstado() const
{
    return estado;
}

//método de acceso para la ciudad
std::string Direccion::getCiudad() const
{
    return ciudad;
}

//método de acceso para el código postal
std::string Direccion::getCodigoPostal() const
{
    return codigoPostal;
}

//método de acceso para la calle y el número
std::string Direccion::getCalleNum() const
{
    return calleNum;
}

//método de modificación para el país
void Direccion::setPais(std::string _pais)
{
    pais = _pais;
}

//método de modificación para el estado
void Direccion::setEstado(std::string _estado)
{
    estado = _estado;
}

//método de modificación para la ciudad
void Direccion::setCiudad(std::string _ciudad)
{
    ciudad = _ciudad;
}

//método de modificación para el código postal
void Direccion::setCodigoPostal(std::string _codigoPostal)
{
    codigoPostal = _codigoPostal;
}

//método de modificación para la calle y el número
void Direccion::setCalleNum(std::string _calleNum)
{
    calleNum = _calleNum;
}

//método para imprimir la dirección
void Direccion::printDireccion()
{
    std::cout << "Pais: " << pais << std::endl;
    std::cout << "Estado: " << estado << std::endl;
    std::cout << "Ciudad: " << ciudad << std::endl;
    std::cout << "Codigo postal: " << codigoPostal << std::endl;
    std::cout << "Calle y numero: " << calleNum << std::endl;
}

#endif