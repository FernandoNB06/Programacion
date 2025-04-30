#include "Vuelo.h"

Vuelo::Vuelo(int numVuelo, int maxPasajeros)
{
	this->numVuelo = numVuelo;
	this->maxPasajeros = maxPasajeros;
	avion = nullptr;
	numPasajeros = 0;
	pasajeros = new Cliente * [maxPasajeros];
}

Vuelo::~Vuelo()
{
	delete[] pasajeros;
}

void Vuelo::asignarAvion(Avion* avion)
{
	this->avion = avion;
	avion->setDisponible(false);
}

void Vuelo::mostrarDatosVuelo()
{
	cout << "Vuelo " << numVuelo << endl;
	if (avion == nullptr) {
		cout << "Avion aun no asignado" << endl;
	}
	else {
		cout << "Avion asignado" << endl;
		avion->mostrarDatosAvion();
	}

	if (numPasajeros > 0) {
		cout << "Pasajeros registrados" << endl;
		for (int i = 0; i < numPasajeros; i++)
			pasajeros[i]->mostrarDatosCliente();
	}
	else {
		cout << "No hay pasajeros registrados" << endl;
	}
}

void Vuelo::agregarPasajero(Cliente* cliente)
{
	if (numPasajeros < maxPasajeros) {
		pasajeros[numPasajeros] = cliente;
		numPasajeros++;
	}
	else {
		cout << "Vuelo lleno" << endl;
	}
}

int Vuelo::getNumVuelo()
{
	return numVuelo;
}
