#include "ListaVuelos.h"

int ListaVuelos::crearCodigoVuelo()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(1000, 9999);
	return distr(gen);
}

ListaVuelos::ListaVuelos(int maxVuelos)
{
	indice = 0;
	this->maxVuelos = maxVuelos;
	listaVuelos = new Vuelo * [maxVuelos];
}

ListaVuelos::~ListaVuelos()
{
	for (int i = 0; i < indice; i++) {
		delete listaVuelos[i];
	}
	delete[] listaVuelos;
}

void ListaVuelos::mostrarVuelos()
{
	cout << "Vuelos Registrados: " << indice << endl;
	for (int i = 0; i < indice; i++) {
		listaVuelos[i]->mostrarDatosVuelo();
	}
}

void ListaVuelos::registrarVuelo()
{
	if (indice < maxVuelos) {
		int maxPasajeros;
		cout << "Ingrese max pasajeros: "; cin >> maxPasajeros;
		int codigoVuelo = crearCodigoVuelo();
		listaVuelos[indice] = new Vuelo(codigoVuelo, maxPasajeros);
		indice++;
	}
	else {
		cout << "Maximo de clientes alcanzado" << endl;
	}
}

Vuelo* ListaVuelos::buscarVuelo(int numeroVuelo)
{
	for (int i = 0; i < indice; i++) {
		if (listaVuelos[i]->getNumVuelo() == numeroVuelo)
			return listaVuelos[i];
	}
	return nullptr;
}
