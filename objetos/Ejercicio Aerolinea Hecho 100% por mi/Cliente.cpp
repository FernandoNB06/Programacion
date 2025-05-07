#include "Cliente.h"

Cliente::Cliente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Cliente::~Cliente()
{
}

void Cliente::detalleCliente()
{
	cout << "Ci: " << ci << endl;
	cout << "Nombre: " << nombre << endl;
}

int Cliente::getCi()
{
	return ci;
}
