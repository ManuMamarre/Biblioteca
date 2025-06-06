#ifndef CALCULO_MULTA_H
#define CALCULO_MULTA_H

class CalculoMulta {
public:
    virtual double calcular(int diasRetraso) const = 0;
    virtual ~CalculoMulta() {}
};

#endif