#include "Estadia.h"

Estadia::Estadia(int ci, int numNoches)
{
	this->ci = ci;
	this->numNoches = numNoches;
	this->cantHabiOcupadas = 0;
	listaHabitacionesOcupadas = new Habitacion * [5];
}

Estadia::~Estadia()
{
	delete[] listaHabitacionesOcupadas;
}

void Estadia::agregarHabitacion(Habitacion* habitacionSolicitada)
{
	if (cantHabiOcupadas < 5)
	{
		listaHabitacionesOcupadas[cantHabiOcupadas] = habitacionSolicitada;
		habitacionSolicitada->setDisponible(false);
		cantHabiOcupadas++;
	}
}

void Estadia::detalleEstadia()
{
	cout << "Ci: " << ci << endl;
	cout << "numNoches: " << numNoches << endl;
	cout << "Cantidad habitaciones ocupadas: " << cantHabiOcupadas<< endl;
	if (cantHabiOcupadas == 0)
	{
		cout << "No tiene habitaciones registradas" << endl;
	}
	else
	{
		for (int i = 0;i < cantHabiOcupadas;i++)
		{
			listaHabitacionesOcupadas[i]->detalleHabitacion();
		}
	}
	
}

int Estadia::finalizarEstadia()
{
	int total=0;
	for (int i = 0;i < cantHabiOcupadas;i++)
	{
		listaHabitacionesOcupadas[i]->setDisponible(true);
		if (listaHabitacionesOcupadas[i]->getTipo() == "simple")
		{
			total += 300 * (numNoches+ cantHabiOcupadas);
			
		}
		if (listaHabitacionesOcupadas[i]->getTipo() == "doble")
		{
			total += 450 * (numNoches + cantHabiOcupadas);
			
		}
		if (listaHabitacionesOcupadas[i]->getTipo() == "familiar")
		{
			total += 600 * (numNoches + cantHabiOcupadas);
			
		}
	}

	return total;
}

int Estadia::getCi()
{
	return ci;
}
