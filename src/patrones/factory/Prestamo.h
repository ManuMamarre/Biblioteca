#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <string>

class Prestamo
{
public:
    virtual void procesar() = 0;
    virtual std::string obtenerTipo() = 0;
    virtual ~Prestamo() {}
};

#endif
