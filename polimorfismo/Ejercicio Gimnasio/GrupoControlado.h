#pragma once
#include "Grupo.h"
class GrupoControlado :
	public Grupo
{
private:
	int* asistencia;
public:
	GrupoControlado(string horario);
	~GrupoControlado();
	bool incribirSocio(Socio* socio);
	void tomarAsistencia();
	void mostrarDatos() override;
};

