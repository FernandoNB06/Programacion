#include "Persona.h"

Persona::Persona(int ci, string nombre, string genero)
{
	this->ci = ci;
	this->nombre = nombre;
	this->genero = genero;
}

Persona::~Persona()
{
}

void Persona::detallePersona()
{
	cout << "Ci:" << ci << endl;
	cout << "Nombre:" << nombre << endl;
	cout << "Genero: " << genero << endl;
}
