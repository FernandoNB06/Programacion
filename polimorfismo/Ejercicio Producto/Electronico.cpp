#include "Electronico.h"

Electronico::Electronico(string nombre, int precio, int garantiaMeses):Producto(nombre,precio)
{
	this->garantiaMeses=garantiaMeses;
}

Electronico::~Electronico()
{
}

float Electronico::calcularPrecioFinal()
{
	return precio*1.15;
}

void Electronico::mostrarDatos()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Precio base: " << precio << endl;
	cout << "Garantia Meses: " << garantiaMeses << endl;
	cout << "Precio con descuento: " << calcularPrecioFinal()<< endl;
}
