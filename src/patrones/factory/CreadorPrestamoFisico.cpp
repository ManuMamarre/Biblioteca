#include "CreadorPrestamoFisico.h"

Prestamo *CreadorPrestamoFisico::crearPrestamo()
{
    return new PrestamoFisico();
}
