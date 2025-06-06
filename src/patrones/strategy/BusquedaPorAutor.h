#ifndef BUSQUEDA_POR_AUTOR_H
#define BUSQUEDA_POR_AUTOR_H

#include "EstrategiaBusqueda.h"

class BusquedaPorAutor : public EstrategiaBusqueda
{
public:
    std::vector<std::string> buscar(const std::vector<std::string> &libros, const std::string &criterio) override;
};

#endif
