#include "FabricaLibros.h"

std::shared_ptr<LibroFlyweight> FabricaLibros::obtenerLibro(const std::string& t, const std::string& a, const std::string& c) {
    std::string clave = t + "-" + a + "-" + c;
    auto it = libros.find(clave);
    if (it != libros.end()) return it->second;
    auto libro = std::make_shared<LibroFlyweight>(t, a, c);
    libros[clave] = libro;
    return libro;
}