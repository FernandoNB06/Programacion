#pragma once
#include "Persona.h"
class Docente :
    public Persona
{
private:
    string departamento;
    string profesi�n;
    int salario;
public:
    Docente(int ci, string nombre, string genero, string departamento, string profesi�n, int salario);
    ~Docente();
    void detalleDocente();
};

