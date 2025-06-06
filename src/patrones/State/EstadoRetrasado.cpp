#include "EstadoRetrasado.h"
#include "EstadoDevuelto.h"
#include "PrestamoEjemplar.h"

void EstadoRetrasado::siguienteEstado(PrestamoEjemplar* prestamo) {
    // Si paga multa, pasa a Devuelto
    prestamo->setEstado(new EstadoDevuelto());
}