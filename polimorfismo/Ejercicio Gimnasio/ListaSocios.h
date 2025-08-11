#pragma once
#include"Socio.h"
class ListaSocios
{
private:
	int maxSocios;
	int indice;
	Socio** listaSocios;
public:
	ListaSocios(int maxSocios);
	~ListaSocios();
	void registrarSocio();
	void mostrarSocios();
	Socio* buscarSocio(int ci);
};

