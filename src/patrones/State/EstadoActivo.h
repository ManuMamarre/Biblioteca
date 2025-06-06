#ifndef ESTADO_ACTIVO_H
#define ESTADO_ACTIVO_H

#include "EstadoPrestamo.h"

class EstadoActivo : public EstadoPrestamo {
public:
    void siguienteEstado(PrestamoEjemplar* prestamo) override;
    std::string obtenerNombre() const override { return "Activo"; }
};

#endif