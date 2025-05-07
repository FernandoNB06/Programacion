#include "Docente.h"

Docente::Docente(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
	numMaterias = 0;
}

Docente::~Docente()
{
}

void Docente::mostrarDatosDocente()
{
	cout << nombre << " (" << ci << ") " << endl;
}

int Docente::getCi()
{
	return ci;
}

string Docente::getNombre()
{
	return nombre;
}

void Docente::agregarMateria(string materia)
{
	if (numMaterias < 3) {
		materias[numMaterias] = materia;
		numMaterias++;
	}
	else {
		cout << "Maximo de materias alcanzado" << endl;
	}
}

void Docente::setSalario(float salario)
{
	this->salario = salario;
}
