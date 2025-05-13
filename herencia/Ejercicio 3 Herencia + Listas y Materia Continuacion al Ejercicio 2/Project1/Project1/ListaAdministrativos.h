#pragma once
#include"Administrativo.h"
class ListaAdministrativos
{
private:
	int maxAdministrativos;
	int indice;
	Administrativo** listaAdministartivos;
public:
	ListaAdministrativos(int maxAdministrativos);
	~ListaAdministrativos();
	void mostrarAdministrativos();
	void registrarAdministrativo();
};

