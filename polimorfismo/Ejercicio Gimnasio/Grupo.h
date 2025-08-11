#pragma once
#include<iostream>
#include"ListaSocios.h"
#include"Socio.h"
using namespace std;

class Grupo
{
protected:
	string horario;
	Socio** listaSocios;
	const int cupoMaximo = 20;
	int indice;
	string tipoGrupo;

	
public:
	Grupo(string horario);
	~Grupo();
	virtual bool incribirSocio(Socio* socio) = 0;
	virtual void tomarAsistencia() = 0;
	virtual void mostrarDatos()=0;
	string getHorario();
	string getTipoGrupo() { return tipoGrupo; }
};
	

