#ifndef CREADOR_PRESTAMO_FISICO_H
#define CREADOR_PRESTAMO_FISICO_H

#include "CreadorPrestamo.h"
#include "PrestamoFisico.h"

class CreadorPrestamoFisico : public CreadorPrestamo
{
public:
    Prestamo *crearPrestamo() override; // Solo declaración
};

#endif
