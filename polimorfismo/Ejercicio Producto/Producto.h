#pragma once
#include<iostream>
using namespace std;

class Producto
{
protected:
	string nombre;
	int precio;
public:
	Producto(string nombre, int precio);
	~Producto();
	virtual float calcularPrecioFinal() = 0;
	virtual void mostrarDatos();

};

