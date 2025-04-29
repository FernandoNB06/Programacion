//Esta es una clase padre intermedia
#pragma once
#include "ElementoGrafico.h"
class EGBasico :
    public ElementoGrafico
{
protected:
    int x, y;
public:
    EGBasico(int x, int y);
    ~EGBasico();
};

