#pragma once
#include <iostream>
using namespace std;
class Administrativo
{
private:
	int ci;
	string nombre;
	float salario;
	string departamento;
	string cargo;
public: 
	Administrativo(int ci, string nombre);
	~Administrativo();
	int getCi();
	string getNombre();
	void mostrarDatosAdministrativo();
	void setSalario(float salario);
};

