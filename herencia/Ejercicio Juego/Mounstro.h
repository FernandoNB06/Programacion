#pragma once
#include "Personaje.h"
#include"Heroe.h"

class Heroe;

class Mounstro :
    public Personaje
{
private:
    string tipo;
public:
    Mounstro(string tipo, int nivel);
    ~Mounstro();
    void detalleMounstro();
    void atacar(Heroe* heroe);
    int getAtaque();
};

