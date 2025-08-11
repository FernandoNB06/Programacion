#pragma once
#include"ListaHabitaciones.h"

class Estadia
{
private:
	int ci;
	int numNoches;
	int cantHabiOcupadas;
	Habitacion** listaHabitacionesOcupadas;
public:
	Estadia(int ci, int numNoches);
	~Estadia();
	void agregarHabitacion(Habitacion* habitacionSolicitada);
	void detalleEstadia();
	int finalizarEstadia();
	int getCi();

};

