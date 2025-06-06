#include "CreadorPrestamoDigital.h"

Prestamo *CreadorPrestamoDigital::crearPrestamo()
{
    return new PrestamoDigital();
}
