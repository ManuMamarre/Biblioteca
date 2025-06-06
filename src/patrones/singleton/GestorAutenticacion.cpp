// src/patrones/singleton/GestorAutenticacion.cpp
#include "GestorAutenticacion.h"

// Inicialización del puntero estático
GestorAutenticacion *GestorAutenticacion::instancia = nullptr;

GestorAutenticacion::GestorAutenticacion() {}

GestorAutenticacion *GestorAutenticacion::obtenerInstancia()
{
    if (instancia == nullptr)
    {
        instancia = new GestorAutenticacion();
    }
    return instancia;
}

void GestorAutenticacion::iniciarSesion(const std::string &usuario)
{
    sesiones[usuario] = true;
    std::cout << "Sesion iniciada para: " << usuario << std::endl;
}

void GestorAutenticacion::cerrarSesion(const std::string &usuario)
{
    sesiones[usuario] = false;
    std::cout << "Sesion cerrada para: " << usuario << std::endl;
}

bool GestorAutenticacion::verificarAutenticacion(const std::string &usuario)
{
    return sesiones[usuario];
}
