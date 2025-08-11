#pragma once
#include"Disciplina.h"

class ListaDisciplinas
{
private:
	int maxDisciplinas;
	int indice;
	Disciplina** listaDisciplinas;
public:
	ListaDisciplinas(int maxDisciplinas);
	~ListaDisciplinas();
	void mostrarDisciplinas();
	void registrarDisciplina();
	Disciplina* disciplinaBuscada(string nombre);
};

