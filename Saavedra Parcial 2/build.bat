g++ -std=c++17 -Wall -I./include -c ./src/Articulo.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Cliente.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Empleado.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Pedido.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp

g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Articulo.o Cliente.o Empleado.o Pedido.o main.o -o main.exe

main.exe

del *.o
