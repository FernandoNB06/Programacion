#pragma once
#include"Estadia.h"
class ListaEstadias
{
private:
	int maxEstadias;
	int indice;
	Estadia **listaEstadias;
public:
	ListaEstadias(int maxEstadias);
	~ListaEstadias();
	void registrarEstadia();
	void mostrarEstadias();
	Estadia* buscarEstadia(int ciEstadia);
};

