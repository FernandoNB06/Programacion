#include<iostream>
#include"Electronico.h"
#include"Libro.h"
#include"Producto.h"
using namespace std;
float total;
int main()
{
	Producto* lista[3];
	lista[0] = new Libro("Hercules", 10, "Fer");
	lista[1] = new Electronico("Alo", 20, 2);
	lista[2] = new Libro("Lisa", 10, "Joel");


	for (int i = 0;i < 3;i++)
	{
		lista[i]->mostrarDatos();
	}


	

	for (int i = 0;i < 3;i++)
	{
		
		total = total + lista[i]->calcularPrecioFinal();
	}
	cout << "El total final a pagar es: " << total << endl;

	for (int i = 0;i < 3;i++)
	{
		delete lista[i];
	}
	return 0;
}