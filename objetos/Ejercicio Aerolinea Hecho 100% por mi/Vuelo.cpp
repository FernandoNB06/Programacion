#include "Vuelo.h"

Vuelo::Vuelo(int maxClientes, int identificadorVuelo)
{
	this->maxClientes = maxClientes;
	indiceCliente = 0;
	listaClientes = new Cliente * [maxClientes];
	avion = nullptr;
	this->identificadorVuelo = identificadorVuelo;
	
}

Vuelo::~Vuelo()
{
	delete[] listaClientes;
}

void Vuelo::asignarPasajeros(Cliente* cliente)
{
	if (indiceCliente < maxClientes)
	{
		listaClientes[indiceCliente] = cliente;
		indiceCliente++;
	}
}

void Vuelo::asignaAvion(Avion* avionAsignado)
{
		this->avion = avionAsignado;
		avion->setDisponible(false);
}

void Vuelo::detalleVuelo()
{
	cout << "Pasajeros: " << endl;
	for (int i = 0;i < indiceCliente;i++)
	{
		listaClientes[i]->detalleCliente();
	}

	cout << "Avion asignado: " << endl;
	if (avion == nullptr)
	{
		cout << "Vuelo sin Avion Asignado" << endl;
	}
	else
	{
		avion->detalleAvion();
	}
}

int Vuelo::getIdentificador()
{
	return identificadorVuelo;
}
