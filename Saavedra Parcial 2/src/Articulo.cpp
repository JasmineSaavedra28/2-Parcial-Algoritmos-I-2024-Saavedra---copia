#include "Articulo.hpp"

Articulo::Articulo(const std::string& nombre, const std::string& codigo, double precio)
    : nombre(nombre), codigo(codigo), precio(precio) {}

std::string Articulo::getNombre() const {
    return nombre;
}

std::string Articulo::getCodigo() const {
    return codigo;
}

double Articulo::getPrecio() const {
    return precio;
}
