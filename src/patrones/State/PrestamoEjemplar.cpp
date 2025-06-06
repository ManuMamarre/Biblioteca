#include "PrestamoEjemplar.h"

PrestamoEjemplar::PrestamoEjemplar(EstadoPrestamo* estadoInicial)
    : estado(estadoInicial) {}

void PrestamoEjemplar::siguienteEstado() {
    estado->siguienteEstado(this);
}

std::string PrestamoEjemplar::obtenerEstado() const {
    return estado->obtenerNombre();
}

void PrestamoEjemplar::setEstado(EstadoPrestamo* nuevoEstado) {
    estado.reset(nuevoEstado);
}