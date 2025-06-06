#include "Catalogo.h"

Catalogo::Catalogo() : estrategia(nullptr) {}

void Catalogo::agregarLibro(const std::string &libro)
{
    libros.push_back(libro);
}

void Catalogo::setEstrategia(EstrategiaBusqueda *nuevaEstrategia)
{
    estrategia = nuevaEstrategia;
}

std::vector<std::string> Catalogo::buscar(const std::string &criterio)
{
    if (estrategia)
        return estrategia->buscar(libros, criterio);
    else
        return {}; // retorna vacío si no hay estrategia
}
