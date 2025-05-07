#pragma once
#include <iostream>
using namespace std;
class Docente
{
private:
	int ci; 
	string nombre;
	string asignacion;
	string materias[3];
	float salario;
	string departamento;
	int numMaterias;
public: 
	Docente(int ci, string nombre);
	~Docente();
	void mostrarDatosDocente();
	int getCi();
	string getNombre();
	void agregarMateria(string materia);
	void setSalario(float salario);
};

