#ifndef PRESTAMO_EJEMPLAR_H
#define PRESTAMO_EJEMPLAR_H

#include "EstadoPrestamo.h"
#include <memory>

class PrestamoEjemplar {
private:
    std::unique_ptr<EstadoPrestamo> estado;
public:
    PrestamoEjemplar(EstadoPrestamo* estadoInicial);
    void siguienteEstado();
    std::string obtenerEstado() const;
    void setEstado(EstadoPrestamo* nuevoEstado);
};

#endif