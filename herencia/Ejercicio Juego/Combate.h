#pragma once
#include"Heroe.h"
#include"Mounstro.h"
class Combate
{
	private:
		Heroe* heroe;
		Mounstro* mountro;

	public:
		Combate(Heroe* heroe,Mounstro* mountro);
		~Combate();
		void iniciarCombate();
};

