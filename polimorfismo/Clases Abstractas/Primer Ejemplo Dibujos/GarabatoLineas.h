#pragma once
#include "ElementoGrafico.h"
#include "Linea.h"

class GarabatoLineas : public ElementoGrafico {
private:
    Linea** lineas;
    int indice;
    int maxLineas;

public:
    GarabatoLineas(int maxLineas);
    ~GarabatoLineas();
    void dibujar();
    void borrar();
    void llenar();
};
