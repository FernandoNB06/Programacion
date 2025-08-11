#pragma once
#include<iostream>
using namespace std;
class Habitacion
{
private:
	int numHabitacion;
	string tipo;
	bool disponible;
public:
	Habitacion(int numHabitacion, string tipo);
	~Habitacion();
	void detalleHabitacion();
	void setDisponible(bool disponible);
	bool getDisponible();
	int getNumHabitacion();
	string getTipo();
};

