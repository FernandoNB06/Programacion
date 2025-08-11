#pragma once
#include"Habitacion.h"
class ListaHabitaciones
{
private:
	int maxHabitaciones;
	int indice;
	Habitacion** listaHabitaciones;
public:
	ListaHabitaciones(int maxHabitaciones);
	~ListaHabitaciones();
	void mostrarHabitaciones();
	void registrarHabitacion();
	Habitacion* buscarHabitacion(int numHabitacion);


};

