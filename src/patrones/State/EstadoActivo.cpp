#include "EstadoActivo.h"
#include "EstadoDevuelto.h"
#include "EstadoRetrasado.h"
#include "PrestamoEjemplar.h"

void EstadoActivo::siguienteEstado(PrestamoEjemplar* prestamo) {
    // Por ejemplo, pasa a Devuelto o Retrasado según lógica
    // Aquí solo como ejemplo, pasa a Devuelto
    prestamo->setEstado(new EstadoDevuelto());
}