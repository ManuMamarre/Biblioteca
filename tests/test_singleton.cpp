// tests/test_singleton.cpp
#include "../src/patrones/singleton/GestorAutenticacion.h"

int main()
{
    GestorAutenticacion *gestor = GestorAutenticacion::obtenerInstancia();

    gestor->iniciarSesion("camilo");

    if (gestor->verificarAutenticacion("camilo"))
    {
        std::cout << "Camilo esta autenticado" << std::endl;
    }
    else
    {
        std::cout << "Error en autenticacion" << std::endl;
    }

    gestor->cerrarSesion("camilo");

    if (!gestor->verificarAutenticacion("camilo"))
    {
        std::cout << "Camilo cerro sesion correctamente" << std::endl;
    }
    else
    {
        std::cout << "Error: sesion sigue activa" << std::endl;
    }

    return 0;
}
