#ifndef ESTADO_PRESTAMO_H
#define ESTADO_PRESTAMO_H

#include <string>

class PrestamoEjemplar; // Forward declaration

class EstadoPrestamo {
public:
    virtual void siguienteEstado(PrestamoEjemplar* prestamo) = 0;
    virtual std::string obtenerNombre() const = 0;
    virtual ~EstadoPrestamo() {}
};

#endif