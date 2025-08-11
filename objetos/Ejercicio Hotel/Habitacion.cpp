#include "Habitacion.h"

Habitacion::Habitacion(int numHabitacion, string tipo)
{
	this->numHabitacion = numHabitacion;
	this->tipo = tipo;
	this->disponible = true;
}

Habitacion::~Habitacion()
{
}

void Habitacion::detalleHabitacion()
{
	cout << "Num habitacion: " << numHabitacion<<endl;
	cout << "Tipo de habitacion: " << tipo<<endl;
	cout << "Disponibilidad: ";
	if (disponible == 1)
	{
		cout << "La habitacion " << numHabitacion <<" esta disponible para ocupar" << endl;
	}
	else
	{
		cout << "La habitacion "<< numHabitacion <<" fue ocupada" << endl;
	}
}

void Habitacion::setDisponible(bool disponible)
{
	this->disponible = disponible;
}

bool Habitacion::getDisponible()
{
	return disponible;
}

int Habitacion::getNumHabitacion()
{
	return numHabitacion;
}

string Habitacion::getTipo()
{
	return tipo;
}
