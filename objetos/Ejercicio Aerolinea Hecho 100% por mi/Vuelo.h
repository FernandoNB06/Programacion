#pragma once
#include"ListaClientes.h"
#include"ListaAviones.h"
class Vuelo
{
private:
	int maxClientes;
	int indiceCliente;
	Cliente** listaClientes;
	Avion* avion;
	int identificadorVuelo;
public:
	Vuelo(int maxClientes, int identificadorVuelo);
	~Vuelo();
	void asignarPasajeros(Cliente * cliente);
	void asignaAvion(Avion * avionAsignado);
	void detalleVuelo();
	int getIdentificador();
};

