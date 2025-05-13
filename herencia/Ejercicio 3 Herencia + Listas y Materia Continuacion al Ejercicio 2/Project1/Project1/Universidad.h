#pragma once
#include"ListaAdministrativos.h"
#include"ListaDocentes.h"
#include"ListaEstudiantes.h"
#include"ListaMaterias.h"
class Universidad
{
private:
	ListaAdministrativos *listaAdministrativos;
	ListaDocentes* listaDocentes;
	ListaEstudiantes* listaEstudiantes;
	ListaMaterias* listaMaterias;
public:
	Universidad();
	~Universidad();
	void menu();
};

