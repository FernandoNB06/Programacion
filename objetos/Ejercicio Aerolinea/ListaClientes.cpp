#include "ListaClientes.h"

ListaClientes::ListaClientes(int maxClientes)
{
	indice = 0;
	this->maxClientes = maxClientes;
	listaClientes = new Cliente * [maxClientes];
}

ListaClientes::~ListaClientes()
{
	for (int i = 0; i < indice; i++) {
		delete listaClientes[i];
	}
	delete[]listaClientes;
}

void ListaClientes::registrarCliente()
{
	if (indice < maxClientes) {
		int ci; string nombre;
		cout << "Ingrese CI cliente: "; cin >> ci;
		cout << "Ingrese nombre cliente: "; cin >> nombre;
		listaClientes[indice] = new Cliente(ci, nombre);
		indice++;
	}
	else {
		cout << "Maximo de clientes alcanzado" << endl;
	}
}

void ListaClientes::mostrarListaClientes()
{
	cout << "Clientes Registrados: " << indice << endl;
	for (int i = 0; i < indice; i++) {
		listaClientes[i]->mostrarDatosCliente();
	}
}

Cliente* ListaClientes::buscarCliente(int ci)
{
	for (int i = 0; i < indice; i++) {
		if (listaClientes[i]->getCi() == ci)
			return listaClientes[i];
	}
	return nullptr;
}
