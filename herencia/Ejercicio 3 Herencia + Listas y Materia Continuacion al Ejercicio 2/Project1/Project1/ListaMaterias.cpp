#include "ListaMaterias.h"

ListaMaterias::ListaMaterias(int maxMaterias)
{
	this->maxMaterias = maxMaterias;
	this->indice = 0;
	listaMaterias = new Materia * [maxMaterias];
}

ListaMaterias::~ListaMaterias()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaMaterias[i];
	}
	delete[] listaMaterias;
}

void ListaMaterias::mostrarMaterias()
{
	for (int i = 0;i < indice;i++)
	{
		listaMaterias[i]->detalleMateria();
		
	}
}

void ListaMaterias::asignarMateria(Materia* materiaAsignada)
{
	if (indice < maxMaterias)
	{
		listaMaterias[indice] = materiaAsignada;
		indice++;
	}
}

Materia* ListaMaterias::buscarMateria(string materiaBuscada)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaMaterias[i]->getSigla() == materiaBuscada)
		{
			return listaMaterias[i];
		}
	}
	return nullptr;
}
