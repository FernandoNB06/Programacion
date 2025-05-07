#include<iostream>
#include"Estudiante.h"
#include"Docente.h"

using namespace std;

int main()
{
	Estudiante e1(13, "Fernando", "Masculino", "Sistemas", 100);
	e1.mostrarDatos();
	Docente d1(14, "Jose", "Masculino", "Matematicas", "Profesor", 200);
	d1.detalleDocente();
	Persona p1(51, "Arnez", "Masculino");
	p1.detallePersona();
	return 0;
}