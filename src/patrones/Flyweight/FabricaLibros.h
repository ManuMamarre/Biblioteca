#ifndef FABRICA_LIBROS_H
#define FABRICA_LIBROS_H

#include "LibroFlyweight.h"
#include <unordered_map>
#include <memory>

class FabricaLibros {
private:
    std::unordered_map<std::string, std::shared_ptr<LibroFlyweight>> libros;
public:
    std::shared_ptr<LibroFlyweight> obtenerLibro(const std::string& t, const std::string& a, const std::string& c);
};

#endif