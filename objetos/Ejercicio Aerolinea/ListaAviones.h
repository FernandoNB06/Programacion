#pragma once
#include "Avion.h"
class ListaAviones
{
private:
	int maxAviones;
	Avion** aviones; // crear una lista de aviones
	int indice;
public:
	ListaAviones(int maxAviones);
	~ListaAviones();
	void registrarAvion();
	void mostrarAvionesRegistrados();
	Avion* buscarAvion(int capacidad);
};

