#ifndef CREADOR_PRESTAMO_DIGITAL_H
#define CREADOR_PRESTAMO_DIGITAL_H

#include "CreadorPrestamo.h"
#include "PrestamoDigital.h"

class CreadorPrestamoDigital : public CreadorPrestamo
{
public:
    Prestamo *crearPrestamo() override;
};

#endif
