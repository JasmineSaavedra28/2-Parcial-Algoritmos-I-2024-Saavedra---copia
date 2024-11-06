#ifndef ARTICULO_HPP
#define ARTICULO_HPP

#include <string>

using namespace std;

class Articulo {
private:
    string nombre;
    string codigo;
    double precio;

public:
    Articulo(const string& nombre, const string& codigo, double precio);
    
    string getNombre() const;
    string getCodigo() const;
    double getPrecio() const;
};

#endif // ARTICULO_HPP

