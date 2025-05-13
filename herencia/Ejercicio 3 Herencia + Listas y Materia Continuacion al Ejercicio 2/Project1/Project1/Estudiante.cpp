#include "Estudiante.h"

Estudiante::Estudiante(int ci, string nombre, string genero, string carrera, float promedio)
	:Persona(ci,nombre,genero)
{
	this->carrera = carrera;
	this->promedio = promedio;
}

Estudiante::~Estudiante()
{
}

void Estudiante::detalleEstudiante()
{
	cout << "--- Datos del estudiante ---" << endl;

	Persona::detallePersona();
	cout << "Carrera: " << carrera << endl;
	cout << "Promedio: " << promedio << endl;
}

void Estudiante::setPromedio(float promedioActualizado)
{
	this->promedio = promedioActualizado;
}
