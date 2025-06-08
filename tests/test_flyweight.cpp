#include "../src/patrones/Flyweight/FabricaLibros.h"
#include <iostream>

int main() {
    FabricaLibros fabrica;
    auto libro1 = fabrica.obtenerLibro("El principito", "Antoine", "Fantasia");
    auto libro2 = fabrica.obtenerLibro("El principito", "Antoine", "Fantasia");
    auto libro3 = fabrica.obtenerLibro("Don Quijote", "Cervantes", "Clasico");

    std::cout << "¿libro1 y libro2 son la misma instancia? "
              << (libro1 == libro2 ? "Si" : "No") << std::endl;
    std::cout << "¿libro1 y libro3 son la misma instancia? "
              << (libro1 == libro3 ? "Si" : "No") << std::endl;

    return 0;
}