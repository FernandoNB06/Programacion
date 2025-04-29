#pragma once
#include "ElementoGrafico.h"
#include "Punto.h"
class GarabatoPuntos : public ElementoGrafico
{
private:
	Punto** puntos;
	int indice;
	int maxPuntos;
public:
	GarabatoPuntos(int maxPuntos);
	~GarabatoPuntos();
	void dibujar();
	void borrar();
	void llenar();
};

