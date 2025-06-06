#ifndef CATALOGO_H
#define CATALOGO_H

#include "EstrategiaBusqueda.h"
#include <vector>
#include <string>

class Catalogo
{
private:
    std::vector<std::string> libros;
    EstrategiaBusqueda *estrategia;

public:
    Catalogo();
    void agregarLibro(const std::string &libro);
    void setEstrategia(EstrategiaBusqueda *nuevaEstrategia);
    std::vector<std::string> buscar(const std::string &criterio);
};

#endif
