#include "Materia.h"

Materia::Materia(string sigla)
{
	this->sigla = sigla;
	docente = nullptr;
}

Materia::~Materia()
{
}

void Materia::detalleMateria()
{
	cout << "Sigla: " << sigla << endl;
	if (docente != nullptr) {
		cout << "Docente asignado:" << endl;
		docente->detalleDocente();
	}
	else {
		cout << "Docente: No asignado" << endl;
	}
}


void Materia::asignarDocente(Docente* docenteAsignado)
{
	if (docente == nullptr)
	{
		this->docente = docenteAsignado;
	}
}

string Materia::getSigla()
{
	return sigla;
}
