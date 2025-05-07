#pragma once
#include"iostream"
using namespace std;

class Avion
{
private:
	string matricula;
	int capacidad;
	bool disponible;
public:
	Avion(string matricula,int capacidad);
	~Avion();
	void detalleAvion();
	void setDisponible(bool disponible);
	int getCapacidad();
};

