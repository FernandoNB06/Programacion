#include "ListaAviones.h"

ListaAviones::ListaAviones(int maxAviones)
{
	this->maxAviones = maxAviones;
	this->indice = 0;
	listaAviones = new Avion * [maxAviones];
}

ListaAviones::~ListaAviones()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaAviones[i];
	}
	delete[] listaAviones;
}

void ListaAviones::registrarAvion()
{
	if (indice < maxAviones)
	{
		string matricula;
		int capacidad;
		bool disponible;
		cout << "Ingrese la matricula: " << endl;
		cin >> matricula;
		cout << "Ingrese la capacidad: " << endl;
		cin >> capacidad;
		listaAviones[indice] = new Avion(matricula, capacidad);
		indice++;
	}
}

void ListaAviones::mostrarAviones()
{
	for (int i = 0;i < indice;i++)
	{
		listaAviones[i]->detalleAvion();
	}
}

Avion* ListaAviones::buscarAvion(int capacidad)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaAviones[i]->getCapacidad() == capacidad)
		{
			return listaAviones[i];
		}
		
	}
	cout << "No se encontro el Avion" << endl;
	return nullptr;
}
