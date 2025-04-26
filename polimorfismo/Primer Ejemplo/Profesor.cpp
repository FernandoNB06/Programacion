#include "Profesor.h"

Profesor::Profesor(string nombre, int edad, string materia):Persona(nombre,edad)
{
	this->materia = materia;
}

Profesor::~Profesor()
{
}

void Profesor::mostrar()
{
	Persona::mostrar();
	cout << "Materia: " << materia << endl;
}
