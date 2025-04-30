#pragma once
#include"ListaAviones.h"
#include"ListaClientes.h"
#include"ListaVuelos.h"
class Aerolinea
{
private:
	ListaClientes clientes;
	ListaVuelos vuelos;
	ListaAviones aviones;
public:
	Aerolinea(int maxCl, int maxVue, int maxAv);
	~Aerolinea();
	void agregarClienteVuelo();
	void asignarAvionVuelo();
	void menu();
};

