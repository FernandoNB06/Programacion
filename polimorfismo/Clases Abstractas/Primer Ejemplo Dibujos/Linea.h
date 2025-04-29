#pragma once
#include "EGBasico.h"
enum Orientacion
{
    ARRIBA, ABAJO, IZQUIERDA, DERECHA
};

class Linea :
    public EGBasico
{
private:
    int tam;
    Orientacion orientacion;

public:
    Linea(int x, int y);
    ~Linea();
    void dibujar();
    void borrar();
    void llenar();
};

