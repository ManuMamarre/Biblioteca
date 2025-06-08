// src/patrones/singleton/GestorSesiones.h
#ifndef GESTOR_SESIONES_H
#define GESTOR_SESIONES_H

#include <string>
#include <unordered_map>
#include <iostream>

class GestorSesiones
{
private:
    static GestorSesiones *instancia;
    std::unordered_map<std::string, bool> sesiones;

    // Constructor privado
    GestorSesiones();

public:
    static GestorSesiones *obtenerInstancia();

    void iniciarSesion(const std::string &usuario);
    void cerrarSesion(const std::string &usuario);
    bool verificarAutenticacion(const std::string &usuario);
};

#endif
