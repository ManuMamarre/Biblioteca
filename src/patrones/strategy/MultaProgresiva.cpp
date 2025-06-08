#include "MultaProgresiva.h"

double MultaProgresiva::calcular(int diasRetraso) const {
    if (diasRetraso <= 5) return diasRetraso * 1.0;
    return 5.0 + (diasRetraso - 5) * 2.0;
}