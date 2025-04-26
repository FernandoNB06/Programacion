#include "Persona.h"

Persona::Persona(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

Persona::~Persona()
{
}

void Persona::mostrar()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}
