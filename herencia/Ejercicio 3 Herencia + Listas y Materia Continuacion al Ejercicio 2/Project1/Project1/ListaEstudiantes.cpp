#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes(int maxEstudiantes)
{
	this->maxEstudiantes = maxEstudiantes;
	this->indice = 0;
	listaEstudiantes = new Estudiante * [maxEstudiantes];
}

ListaEstudiantes::~ListaEstudiantes()
{
	for (int i = 0;i < indice;i++)
	{
		delete listaEstudiantes[i];
	}
	delete[] listaEstudiantes;
}

void ListaEstudiantes::registrarEstudiante()
{
	if (indice < maxEstudiantes)
	{
		int ci; string nombre; string genero; string carrera; float promedio;
		cout << "Ci: " << endl;
		cin >> ci;
		cout << "nombre: " << endl;
		cin >> nombre;
		cout << "Genero: " << endl;
		cin >> genero;
		cout << "carrera: " << endl;
		cin >> carrera;
		cout << "promedio: " << endl;
		cin >> promedio;
		listaEstudiantes[indice] = new Estudiante(ci, nombre, genero, carrera, promedio);
		indice++;
		
	}
}

void ListaEstudiantes::mostrarEstudiantes()
{
	cout << " Estudiante registrado correctamente.\n";

	for (int i = 0;i < indice;i++)
	{
		listaEstudiantes[i]->detalleEstudiante();
	}
}
