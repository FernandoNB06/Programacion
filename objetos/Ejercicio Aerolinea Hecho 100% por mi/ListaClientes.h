#pragma once
#include"Cliente.h"
#include<iostream>
using namespace std;

class ListaClientes
{
private:
	int maxClientes;
	int indice;
	Cliente** listaClientes;
public:
	ListaClientes(int maxClientes);
	~ListaClientes();
	void registrarClientes();
	void mostrarClientes();
	Cliente* buscarCliente(int ci);


};

