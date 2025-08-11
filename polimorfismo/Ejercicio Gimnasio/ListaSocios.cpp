#include "ListaSocios.h"

ListaSocios::ListaSocios(int maxSocios)
{
	this->indice = 0;
	this->maxSocios = maxSocios;
	listaSocios = new Socio * [maxSocios];
}

ListaSocios::~ListaSocios()
{
	for (int i = 0; i < indice; i++) {
		delete listaSocios[i];
	}
	delete[] listaSocios;
}

void ListaSocios::registrarSocio()
{
	if (indice < maxSocios)
	{
		string nombre;
		int ci;
		cout << "Ingrese el nombre: " << endl;
		cin >> nombre;
		cout << "Ingrese el ci: " << endl;
		cin >> ci;
		listaSocios[indice] = new Socio(nombre, ci);
		indice++;
	}

}

void ListaSocios::mostrarSocios()
{
	for (int i = 0;i < indice;i++)
	{
		cout << "Lista de Socios registrados: " << endl;
		listaSocios[i]->detalleSocio();
	}
}

Socio* ListaSocios::buscarSocio(int ci)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaSocios[i]->getCi() == ci)
		{
			return listaSocios[i];
		}
	}
	return nullptr;
}
