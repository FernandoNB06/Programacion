#include<iostream>
#include"Animal.h"
#include"Gato.h"
#include"Perro.h"

using namespace std;

int main()
{
	Animal *a1 = new Gato();
	Animal *a2 = new Perro();

	a1->hacerSonido();
	a2->hacerSonido();

	delete a1;
	delete a2;


	return 0;
}