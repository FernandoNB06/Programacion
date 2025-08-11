#pragma once
#include<iostream>
#include"Grupo.h"
using namespace std;

class Disciplina
{
private:
	string nombreDisciplina;
	Grupo** listaGrupos;
	int indice;
	int maxGrupos;

public:
	Disciplina(string nombreDisciplina,int maxGrupos);
	~Disciplina();
	void detalleDisciplina();
	string getNombreDisciplina();

	void inscribirGrupo(Grupo * grupo);
	Grupo* buscarGrupo(string horario);
};

