#include "../src/patrones/State/PrestamoEjemplar.h"
#include "../src/patrones/State/EstadoActivo.h"
#include "../src/patrones/State/EstadoDevuelto.h"
#include "../src/patrones/State/EstadoRetrasado.h"
#include <iostream>

int main() {
    PrestamoEjemplar prestamo(new EstadoActivo());
    std::cout << "Estado inicial: " << prestamo.obtenerEstado() << std::endl; // Activo

    prestamo.siguienteEstado();
    std::cout << "Estado tras siguienteEstado(): " << prestamo.obtenerEstado() << std::endl; // Devuelto

    prestamo.siguienteEstado();
    std::cout << "Estado tras siguienteEstado() de Devuelto: " << prestamo.obtenerEstado() << std::endl; // Devuelto

    // Prueba con retrasado
    PrestamoEjemplar prestamoRetrasado(new EstadoRetrasado());
    std::cout << "Estado inicial: " << prestamoRetrasado.obtenerEstado() << std::endl; // Retrasado
    prestamoRetrasado.siguienteEstado();
    std::cout << "Estado tras pagar multa: " << prestamoRetrasado.obtenerEstado() << std::endl; // Devuelto

    return 0;
}