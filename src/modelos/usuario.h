#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
private:
    std::string id;
    std::string nombre;
    std::string correo;
public:
    Usuario(const std::string& id, const std::string& nombre, const std::string& correo)
        : id(id), nombre(nombre), correo(correo) {}

    std::string getId() const { return id; }
    std::string getNombre() const { return nombre; }
    std::string getCorreo() const { return correo; }
};

#endif