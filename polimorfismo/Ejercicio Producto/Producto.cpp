#include "Producto.h"

Producto::Producto(string nombre, int precio)
{
	this->nombre = nombre;
	this->precio = precio;
}

Producto::~Producto()
{
}

void Producto::mostrarDatos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio << endl;
	
}
