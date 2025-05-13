#pragma once
#include"Materia.h"
class ListaMaterias
{
private:
	int maxMaterias;
	int indice;
	Materia** listaMaterias;
public:
	ListaMaterias(int maxMaterias);
	~ListaMaterias();
	void mostrarMaterias();
	void asignarMateria(Materia * materiaAsignada);
	Materia* buscarMateria(string materiaBuscada);
};

