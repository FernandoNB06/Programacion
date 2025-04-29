#pragma once
#include "EGBasico.h"
class Punto :
    public EGBasico
{
public:
    Punto(int x, int y);
    ~Punto();
    void dibujar();
    void llenar();
    void borrar();
};

