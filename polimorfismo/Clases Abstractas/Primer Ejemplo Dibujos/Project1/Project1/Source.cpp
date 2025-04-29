#include"Punto.h"

int main()
{
	//Esto es una forma sin polimorfismo

	/*
	Punto p(0, 0);
	p.dibujar();
	system("pause");
	system("cls");
	p.llenar();
	system("cls");
	p.dibujar();
	system("pause");
	*/

	//Con Polimorfismo
	ElementoGrafico* p = new Punto(0, 0);
	p->dibujar();
	system("pause");
	system("cls");
	p->llenar();
	system("cls");
	p->dibujar();
	system("pause");
}