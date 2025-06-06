#ifndef CREADOR_PRESTAMO_H
#define CREADOR_PRESTAMO_H

#include "Prestamo.h"

class CreadorPrestamo
{
public:
    virtual Prestamo *crearPrestamo() = 0;
    virtual ~CreadorPrestamo() {}
};

#endif
