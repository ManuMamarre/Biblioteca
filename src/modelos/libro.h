#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string isbn;
    std::string titulo;
    std::string autor;
    std::string categoria;
public:
    Libro(const std::string& isbn, const std::string& titulo, const std::string& autor, const std::string& categoria)
        : isbn(isbn), titulo(titulo), autor(autor), categoria(categoria) {}

    std::string getIsbn() const { return isbn; }
    std::string getTitulo() const { return titulo; }
    std::string getAutor() const { return autor; }
    std::string getCategoria() const { return categoria; }
};

#endif