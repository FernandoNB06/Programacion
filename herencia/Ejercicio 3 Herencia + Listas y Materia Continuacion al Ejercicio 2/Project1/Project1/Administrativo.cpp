#include "Administrativo.h"

Administrativo::Administrativo(int ci, string nombre, string genero, float salario, string departamento, string cargo)
	:Empleado(ci,nombre,genero,salario)
{
	this->departamento = departamento;
	this->cargo = cargo;
}

Administrativo::~Administrativo()
{
}

void Administrativo::detalleAdministrativo()
{
	Empleado::detalleEmpleado();
	cout << "departamento: " << departamento << endl;
	cout << "cargo: " << cargo << endl;
}
