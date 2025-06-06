#ifndef MULTA_PROGRESIVA_H
#define MULTA_PROGRESIVA_H

#include "CalculoMulta.h"

class MultaProgresiva : public CalculoMulta {
public:
    double calcular(int diasRetraso) const override {
        if (diasRetraso <= 5) return diasRetraso * 1.0;
        return 5.0 + (diasRetraso - 5) * 2.0;
    }
};

#endif