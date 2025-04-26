#pragma once
#include "Persona.h"
class Alumno :
    public Persona
{
private:
    float notaFinal;
public:
    Alumno(string nombre, int edad, float notaFinal);
    ~Alumno();
    void mostrar(); //lo mismo que en Persona
};

