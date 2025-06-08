// src/patrones/singleton/GestorSesiones.cpp
#include "GestorSesiones.h"

// Inicialización del puntero estático
GestorSesiones *GestorSesiones::instancia = nullptr;

GestorSesiones::GestorSesiones() {}

GestorSesiones *GestorSesiones::obtenerInstancia()
{
    if (instancia == nullptr)
    {
        instancia = new GestorSesiones();
    }
    return instancia;
}

void GestorSesiones::iniciarSesion(const std::string &usuario)
{
    sesiones[usuario] = true;
    std::cout << "Sesion iniciada para: " << usuario << std::endl;
}

void GestorSesiones::cerrarSesion(const std::string &usuario)
{
    sesiones[usuario] = false;
    std::cout << "Sesion cerrada para: " << usuario << std::endl;
}

bool GestorSesiones::verificarAutenticacion(const std::string &usuario)
{
    return sesiones[usuario];
}
