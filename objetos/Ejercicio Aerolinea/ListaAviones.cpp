#include "ListaAviones.h"

ListaAviones::ListaAviones(int maxAviones)
{
	aviones = new Avion * [maxAviones]; //creo una lista de aviones. 
	this->maxAviones = maxAviones;
	indice = 0;
}

ListaAviones::~ListaAviones()
{
	for (int i = 0; i < indice; i++) {
		delete aviones[i]; // *aviones + i
	}
	delete[]aviones;
}

void ListaAviones::registrarAvion()
{
	if (indice < maxAviones) {
		string matricula; int capacidad; string modelo;
		cout << "Ingrese matricula: "; cin >> matricula;
		cout << "Ingrese capacidad maxima: "; cin >> capacidad;
		cout << "Ingrese modelo: "; cin >> modelo;
		aviones[indice] = new Avion(matricula, capacidad, modelo);
		indice++;
	}
	else {
		cout << "Maximo de aviones alcanzado" << endl;
	}
}

void ListaAviones::mostrarAvionesRegistrados()
{
	cout << "Aviones Registrados: " << indice << endl;
	for (int i = 0; i < indice; i++) {
		aviones[i]->mostrarDatosAvion();
	}
}

Avion* ListaAviones::buscarAvion(int capacidad)
{
	for (int i = 0; i < indice; i++) {
		if (capacidad <= aviones[i]->getCapacidad() && aviones[i]->getDisponible())
			return aviones[i];
	}
	return nullptr;
}
