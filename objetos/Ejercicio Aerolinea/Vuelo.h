#pragma once
#include "Avion.h"
#include "Cliente.h"
class Vuelo
{
private: 
	int numVuelo;
	int maxPasajeros;
	Avion* avion;
	Cliente** pasajeros;
	int numPasajeros;
public:
	Vuelo(int numVuelo, int maxPasajeros);
	~Vuelo();
	void asignarAvion(Avion* avion);
	void mostrarDatosVuelo();
	void agregarPasajero(Cliente* cliente);
	int getNumVuelo();
};

