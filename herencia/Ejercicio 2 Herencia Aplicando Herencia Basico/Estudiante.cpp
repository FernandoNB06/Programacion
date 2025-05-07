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

void Estudiante::mostrarDatos()
{
	cout << "Ci:" <<ci<< endl;
	cout << "Nombre:" << nombre << endl;
	cout << "Genero: " << genero << endl;
	cout << "Carrera:" << carrera << endl;
	cout << "Promedio:" << promedio << endl;

}

void Estudiante::setPromedio(float cambio)
{
	this->promedio = cambio;
}
