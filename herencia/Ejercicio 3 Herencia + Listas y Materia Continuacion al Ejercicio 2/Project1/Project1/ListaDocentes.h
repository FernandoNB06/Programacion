#pragma once
#include"Docente.h"
class ListaDocentes
{
private:
	int maxDocentes;
	int indice;
	Docente** listaDocentes;
public:
	ListaDocentes(int maxDocentes);
	~ListaDocentes();
	void registrarDocente();
	void mostrarDocentes();
	Docente* buscarDocentePorProfesion(string profesion);

};

