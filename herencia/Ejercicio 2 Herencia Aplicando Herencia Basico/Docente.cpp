#include "Docente.h"

Docente::Docente(int ci, string nombre, string genero, string departamento, string profesi�n, int salario)
	:Persona(ci,nombre,genero)
{
	this->departamento = departamento;
	this->profesi�n = profesi�n;
	this->salario = salario;
}

Docente::~Docente()
{
}

void Docente::detalleDocente()
{
	cout << "Ci:" << ci << endl;
	cout << "Nombre:" << nombre << endl;
	cout << "Genero: " << genero << endl;
	cout << "Departamento:" << departamento<< endl;
	cout << "Profesion:" << profesi�n<< endl;
	cout << "Salario:" << salario << endl;
}
