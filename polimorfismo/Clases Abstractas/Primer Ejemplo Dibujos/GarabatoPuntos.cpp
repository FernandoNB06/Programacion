#include "GarabatoPuntos.h"

GarabatoPuntos::GarabatoPuntos(int maxPuntos)
{
	this->maxPuntos = maxPuntos;
	indice = 0;
	puntos = new Punto * [maxPuntos];
}

GarabatoPuntos::~GarabatoPuntos()
{
	for (int i = 0; i < indice; i++)
		delete puntos[i];
	delete[] puntos;
}

void GarabatoPuntos::dibujar()
{
	for (int i = 0; i < indice; i++)
		puntos[i]->dibujar();
}

void GarabatoPuntos::borrar()
{
	for (int i = 0; i < indice; i++)
		puntos[i]->borrar();
}

void GarabatoPuntos::llenar()
{
	if (indice < maxPuntos) {
		puntos[indice] = new Punto(0, 0);
		puntos[indice]->llenar();
		indice++;
	}
	else {
		cout << "Maximo de puntos alcanzado" << endl;
	}
}
