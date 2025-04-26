#pragma once
#include "Persona.h"
class Profesor :
    public Persona
{
private:
    string materia;
public:
    Profesor(string nombre,int edad,string materia);
    ~Profesor();
    void mostrar();
};

