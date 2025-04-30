#pragma once
#include <iostream>
#include <string>
using namespace std;
class Avion
{
private: 
	string matricula;
	int capacidad;
	string modelo;
	bool disponible;
public:
	Avion(string matricula, int capacidad, string modelo);
	~Avion();
	void mostrarDatosAvion();
	int getCapacidad();
	void setDisponible(bool disponible);
	bool getDisponible();
};

