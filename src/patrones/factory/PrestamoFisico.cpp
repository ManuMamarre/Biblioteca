// src/patrones/factory/PrestamoFisico.cpp
#include "PrestamoFisico.h"
#include <iostream>

void PrestamoFisico::procesar()
{
    std::cout << "Procesando prestamo fisico: entregando libro en mostrador" << std::endl;
}

std::string PrestamoFisico::obtenerTipo()
{
    return "Fisico";
}
