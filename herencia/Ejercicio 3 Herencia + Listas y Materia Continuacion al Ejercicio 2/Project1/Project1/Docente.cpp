#include "Docente.h"

Docente::Docente(int ci, string nombre, string genero, float salario, string departamento, string profesion)
	:Empleado(ci,nombre,genero,salario)
{
	this->departamento = departamento;
	this->profesion = profesion;
	materias = new Materia * [maxMaterias];
	this->indiceMaterias = 0;
}

Docente::~Docente()
{
	delete[] materias;
}

void Docente::detalleDocente()
{
	cout << "Detalle Docente" << endl;
	Empleado::detalleEmpleado();
	cout << "departamento: " << departamento << endl;
	cout << "profesion: " << profesion << endl;
	if (indiceMaterias == 0) {
		cout << "No tiene materias asignadas." << endl;
	}
	else {
		for (int i = 0; i < indiceMaterias; i++) {
			materias[i]->detalleMateria();
		}
	}


}

void Docente::agregarMateria(Materia* materiaAgregada)
{
	if (indiceMaterias < maxMaterias)
	{
		materias[indiceMaterias] = materiaAgregada;
		indiceMaterias++;
	}
	else
	{
		cout << "Error Ya tiene 3 materias agregadas" << endl;
	}
}

string Docente::getProfesion()
{
	return profesion;
}
