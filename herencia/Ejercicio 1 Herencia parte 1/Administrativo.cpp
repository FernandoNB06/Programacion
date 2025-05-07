#include "Administrativo.h"

Administrativo::Administrativo(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Administrativo::~Administrativo()
{
}

int Administrativo::getCi()
{
	return ci;
}

string Administrativo::getNombre()
{
	return nombre;
}

void Administrativo::mostrarDatosAdministrativo()
{
	cout << nombre << " (" << ci << ") " << endl;
}

void Administrativo::setSalario(float salario)
{
	this->salario = salario;
}
