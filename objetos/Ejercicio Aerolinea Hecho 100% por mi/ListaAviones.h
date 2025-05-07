#pragma once
#include"Avion.h"
class ListaAviones
{
private:
	int maxAviones;
	int indice;
	Avion** listaAviones;
public:
	ListaAviones(int maxAviones);
	~ListaAviones();
	void registrarAvion();
	void mostrarAviones();
	Avion* buscarAvion(int capacidad);
};

