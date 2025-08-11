#include "Heroe.h"

Heroe::Heroe(string nombre):Personaje(1)
{
	
	this->vida = 1500;
	this->ataque = 400;
	this->indiceCuracion = 0;
}

Heroe::~Heroe()
{
}

void Heroe::atacar(Mounstro* mountro)
{
	mountro->RecibirAtaque(ataque);
}

void Heroe::subirNivel()
{
	nivel++;
}

void Heroe::curarse(int curacion)
{
	if (indiceCuracion <= 3)
	{
		vida = vida + curacion;
		indiceCuracion++;
	}
	else
	{
		cout << "Limite alcanzado de curacion" << endl;
	}
	
}

void Heroe::actualizarAtaque()
{
	ataque = ataque * 5 / 4; // operación entera 100% segura

}

void Heroe::actualizarCuracion()
{
	curacion = curacion + 25;
}

void Heroe::reiniciar()
{
}

void Heroe::detalleHeroe()
{
	cout << "DETALLES HEROE" << endl;
	cout << "vida " << vida << endl;
	cout << "ataque " << ataque << endl;
	cout << "indiceCuracion " << indiceCuracion << endl;
}
