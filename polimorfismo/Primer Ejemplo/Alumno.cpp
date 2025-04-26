#include "Alumno.h"

Alumno::Alumno(string nombre, int edad, float notaFinal):Persona(nombre,edad)
{
	this->notaFinal = notaFinal;
}

Alumno::~Alumno()
{
}

void Alumno::mostrar()
{
	Persona::mostrar();
	cout << "Nota Final: " << notaFinal << endl;
}
