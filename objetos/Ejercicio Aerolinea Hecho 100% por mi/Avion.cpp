#include "Avion.h"

Avion::Avion(string matricula, int capacidad)
{
	this->matricula = matricula;
	this->capacidad = capacidad;
	disponible = true;
}

Avion::~Avion()
{
}

void Avion::detalleAvion()
{
	cout << "Matricula: " << matricula<< endl;
	cout << "Capacidad: " << capacidad<<endl;
	if (disponible == 1)
	{
		cout << "Avion Disponible" << endl;
	}
	else
	{
		cout << "Avion Ya Asignado" << endl;
	}
	
}

void Avion::setDisponible(bool disponible)
{
	this->disponible = disponible;
}

int Avion::getCapacidad()
{
	return capacidad;
}
