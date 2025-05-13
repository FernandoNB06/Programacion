#pragma once
#include "Empleado.h"
class Administrativo :
    public Empleado
{
private:
    string departamento;
    string cargo;
public:
    Administrativo(int ci, string nombre, string genero, float salario, string departamento, string cargo);
    ~Administrativo();
    void detalleAdministrativo();

};

