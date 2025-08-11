#pragma once
#include"iostream"
#include "Personaje.h"
#include"Mounstro.h"
using namespace std;
class Mounstro;

class Heroe :
    public Personaje
{
private:
    string nombre;
    int curacion=50;
    int indiceCuracion;
public:
    Heroe(string nombre);
    ~Heroe();
    void atacar(Mounstro * mountro);
    void subirNivel();
    void curarse(int curacion);
    void actualizarAtaque();
    void actualizarCuracion();
    void reiniciar();
    void detalleHeroe();
};

