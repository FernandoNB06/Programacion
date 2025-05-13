#pragma once
#include"Estudiante.h"
#include<iostream>

using namespace std;

class ListaEstudiantes
{
private:
	int maxEstudiantes;
	int indice;
	Estudiante** listaEstudiantes;

public:
	ListaEstudiantes(int maxEstudiantes);
	~ListaEstudiantes();
	void registrarEstudiante();
	void mostrarEstudiantes();
};

