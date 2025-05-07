#include "ListaClientes.h"

ListaClientes::ListaClientes(int maxClientes)
{
	this->maxClientes = maxClientes;
	this->indice = 0;
	listaClientes = new Cliente * [maxClientes];
}

ListaClientes::~ListaClientes()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaClientes[i];
	}
	delete[] listaClientes;
}

void ListaClientes::registrarClientes()
{
	if (indice < maxClientes)
	{
		int ci;
		string nombre;
		cout << "Ingrese el ci: " << endl;
		cin >> ci;
		cout << "Ingrese el nombre: " << endl;
		cin >> nombre;
		listaClientes[indice] = new Cliente(ci, nombre);
		indice++;
	}
}

void ListaClientes::mostrarClientes()
{
	for (int i = 0;i < indice;i++)
	{
		listaClientes[i]->detalleCliente();
	}
}

Cliente* ListaClientes::buscarCliente(int ci)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaClientes[i]->getCi() == ci)
		{
			return listaClientes[i];
		}
	}
	return nullptr;
}
