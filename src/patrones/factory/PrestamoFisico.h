#ifndef PRESTAMO_FISICO_H
#define PRESTAMO_FISICO_H

#include "Prestamo.h"

class PrestamoFisico : public Prestamo
{
public:
    void procesar() override;
    std::string obtenerTipo() override;
};

#endif
