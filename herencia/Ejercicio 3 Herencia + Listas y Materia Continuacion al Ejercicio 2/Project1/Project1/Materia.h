#pragma once
#include"Docente.h"
class Materia
{
private:
	string sigla;
	Docente *docente;
public:
	Materia(string sigla);
	~Materia();
	void detalleMateria();
	void asignarDocente(Docente * docenteAsignado);
	string getSigla();
};

