#pragma once
#include "Persona.h"
class Estudiante :
    public Persona
{
private:
    string carrera;
    float promedio;
public:
    Estudiante(int ci, string nombre, string genero,string carrera, float promedio);
    ~Estudiante();
    void detalleEstudiante();
    void setPromedio(float promedioActualizado);

};

