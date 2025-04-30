#include "Cliente.h"

Cliente::Cliente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}

Cliente::~Cliente()
{
}

void Cliente::mostrarDatosCliente()
{
	cout << nombre << " - " << ci << endl;
}

int Cliente::getCi()
{
	return ci;
}
