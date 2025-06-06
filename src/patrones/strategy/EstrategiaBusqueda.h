#ifndef ESTRATEGIA_BUSQUEDA_H
#define ESTRATEGIA_BUSQUEDA_H

#include <string>
#include <vector>

class EstrategiaBusqueda
{
public:
    virtual std::vector<std::string> buscar(const std::vector<std::string> &libros, const std::string &criterio) = 0;
    virtual ~EstrategiaBusqueda() {}
};

#endif
