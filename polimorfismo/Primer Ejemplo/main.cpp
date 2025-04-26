#include<iostream>
#include"Alumno.h"
#include"Persona.h"
#include"Profesor.h"

int main()
{
	Persona* personas[3];

	personas[0] = new Alumno("Alejandro", 20, 19);
	personas[0]->mostrar();

	personas[1] = new Alumno("Fernando", 21, 18);
	personas[1]->mostrar();

	personas[2] = new Profesor("Manuel",23,"sistemas");
	personas[2]->mostrar();

	return 0;
}