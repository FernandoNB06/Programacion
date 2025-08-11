#include "Libro.h"

Libro::Libro(string nombre, int precio, string autor):Producto(nombre,precio)
{
	this->autor = autor;
}

float Libro::calcularPrecioFinal()
{
	
	return precio * 0.90;
}

void Libro::mostrarDatos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio<< endl;
	cout << "Autor: " << autor << endl;
	cout << "Precio final: " << calcularPrecioFinal()<<endl;
}
