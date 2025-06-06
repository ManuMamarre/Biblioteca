#ifndef LIBRO_FLYWEIGHT_H
#define LIBRO_FLYWEIGHT_H

#include <string>

class LibroFlyweight {
private:
    std::string titulo, autor, categoria;
public:
    LibroFlyweight(const std::string& t, const std::string& a, const std::string& c)
        : titulo(t), autor(a), categoria(c) {}
    std::string getTitulo() const { return titulo; }
    std::string getAutor() const { return autor; }
    std::string getCategoria() const { return categoria; }
};

#endif