#include "ListaHabitaciones.h"

ListaHabitaciones::ListaHabitaciones(int maxHabitaciones)
{
	this->maxHabitaciones = maxHabitaciones;
	this->indice = 0;
	listaHabitaciones = new Habitacion * [maxHabitaciones];
}

ListaHabitaciones::~ListaHabitaciones()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaHabitaciones[i];
	}
	delete[] listaHabitaciones;
}

void ListaHabitaciones::mostrarHabitaciones()
{
	for (int i = 0;i < indice;i++)
	{
		listaHabitaciones[i]->detalleHabitacion();
	}
}

void ListaHabitaciones::registrarHabitacion()
{
	if (indice < maxHabitaciones)
	{
		int numHabitacion; string tipo;
		cout << "Ingrese el num de habitacion: " << endl;
		cin >> numHabitacion;
		cout << "Ingrese el tipo de habitacion: (simple,doble,familiar) " << endl;
		cin >> tipo;
		listaHabitaciones[indice] = new Habitacion(numHabitacion, tipo);
		indice++;
	}
	


}

Habitacion* ListaHabitaciones::buscarHabitacion(int numHabitacion)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaHabitaciones[i]->getNumHabitacion() == numHabitacion && listaHabitaciones[i]->getDisponible())
		{
			return listaHabitaciones[i];
		}
		else
		{
			cout << "La habitacion no se encontro o no esta disponible" << endl;
		}
	}
	return nullptr;
}
