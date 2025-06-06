// src/patrones/factory/GestorDePrestamos.h
#ifndef GESTOR_DE_PRESTAMOS_H
#define GESTOR_DE_PRESTAMOS_H

#include "CreadorPrestamo.h"
#include <iostream>

class GestorDePrestamos
{
private:
    CreadorPrestamo *creador;

public:
    GestorDePrestamos(CreadorPrestamo *c) : creador(c) {}

    void procesarPrestamo()
    {
        Prestamo *prestamo = creador->crearPrestamo();
        prestamo->procesar();
        std::cout << "Tipo de prestamo: " << prestamo->obtenerTipo() << std::endl;
        delete prestamo;
    }
};

#endif
