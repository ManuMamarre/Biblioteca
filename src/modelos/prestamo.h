#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <string>
#include "Usuario.h"
#include "Ejemplar.h"

class Prestamo {
private:
    std::string idPrestamo;
    Usuario usuario;
    Ejemplar ejemplar;
    std::string fechaInicio;
    std::string fechaFin;
public:
    Prestamo(const std::string& idPrestamo, const Usuario& usuario, const Ejemplar& ejemplar,
             const std::string& fechaInicio, const std::string& fechaFin)
        : idPrestamo(idPrestamo), usuario(usuario), ejemplar(ejemplar),
          fechaInicio(fechaInicio), fechaFin(fechaFin) {}

    std::string getIdPrestamo() const { return idPrestamo; }
    Usuario getUsuario() const { return usuario; }
    Ejemplar getEjemplar() const { return ejemplar; }
    std::string getFechaInicio() const { return fechaInicio; }
    std::string getFechaFin() const { return fechaFin; }
};

#endif