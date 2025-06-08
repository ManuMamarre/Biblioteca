#include "../src/patrones/strategy/Catalogo.h"
#include "../src/patrones/strategy/BusquedaPorTitulo.h"
#include "../src/patrones/strategy/BusquedaPorAutor.h"
#include "../src/patrones/strategy/BusquedaPorCategoria.h"
#include <iostream>

void mostrarResultados(const std::vector<std::string> &resultados)
{
    for (const auto &libro : resultados)
    {
        std::cout << "📚 " << libro << std::endl;
    }
}

int main()
{
    Catalogo catalogo;
    catalogo.agregarLibro("El principito - Antoine - Fantasia");
    catalogo.agregarLibro("El Hobbit - Tolkien - Fantasia");
    catalogo.agregarLibro("Cien anios de soledad - Garcia Marquez - Realismo magico");
    catalogo.agregarLibro("Don Quijote - Cervantes - Clasico");

    std::cout << "\n Busqueda por titulo: 'El'\n";
    catalogo.setEstrategia(new BusquedaPorTitulo());
    mostrarResultados(catalogo.buscar("El"));

    std::cout << "\n Busqueda por autor: 'Garcia'\n";
    catalogo.setEstrategia(new BusquedaPorAutor());
    mostrarResultados(catalogo.buscar("Garcia"));

    std::cout << "\n Busqueda por categoria: 'Fantasia'\n";
    catalogo.setEstrategia(new BusquedaPorCategoria());
    mostrarResultados(catalogo.buscar("Fantasia"));

    return 0;
}
