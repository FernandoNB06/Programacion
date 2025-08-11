#include<iostream>
#include"Combate.h"
#include"Heroe.h"
#include"Mounstro.h"
#include"Personaje.h"
using namespace std;

int main()
{
	Heroe *h1= new Heroe("Fernando");
	Mounstro *m1= new Mounstro("orco", 1);
	Combate c(h1,m1);
	c.iniciarCombate();
	return 0;
}