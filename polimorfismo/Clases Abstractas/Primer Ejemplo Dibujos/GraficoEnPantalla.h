#pragma once
#include "ElementoGrafico.h"

class GraficoEnPantalla {
private:
    ElementoGrafico** elementos;
    int cantidad;
    int capacidad;

public:
    GraficoEnPantalla(int capacidad);
    ~GraficoEnPantalla();
    void agregarElemento(ElementoGrafico* elem);
    void dibujarTodo();
};
