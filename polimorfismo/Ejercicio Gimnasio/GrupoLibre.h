#pragma once
#include "Grupo.h"
class GrupoLibre :
    public Grupo
{
public:
    GrupoLibre(string horario);
    ~GrupoLibre();
    bool incribirSocio(Socio* socio) override;
    void tomarAsistencia() override;
    void mostrarDatos();
};

