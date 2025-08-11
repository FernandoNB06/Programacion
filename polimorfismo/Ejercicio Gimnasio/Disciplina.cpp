#include "Disciplina.h"

Disciplina::Disciplina(string nombreDisciplina, int maxGrupos)
{
	this->nombreDisciplina = nombreDisciplina;
	this->maxGrupos = maxGrupos;
	this->indice = 0;
	listaGrupos = new Grupo * [maxGrupos];
}

Disciplina::~Disciplina()
{
	delete[] listaGrupos;
}

void Disciplina::detalleDisciplina()
{
	cout << "Disciplina: " << nombreDisciplina << endl;
	cout << "Grupos Registrados en la disciplina: ";
	if (indice == 0)
	{
		cout << "No hay grupos incritos" << endl;

	}
	else
	{
		for (int i = 0;i < indice;i++)
		{
			listaGrupos[i]->mostrarDatos();
		}
	}
	
}

string Disciplina::getNombreDisciplina()
{
	return nombreDisciplina;
}

void Disciplina::inscribirGrupo(Grupo* grupo)
{
	if (indice < maxGrupos)
	{
		listaGrupos[indice] = grupo;
		indice++;
		cout << "Grupo Incrito con exito!!" << endl;
	}
}

Grupo* Disciplina::buscarGrupo(string horario)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaGrupos[i]->getHorario() == horario)
		{
			return listaGrupos[i];
		}
	}
	return nullptr;
}
