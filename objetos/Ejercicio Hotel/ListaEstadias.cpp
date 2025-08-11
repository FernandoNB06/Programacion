#include "ListaEstadias.h"

ListaEstadias::ListaEstadias(int maxEstadias)
{
	this->maxEstadias = maxEstadias;
	this->indice = 0;
	listaEstadias = new Estadia * [maxEstadias];
}

ListaEstadias::~ListaEstadias()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaEstadias[i];
	}
	delete[] listaEstadias;
}

void ListaEstadias::registrarEstadia()
{
	if (indice<maxEstadias)
	{
		int ci; int numNoches;
		cout << "Ingrese el ci: " << endl;
		cin >> ci;
		cout << "Ingrese el numNoches: " << endl;
		cin >> numNoches;
		listaEstadias[indice] = new Estadia(ci, numNoches);
		indice++;
	}
	else
	{
		cout << "Maximo de estadias alacanzado" << endl;
	}
	
}

void ListaEstadias::mostrarEstadias()
{
	for (int i = 0;i < indice;i++)
	{
		listaEstadias[i]->detalleEstadia();
	}
}

Estadia* ListaEstadias::buscarEstadia(int ciEstadia)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaEstadias[i]->getCi() == ciEstadia)
		{
			return listaEstadias[i];
		}
	}
	return nullptr;
}
