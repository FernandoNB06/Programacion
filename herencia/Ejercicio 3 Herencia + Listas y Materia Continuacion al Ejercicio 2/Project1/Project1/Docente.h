#pragma once
#include "Empleado.h"
#include"Materia.h"
class Docente :
    public Empleado
{
private:
    string departamento;
    string profesion;
    Materia** materias;
    int indiceMaterias;
    static const int maxMaterias=3;
public:
    Docente(int ci, string nombre, string genero, float salario,string departamento,string profesion);
    ~Docente();
    void detalleDocente();
    void agregarMateria(Materia* materiaAgregada);
    string getProfesion();
};

