#include "Avion.h"

Avion::Avion(string matricula, int capacidad, string modelo)
{
	this->matricula = matricula;
	this->capacidad = capacidad;
	this->modelo = modelo;
	disponible = true;
}

Avion::~Avion()
{
}

void Avion::mostrarDatosAvion()
{
	cout << "Avion (" << matricula << ") - " << modelo << " Capacidad: " << capacidad;
	if (disponible)
		cout << "(Libre)" << endl;
	else
		cout << "(En uso)" << endl;
}

int Avion::getCapacidad()
{
	return capacidad;
}

void Avion::setDisponible(bool disponible)
{
	this->disponible = disponible;
}

bool Avion::getDisponible()
{
	return disponible;
}
