#ifndef MULTA_H
#define MULTA_H

#include <string>
#include "Usuario.h"

class Multa {
private:
    std::string idMulta;
    Usuario usuario;
    double monto;
    std::string motivo;
public:
    Multa(const std::string& idMulta, const Usuario& usuario, double monto, const std::string& motivo)
        : idMulta(idMulta), usuario(usuario), monto(monto), motivo(motivo) {}

    std::string getIdMulta() const { return idMulta; }
    Usuario getUsuario() const { return usuario; }
    double getMonto() const { return monto; }
    std::string getMotivo() const { return motivo; }
};

#endif