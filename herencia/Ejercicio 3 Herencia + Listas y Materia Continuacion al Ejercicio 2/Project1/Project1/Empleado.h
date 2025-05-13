#pragma once
#include "Persona.h"
class Empleado :
    public Persona
{
protected:
    float salario;
public:
    Empleado(int ci, string nombre, string genero,float salario);
    ~Empleado();
    void detalleEmpleado();
};

