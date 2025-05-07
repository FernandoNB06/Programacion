#pragma once
#include <iostream>
using namespace std;
class Estudiante
{
private: 
	int ci;
	string nombre;
	string carrera;
	float promedio;
public:
	Estudiante(int ci, string nombre);
	~Estudiante();
	void setCarrera(string carrera);
	void setPromedio(float promedio);
	int getCi();
	string getNombre();
	void mostrarDatosEstudiante();
};

