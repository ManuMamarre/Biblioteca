#ifndef BUSQUEDA_POR_TITULO_H
#define BUSQUEDA_POR_TITULO_H

#include "EstrategiaBusqueda.h"

class BusquedaPorTitulo : public EstrategiaBusqueda
{
public:
    std::vector<std::string> buscar(const std::vector<std::string> &libros, const std::string &criterio) override;
};

#endif
