#ifndef ESTADO_DEVUELTO_H
#define ESTADO_DEVUELTO_H

#include "EstadoPrestamo.h"

class EstadoDevuelto : public EstadoPrestamo {
public:
    void siguienteEstado(PrestamoEjemplar* prestamo) override;
    std::string obtenerNombre() const override { return "Devuelto"; }
};

#endif