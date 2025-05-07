#include "Estudiante.h"

Estudiante::Estudiante(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
	promedio = 0;
}

Estudiante::~Estudiante()
{
}

void Estudiante::setCarrera(string carrera)
{
	this->carrera = carrera;
}

void Estudiante::setPromedio(float promedio)
{
	this->promedio = promedio;
}

int Estudiante::getCi()
{
	return ci;
}

string Estudiante::getNombre()
{
	return nombre;
}

void Estudiante::mostrarDatosEstudiante()
{
	cout << nombre << " (" << ci << ")" << endl;
}
