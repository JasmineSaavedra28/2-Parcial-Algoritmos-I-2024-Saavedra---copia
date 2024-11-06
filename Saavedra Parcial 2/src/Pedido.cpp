#include <iostream>
#include "Pedido.hpp"


int Pedido::contadorPedidos = 101;

Pedido::Pedido (Cliente* cliente, Empleado* empleado)
    : nroPedido(contadorPedidos++), cliente(cliente), cantidadArticulos(0), empleado(empleado) {}


void Pedido::agregarArticulos(Articulo* Articulo) {
    if (cantidadArticulos < 10) {  
        Articulos[cantidadArticulos++] = Articulo; 
    }
}


void Pedido::verPedido() const {

    std::cout << "Pedido nro.:" << nroPedido << "   - Para: " << cliente->getNombre() << "\n";
    // Incluyo una barra antes de "Articulos" por comodidad visual
    std::cout << "-------------------------------------------------------------------\n";
    std::cout << "Articulos:\n";
    for (int i = 0; i < cantidadArticulos; ++i) {
        std::cout << "- " << Articulos[i]->getNombre()
                  << " (Codigo: " << Articulos[i]->getCodigo()
                  << ", Precio: $" << Articulos[i]->getPrecio() << ")\n";
    }
    std::cout <<"-------------------------------------------------------------------\n"<<endl; 
    std::cout << "||Lo atendio el siguiente empleado: " << empleado->getNombre() << " - ID: " <<empleado->getID() << "|| \n";
    std::cout <<"-------------------------------------------------------------------\n"<<endl; 
}
