#include "ListaDocentes.h"

ListaDocentes::ListaDocentes(int maxDocentes)
{
	this->indice = 0;
	this->maxDocentes = maxDocentes;
	listaDocentes = new Docente * [maxDocentes];
}

ListaDocentes::~ListaDocentes()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaDocentes[i];
	}
	delete[] listaDocentes;
}

void ListaDocentes::registrarDocente()
{
	if (indice < maxDocentes)
	{
		int ci; string nombre; string genero; float salario; string departamento; string profesion;
		cout << "Ci: " << endl;
		cin >> ci;
		cout << "Nombre: " << endl;
		cin >> nombre;
		cout << "genero: " << endl;
		cin >> genero;
		cout << "salario: " << endl;
		cin >> salario;
		cout << "departamento: " << endl;
		cin >> departamento;
		cout << "profesion: " << endl;
		cin >> profesion;
		listaDocentes[indice] = new Docente(ci, nombre, genero, salario, departamento, profesion);
		indice++;
	}
}

void ListaDocentes::mostrarDocentes()
{
	for (int i = 0;i < indice;i++)
	{
		listaDocentes[i]->detalleDocente();
	}
}

Docente* ListaDocentes::buscarDocentePorProfesion(string profesion)
{
	for (int i = 0;i < indice;i++)
	{
		if (listaDocentes[i]->getProfesion() == profesion)
		{
			return listaDocentes[i];
		}
	}
	return nullptr;
}
