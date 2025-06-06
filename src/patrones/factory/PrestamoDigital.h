#ifndef PRESTAMO_DIGITAL_H
#define PRESTAMO_DIGITAL_H

#include "Prestamo.h" // <<<< ESTA LÍNEA ES CLAVE
#include <iostream>

class PrestamoDigital : public Prestamo
{
public:
    void procesar() override;
    std::string obtenerTipo() override;
};

#endif
