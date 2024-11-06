#include "Empleado.hpp"

  
Empleado::Empleado(const std::string& nombre, const std::string& ID)
    : nombre(nombre), ID(ID) {} 


std::string Empleado::getNombre() const {
    return nombre;
}

std::string Empleado::getID() const {
    return ID;
}

