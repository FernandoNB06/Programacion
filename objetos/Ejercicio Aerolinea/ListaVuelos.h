#pragma once
#include "Vuelo.h"
#include <random>
class ListaVuelos
{
private: 
	int indice;
	int maxVuelos;
	Vuelo** listaVuelos;
	int crearCodigoVuelo();
public:
	ListaVuelos(int maxVuelos);
	~ListaVuelos();
	void mostrarVuelos();
	void registrarVuelo();
	Vuelo* buscarVuelo(int numeroVuelo);
};

