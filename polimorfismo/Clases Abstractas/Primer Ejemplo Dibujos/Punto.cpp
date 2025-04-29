#include "Punto.h"

Punto::Punto(int x, int y):EGBasico(x,y)
{
}

Punto::~Punto()
{
}

void Punto::dibujar()
{
	gotoxy(x, y);//lleva el cursor hasta la coordenada
	cout << "x";
}

void Punto::llenar()
{
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
}

void Punto::borrar()
{
	gotoxy(x, y);
	cout << " ";
}
