#pragma once
#include "Cliente.h"
class ListaClientes
{
private: 
	int indice;
	int maxClientes;
	Cliente** listaClientes;
public: 
	ListaClientes(int maxClientes);
	~ListaClientes();
	void registrarCliente();
	void mostrarListaClientes();
	Cliente* buscarCliente(int ci);
};

