// tests/test_singleton.cpp
#include "../src/patrones/singleton/GestorSesiones.h"
#include "../src/modelos/usuario.h"
#include <iostream>

std::string nombreRol(RolUsuario rol) {
    switch (rol) {
        case RolUsuario::Usuario: return "Usuario";
        case RolUsuario::Bibliotecario: return "Bibliotecario";
        case RolUsuario::Administrador: return "Administrador";
        default: return "Desconocido";
    }
}

int main()
{
    GestorSesiones *gestor = GestorSesiones::obtenerInstancia();

    gestor->iniciarSesion("Manuela");

    if (gestor->verificarAutenticacion("Manuela"))
    {
        std::cout << "Manuela esta autenticado" << std::endl;
    }
    else
    {
        std::cout << "Error en autenticacion" << std::endl;
    }

    gestor->cerrarSesion("Manuela");

    if (!gestor->verificarAutenticacion("Manuela"))
    {
        std::cout << "Manuela cerro sesion correctamente" << std::endl;
    }
    else
    {
        std::cout << "Error: sesion sigue activa" << std::endl;
    }

    // Prueba de roles de usuario
    Usuario usuario1("1", "Manuela", "manuela@mail.com", RolUsuario::Usuario);
    Usuario usuario2("2", "Camilo", "camilo@mail.com", RolUsuario::Bibliotecario);
    Usuario usuario3("3", "Ana", "ana@mail.com", RolUsuario::Administrador);

    std::cout << "Usuario: " << usuario1.getNombre() << " - Rol: " << nombreRol(usuario1.getRol()) << std::endl;
    std::cout << "Usuario: " << usuario2.getNombre() << " - Rol: " << nombreRol(usuario2.getRol()) << std::endl;
    std::cout << "Usuario: " << usuario3.getNombre() << " - Rol: " << nombreRol(usuario3.getRol()) << std::endl;

    return 0;
}
