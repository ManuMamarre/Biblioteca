#include "../src/patrones/factory/GestorDePrestamos.h"
#include "../src/patrones/factory/CreadorPrestamoFisico.h"
#include "../src/patrones/factory/CreadorPrestamoDigital.h"

int main()
{
    CreadorPrestamo *creadorFisico = new CreadorPrestamoFisico();
    GestorDePrestamos gestorFisico(creadorFisico);
    gestorFisico.procesarPrestamo();
    delete creadorFisico;

    CreadorPrestamo *creadorDigital = new CreadorPrestamoDigital();
    GestorDePrestamos gestorDigital(creadorDigital);
    gestorDigital.procesarPrestamo();
    delete creadorDigital;

    return 0;
}
