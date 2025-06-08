#include "patrones/singleton/GestorSesiones.h"
#include "patrones/factory/GestorDePrestamos.h"
#include "patrones/factory/CreadorPrestamoFisico.h"
#include "patrones/factory/CreadorPrestamoDigital.h"
#include "patrones/strategy/Catalogo.h"
#include "patrones/strategy/BusquedaPorTitulo.h"
#include "patrones/strategy/BusquedaPorAutor.h"
#include "patrones/strategy/BusquedaPorCategoria.h"
#include "patrones/State/PrestamoEjemplar.h"
#include "patrones/State/EstadoActivo.h"
#include "patrones/State/EstadoRetrasado.h"
#include "patrones/strategy/Multasimple.h"
#include "patrones/strategy/MultaProgresiva.h"
#include "patrones/Flyweight/FabricaLibros.h"
#include "modelos/usuario.h"

#include <iostream>

void mostrarResultados(const std::vector<std::string> &resultados)
{
    for (const auto &libro : resultados)
    {
        std::cout << "- " << libro << std::endl;
    }
}

std::string nombreRol(RolUsuario rol) {
    switch (rol) {
        case RolUsuario::Usuario: return "Usuario";
        case RolUsuario::Bibliotecario: return "Bibliotecario";
        case RolUsuario::Administrador: return "Administrador";
        default: return "Desconocido";
    }
}

int main()
{
    std::cout << "\n========== INICIO DEL SISTEMA ==========\n";

    // Ejemplo de creación de usuarios con roles
    Usuario usuario1("1", "Manuela", "manuela@mail.com", RolUsuario::Usuario);
    Usuario usuario2("2", "Camilo", "camilo@mail.com", RolUsuario::Bibliotecario);
    Usuario usuario3("3", "Ana", "ana@mail.com", RolUsuario::Administrador);

    std::cout << "Usuario: " << usuario1.getNombre() << " - Rol: " << nombreRol(usuario1.getRol()) << std::endl;
    std::cout << "Usuario: " << usuario2.getNombre() << " - Rol: " << nombreRol(usuario2.getRol()) << std::endl;
    std::cout << "Usuario: " << usuario3.getNombre() << " - Rol: " << nombreRol(usuario3.getRol()) << std::endl;

    // Singleton: Autenticacion
    auto *autenticador = GestorSesiones::obtenerInstancia();
    autenticador->iniciarSesion("Manuela");
    autenticador->cerrarSesion("Manuela");

    auto *gestorSesiones = GestorSesiones::obtenerInstancia();
    gestorSesiones->iniciarSesion("Manuela");
    gestorSesiones->cerrarSesion("Manuela");

    // Factory: Prestamos
    CreadorPrestamo *creadorFisico = new CreadorPrestamoFisico();
    GestorDePrestamos gestorFisico(creadorFisico);
    gestorFisico.procesarPrestamo();
    delete creadorFisico;

    CreadorPrestamo *creadorDigital = new CreadorPrestamoDigital();
    GestorDePrestamos gestorDigital(creadorDigital);
    gestorDigital.procesarPrestamo();
    delete creadorDigital;

    // State: Prestamo con mutiples estados
    std::cout << "\nEstado de prestamo:\n";
    PrestamoEjemplar prestamo(new EstadoActivo());
    std::cout << "Estado inicial: " << prestamo.obtenerEstado() << std::endl;
    prestamo.siguienteEstado();
    std::cout << "Estado tras siguienteEstado(): " << prestamo.obtenerEstado() << std::endl;

    PrestamoEjemplar prestamoRetrasado(new EstadoRetrasado());
    std::cout << "Estado inicial (retrasado): " << prestamoRetrasado.obtenerEstado() << std::endl;
    prestamoRetrasado.siguienteEstado();
    std::cout << "Estado tras pagar multa: " << prestamoRetrasado.obtenerEstado() << std::endl;

    // Strategy: Catalogo de libros
    Catalogo catalogo;
    catalogo.agregarLibro("Viaje al centro de la Tierra - Julio Verne - Aventura");
    catalogo.agregarLibro("El codigo Da Vinci - Dan Brown - Misterio");
    catalogo.agregarLibro("Orgullo y prejuicio - Jane Austen - Romance");
    catalogo.agregarLibro("Fundacion - Isaac Asimov - Ciencia Ficcion");

    std::cout << "\nBusqueda por titulo: 'Fundacion'\n";
    catalogo.setEstrategia(new BusquedaPorTitulo());
    mostrarResultados(catalogo.buscar("Fundacion"));

    std::cout << "\nBusqueda por autor: 'Dan'\n";
    catalogo.setEstrategia(new BusquedaPorAutor());
    mostrarResultados(catalogo.buscar("Dan"));

    std::cout << "\nBusqueda por categoria: 'Aventura'\n";
    catalogo.setEstrategia(new BusquedaPorCategoria());
    mostrarResultados(catalogo.buscar("Aventura"));

    // Strategy: Multas
    std::cout << "\nCalculo de multas:\n";
    MultaSimple simple;
    MultaProgresiva progresiva;
    std::cout << "Multa simple (4 dias): " << simple.calcular(4) << std::endl;
    std::cout << "Multa progresiva (8 dias): " << progresiva.calcular(8) << std::endl;

    // Flyweight: Libros compartidos
    std::cout << "\nFlyweight (libros compartidos):\n";
    FabricaLibros fabrica;
    auto libro1 = fabrica.obtenerLibro("Viaje al centro de la Tierra", "Julio Verne", "Aventura");
    auto libro2 = fabrica.obtenerLibro("Viaje al centro de la Tierra", "Julio Verne", "Aventura");
    std::cout << "libro1 y libro2 son la misma instancia? "
              << (libro1 == libro2 ? "Si" : "No") << std::endl;

    std::cout << "Prueba finalizada" << std::endl;
    std::cout << "\n========== FIN DEL SISTEMA ==========\n";
    return 0;
}
