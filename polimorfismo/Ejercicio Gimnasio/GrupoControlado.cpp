#include "GrupoControlado.h"

GrupoControlado::GrupoControlado(string horario):Grupo(horario)
{
	asistencia = new int[cupoMaximo];
	tipoGrupo = "controlado";
}

GrupoControlado::~GrupoControlado()
{
}

bool GrupoControlado::incribirSocio(Socio* socio)
{
	
	
	if (indice < cupoMaximo)
	{
		
		listaSocios[indice] = socio;
		asistencia[indice] = 0;
		indice++;
		return true;
	}
	return false;
}

void GrupoControlado::tomarAsistencia()
{
	for (int i = 0;i < indice;i++)
	{
		asistencia[i] = asistencia[i]+1;
	}

	cout << "Asistencia tomada" << endl;
}

void GrupoControlado::mostrarDatos()
{
	if (indice == 0)
	{
		cout << "NO hay socios" << endl;
	}
	else
	{
		cout << "Socios: " << endl;
		for (int i = 0;i < indice;i++)
		{
			listaSocios[i]->detalleSocio();
			cout << "Asistencias: " << asistencia[i] << endl;
		}
	}
}
