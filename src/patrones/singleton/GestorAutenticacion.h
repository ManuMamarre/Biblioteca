// src/patrones/singleton/GestorAutenticacion.h
#ifndef GESTOR_AUTENTICACION_H
#define GESTOR_AUTENTICACION_H

#include <string>
#include <unordered_map>
#include <iostream>

class GestorAutenticacion
{
private:
    static GestorAutenticacion *instancia;
    std::unordered_map<std::string, bool> sesiones;

    // Constructor privado
    GestorAutenticacion();

public:
    static GestorAutenticacion *obtenerInstancia();

    void iniciarSesion(const std::string &usuario);
    void cerrarSesion(const std::string &usuario);
    bool verificarAutenticacion(const std::string &usuario);
};

#endif
