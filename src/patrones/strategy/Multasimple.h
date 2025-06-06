#ifndef MULTA_SIMPLE_H
#define MULTA_SIMPLE_H

#include "CalculoMulta.h"

class MultaSimple : public CalculoMulta {
public:
    double calcular(int diasRetraso) const override {
        return diasRetraso * 1.0; // 1 unidad por día
    }
};

#endif