#include "ListaVuelo.h"

ListaVuelo::ListaVuelo(int maxVuelos)
{
	this->maxVuelos = maxVuelos;
	this->indice = 0;
	listaVuelos = new Vuelo * [maxVuelos];
}

ListaVuelo::~ListaVuelo()
{
}

void ListaVuelo::mostrarVuelos()
{
	for (int i = 0;i < indice;i++)
	{
		listaVuelos[i]->detalleVuelo();
	}
}

void ListaVuelo::registrarVuelo()
{
	if (indice < maxVuelos)
	{
		int maxClientes;
		int identificadorVuelo;
		cout << "Ingresa el Maximo de clientes" << endl;
		cin >> maxClientes;
		cout << "Ingrese el identificador del Vuelo" << endl;
		cin >> identificadorVuelo;

		listaVuelos[indice] = new Vuelo(maxClientes, identificadorVuelo);
		indice++;
	}
}

Vuelo* ListaVuelo::buscarVuelo(int iddentificador)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaVuelos[i]->getIdentificador() == iddentificador) {
			return listaVuelos[i];
		}
	}
	return nullptr;
}
