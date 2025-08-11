#include <iostream>
#include "Socio.h"
#include "GrupoLibre.h"
#include "GrupoControlado.h"
#include "ListaDisciplinas.h"
using namespace std;

ListaSocios s(25);
ListaDisciplinas l(10);

void mostrarMenu() {
    cout << "\n======= MENÚ PRINCIPAL DEL GIMNASIO =======" << endl;
    cout << "1. Registrar socio" << endl;
    cout << "2. Mostrar socios" << endl;
    cout << "3. Registrar disciplina" << endl;
    cout << "4. Mostrar disciplinas" << endl;
    cout << "5. Registrar grupo a disciplina" << endl;
    cout << "6. Inscribir socio a un grupo" << endl;
    cout << "7. Tomar asistencia de un grupo controlado" << endl;
    cout << "8. Salir" << endl;
    cout << "Seleccione una opción: ";
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1:
            s.registrarSocio();
            break;
        case 2:
            s.mostrarSocios();
            break;
        case 3:
            l.registrarDisciplina();
            break;
        case 4:
            l.mostrarDisciplinas();
            break;
        case 5: {
            int grupo;
            cout << "A qué grupo quiere registrar: " << endl;
            cout << "1: Libre" << endl;
            cout << "2: Controlado" << endl;
            cin >> grupo;

            if (grupo == 1) {
                string horario;
                cout << "Ingrese su horario: " << endl;
                cin >> horario;
                Grupo* g = new GrupoLibre(horario);

                string nombre;
                cout << "Ingrese la disciplina a la que quiere añadir el grupo: " << endl;
                cin >> nombre;

                Disciplina* D_Encontrada = l.disciplinaBuscada(nombre);
                if (D_Encontrada != nullptr) {
                    D_Encontrada->inscribirGrupo(g);
                    cout << "¡Inscripción lograda!\n";
                }
            }
            else if (grupo == 2) {
                string horario2;
                cout << "Ingrese su horario: " << endl;
                cin >> horario2;
                Grupo* g = new GrupoControlado(horario2);

                string nombre2;
                cout << "Ingrese la disciplina a la que quiere añadir el grupo: " << endl;
                cin >> nombre2;

                Disciplina* D_Encontrada2 = l.disciplinaBuscada(nombre2);
                if (D_Encontrada2 != nullptr) {
                    D_Encontrada2->inscribirGrupo(g);
                    cout << "¡Inscripción lograda!\n";
                }
            }
            break;
        }
        case 6: {
            int ci;
            cout << "Ingrese el CI del socio a inscribir a un grupo: ";
            cin >> ci;
            Socio* socioEncontrado = s.buscarSocio(ci);
            if (!socioEncontrado) {
                cout << "Socio no encontrado.\n";
                break;
            }

            string dis;
            cout << "Ingrese la disciplina a buscar: ";
            cin >> dis;
            Disciplina* d1 = l.disciplinaBuscada(dis);
            if (!d1) {
                cout << "Disciplina no encontrada.\n";
                break;
            }

            string horarioGrupo;
            cout << "Ingrese el horario del grupo para inscribir al socio: ";
            cin >> horarioGrupo;
            Grupo* gg = d1->buscarGrupo(horarioGrupo);
            if (!gg) {
                cout << "Grupo no encontrado.\n";
                break;
            }

            if (gg->incribirSocio(socioEncontrado)) {
                cout << "Socio inscrito con éxito.\n";
            }
            else {
                cout << "No se pudo inscribir (grupo lleno o ya inscrito).\n";
            }
            break;
        }
        case 7: {
            string disp;
            cout << "Ingrese la disciplina a buscar: ";
            cin >> disp;

            Disciplina* d1 = l.disciplinaBuscada(disp);
            if (!d1) {
                cout << "Disciplina no encontrada.\n";
                break;
            }

            string grupoBuscar;
            cout << "Ingrese el horario del grupo: ";
            cin >> grupoBuscar;

            Grupo* grup = d1->buscarGrupo(grupoBuscar);
            if (!grup) {
                cout << "Grupo no encontrado.\n";
                break;
            }

            if (grup->getTipoGrupo() == "controlado") {
                grup->tomarAsistencia();
            }
            else {
                cout << "Este grupo es libre, no se toma asistencia.\n";
            }
            break;
        }
        case 8:
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 8);

    return 0;
}
