#ifndef USUARIO_H
#define USUARIO_H

#include <string>

enum class RolUsuario {
    Usuario,
    Bibliotecario,
    Administrador
};

class Usuario {
private:
    std::string id;
    std::string nombre;
    std::string correo;
    RolUsuario rol; // Nuevo atributo
public:
    Usuario(const std::string& id, const std::string& nombre, const std::string& correo, RolUsuario rol = RolUsuario::Usuario)
        : id(id), nombre(nombre), correo(correo), rol(rol) {}

    std::string getId() const { return id; }
    std::string getNombre() const { return nombre; }
    std::string getCorreo() const { return correo; }
    RolUsuario getRol() const { return rol; }
    void setRol(RolUsuario nuevoRol) { rol = nuevoRol; }
};

#endif