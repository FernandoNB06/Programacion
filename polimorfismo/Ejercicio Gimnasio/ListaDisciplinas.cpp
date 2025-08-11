#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int maxDisciplinas)
{
	this->indice = 0;
	this->maxDisciplinas = maxDisciplinas;
	listaDisciplinas = new Disciplina * [maxDisciplinas];
}

ListaDisciplinas::~ListaDisciplinas()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaDisciplinas[i];
	}
	delete[] listaDisciplinas;
}

void ListaDisciplinas::mostrarDisciplinas()
{
	for (int i = 0;i < indice;i++)
	{
		listaDisciplinas[i]->detalleDisciplina();
	}
}

void ListaDisciplinas::registrarDisciplina()
{
	if (indice < maxDisciplinas)
	{
		string nombreDisciplina;
		int maxGrupos;
		cout << "Ingrese el nombre de la disciplina: " << endl;
		cin >> nombreDisciplina;
		cout << "Ingrese el maximo de grupos para esta disciplina: " << endl;
		cin >> maxGrupos;
		listaDisciplinas[indice] = new Disciplina(nombreDisciplina, maxGrupos);
		indice++;
	}
}

Disciplina* ListaDisciplinas::disciplinaBuscada(string nombre)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaDisciplinas[i]->getNombreDisciplina() == nombre)
		{
			return listaDisciplinas[i];
		}
	}
	return nullptr;
}


