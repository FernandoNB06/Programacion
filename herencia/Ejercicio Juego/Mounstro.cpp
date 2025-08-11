#include "Mounstro.h"

Mounstro::Mounstro(string tipo, int nivel) : Personaje(nivel)
{
	this->tipo = tipo;
	if (tipo == "orco")
	{
		vida = 1000;
		ataque = 100*nivel;
	}
	else if (tipo == "gigante")
	{
		vida = 2000;
		ataque = 200*nivel;
	}
	else if (tipo == "kraken")
	{
		vida = 5000;
		ataque = 500*nivel;
	}
}

Mounstro::~Mounstro()
{
}

void Mounstro::detalleMounstro()
{
	cout << "DETALLE MOUNSTRO" << endl;
	cout << "Tipo mounstro " << tipo << endl;
	cout << "Vida " << vida << endl;
	cout << "Ataque " << ataque << endl;
}

void Mounstro::atacar(Heroe* heroe)
{
	heroe->RecibirAtaque(getAtaque());
}

int Mounstro::getAtaque()
{
	return ataque;
}


