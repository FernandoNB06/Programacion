#include "Socio.h"

Socio::Socio(string nombre, int ci)
{
	this->nombre = nombre;
	this->ci = ci;
}

Socio::~Socio()
{
}

void Socio::detalleSocio()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Ci: " << ci << endl;
}

string Socio::getNombre()
{
	return nombre;
}

int Socio::getCi()
{
	return ci;
}
