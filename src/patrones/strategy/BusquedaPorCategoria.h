#ifndef BUSQUEDA_POR_CATEGORIA_H
#define BUSQUEDA_POR_CATEGORIA_H

#include "EstrategiaBusqueda.h"

class BusquedaPorCategoria : public EstrategiaBusqueda
{
public:
    std::vector<std::string> buscar(const std::vector<std::string> &libros, const std::string &criterio) override;
};

#endif
