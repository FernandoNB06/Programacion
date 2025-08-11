#include "Grupo.h"

Grupo::Grupo(string horario)
{
	this->horario = horario;
	listaSocios = new Socio * [cupoMaximo];
	this->indice = 0;

}

Grupo::~Grupo()
{
	delete[] listaSocios;
}

void Grupo::mostrarDatos()
{
	
}

string Grupo::getHorario()
{
	return horario;
}


