#pragma once
#include "Persona.h"
class Docente :
    public Persona
{
private:
    string departamento;
    string profesión;
    int salario;
public:
    Docente(int ci, string nombre, string genero, string departamento, string profesión, int salario);
    ~Docente();
    void detalleDocente();
};

