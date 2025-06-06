#ifndef EJEMPLAR_H
#define EJEMPLAR_H

#include <string>
#include "Libro.h"

class Ejemplar {
private:
    std::string idEjemplar;
    Libro libro;
    bool disponible;
public:
    Ejemplar(const std::string& idEjemplar, const Libro& libro)
        : idEjemplar(idEjemplar), libro(libro), disponible(true) {}

    std::string getIdEjemplar() const { return idEjemplar; }
    Libro getLibro() const { return libro; }
    bool estaDisponible() const { return disponible; }
    void setDisponible(bool disp) { disponible = disp; }
};

#endif