#include "Empleado.h"

Empleado::Empleado(int ci, string nombre, string genero, float salario)
	:Persona(ci,nombre,genero)
{
	this->salario = salario;
}

Empleado::~Empleado()
{
}

void Empleado::detalleEmpleado()
{
	Persona::detallePersona();
	cout << "salario: " << salario << endl;
}
