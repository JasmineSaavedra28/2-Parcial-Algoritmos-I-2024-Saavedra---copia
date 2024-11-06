#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include "Articulo.hpp"
#include "Cliente.hpp"
#include "Empleado.hpp"
#include <iostream>

class Pedido {
private:
    int nroPedido;
    Cliente* cliente;
    Empleado* empleado;
    Articulo* Articulos[10]; 
    int cantidadArticulos;
    
   static int contadorPedidos; 

public:
    Pedido(Cliente* cliente, Empleado* empleado);
           
    void agregarArticulos(Articulo* Articulo);
    void verPedido() const;
};

#endif
