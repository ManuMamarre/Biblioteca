#include "BusquedaPorCategoria.h"

std::vector<std::string> BusquedaPorCategoria::buscar(const std::vector<std::string> &libros, const std::string &criterio)
{
    std::vector<std::string> resultado;

    for (const auto &libro : libros)
    {
        if (libro.find(criterio) != std::string::npos)
        {
            resultado.push_back(libro);
        }
    }

    return resultado;
}
