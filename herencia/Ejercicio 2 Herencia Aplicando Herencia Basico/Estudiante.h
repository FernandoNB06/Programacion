#pragma once
#include"Persona.h"
#include<iostream>
using namespace std;
class Estudiante : 
	public Persona
{
private:
	string carrera;
	float promedio;
public:
	Estudiante(int ci, string nombre, string genero,string carrera, float promedio);
	~Estudiante();
	void mostrarDatos();
	void setPromedio(float cambio);
};

