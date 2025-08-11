#include "GrupoLibre.h"

GrupoLibre::GrupoLibre(string horario):Grupo(horario)
{
	tipoGrupo = "libre";
}

GrupoLibre::~GrupoLibre()
{
}

bool GrupoLibre::incribirSocio(Socio* socio)
{
    if (indice < cupoMaximo)
    {
        listaSocios[indice] = socio;
        indice++;
        return true;
    }
    return false;
}

void GrupoLibre::tomarAsistencia()
{
    cout << "Este grupo no se toma asistencia" << endl;
}

void GrupoLibre::mostrarDatos()
{
    cout << "\n--- Grupo libre ---\n";
    cout << "Horario: " << horario << endl;

    if (indice == 0)
    {
        cout << "NO hay socios inscritos.\n";
    }
    else
    {
        cout << "Socios inscritos:\n";
        for (int i = 0; i < indice; i++)
        {
            listaSocios[i]->detalleSocio();
        }
    }
}
