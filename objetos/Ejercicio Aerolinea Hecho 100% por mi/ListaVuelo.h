#pragma once
#include<iostream>
#include"Vuelo.h"
using namespace std;

class ListaVuelo
{
private:
	int maxVuelos;
	int indice;
	Vuelo** listaVuelos;
public:
	ListaVuelo(int maxVuelos);
	~ListaVuelo();
	void mostrarVuelos();
	void registrarVuelo();
	Vuelo* buscarVuelo(int iddentificador);

};

