#include "Personaje.h"

Personaje::Personaje(int nivel)
{
	this->nivel = nivel;
	this->ataque = 0;
	this->vida = 0;
}

Personaje::~Personaje()
{
}

void Personaje::RecibirAtaque(int danio)
{
	vida = vida - danio;
	if (vida < 0)
	{
		vida = 0;
	}
}

bool Personaje::sigueVivo()
{
	if (vida <= 0)
	{
		return false;
	}
	return true;
}
