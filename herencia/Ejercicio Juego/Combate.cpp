#include "Combate.h"

Combate::Combate(Heroe* heroe, Mounstro* mountro)
{
	this->heroe = heroe;
	this->mountro = mountro;
}

Combate::~Combate()
{
}

void Combate::iniciarCombate()
{
	
	do
	{
		heroe->detalleHeroe();
		mountro->detalleMounstro();

		int opcion;
		cout << "1.Atacar " << endl;
		cout << "2. Curarse " << endl;
		cout << "Elige una opcion: " << endl;
		cin >> opcion;
		if (opcion == 1)
		{
			heroe->atacar(mountro);
			cout << "Ataque hecho" << endl;
			mountro->detalleMounstro();
			if (heroe->sigueVivo())
			{
				cout << "Heroe sigue vivo" << endl;
				mountro->atacar(heroe);
			}
		}
		if (opcion == 2)
		{
			heroe->curarse(50);
			if (heroe->sigueVivo())
			{
				mountro->atacar(heroe);
			}
		}

	} while (heroe->sigueVivo() && mountro->sigueVivo());

	if (heroe->sigueVivo())
	{
		heroe->actualizarAtaque();
		heroe->actualizarCuracion();
		heroe->subirNivel();
	}
	
}
