// Libro.h
#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

class Libro
{
private:
    std::string titulo;
    std::string autor;
    std::string categoria;

public:
    Libro(const std::string &t, const std::string &a, const std::string &c)
        : titulo(t), autor(a), categoria(c) {}

    std::string getTitulo() const { return titulo; }
    std::string getAutor() const { return autor; }
    std::string getCategoria() const { return categoria; }

    void mostrarInfo() const
    {
        std::cout << titulo << " - " << autor << " - " << categoria << std::endl;
    }
};

#endif
