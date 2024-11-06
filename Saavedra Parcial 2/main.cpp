#include <iostream>
#include "./include/Articulo.hpp"
#include "./include/Cliente.hpp"
#include "./include/Pedido.hpp"
#include "./include/Empleado.hpp"

int main() {
    Empleado* empleado1 = new Empleado("Jose Lopez", "001");
    Empleado* empleado2 = new Empleado("Mateo Solis", "002");
    Empleado* empleado3 = new Empleado("Mariana Pinto", "003");

    Cliente* cliente1 = new Cliente("Monica Diaz", "223-5399668", "diaz45@email.com");
    Cliente* cliente2 = new Cliente("Rogelio Perez", "223-7893456", "rogelioperez67@email.com");
    Cliente* cliente3 = new Cliente("Susana Gomez", "223-2347895", "gomezabogada@email.com");
    Cliente* cliente4 = new Cliente("Fabricia Rita", "223-9870347", "ritamardelplata@mail.com");

    Articulo* Articulo1 = new Articulo("Garrafa 5Kg", "ID001", 20000);
    Articulo* Articulo2 = new Articulo("Garrafa 10Kg", "ID002", 30000); 
    Articulo* Articulo3 = new Articulo("Garrafa 15Kg", "ID003", 45500); 
    Articulo* Articulo4 = new Articulo("Anafe Electrico 2250w", "ID004", 139000);
    Articulo* Articulo5 = new Articulo("Perno y Mariposa P/Garrafa 10kg", "ID005", 10000);
    Articulo* Articulo6 = new Articulo("Gas Butano 230grs.", "ID006", 13700);

    Pedido* pedido1 = new Pedido(cliente1, empleado1); 
    Pedido* pedido2 = new Pedido(cliente2, empleado2); 
    Pedido* pedido3 = new Pedido(cliente3, empleado1); 
    Pedido* pedido4 = new Pedido(cliente4, empleado3);
    
    pedido1->agregarArticulos(Articulo1); 
    pedido1->agregarArticulos(Articulo2); 

    pedido2->agregarArticulos(Articulo4);

    pedido3->agregarArticulos(Articulo3);
    
    pedido4->agregarArticulos(Articulo6);
    pedido4->agregarArticulos(Articulo5);

    std::cout << "\n||       Super Gas: Garrafas Recargables & Accesorios            ||\n";
    std::cout <<"-------------------------------------------------------------------\n"<<endl; 
    pedido1->verPedido();
    pedido2->verPedido();
    pedido3->verPedido();
    pedido4->verPedido();

    delete Articulo1;
    delete Articulo2;
    delete Articulo3;
    delete Articulo4;
    delete Articulo5;
    delete Articulo6;
    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete cliente4;
    delete empleado1;
    delete empleado2;
    delete empleado3;
    delete pedido1;
    delete pedido2;
    delete pedido3;
    delete pedido4;

    return 0;
}
