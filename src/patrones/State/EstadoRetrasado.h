#ifndef ESTADO_RETRASADO_H
#define ESTADO_RETRASADO_H

#include "EstadoPrestamo.h"

class EstadoRetrasado : public EstadoPrestamo {
public:
    void siguienteEstado(PrestamoEjemplar* prestamo) override;
    std::string obtenerNombre() const override { return "Retrasado"; }
};

#endif