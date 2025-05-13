#include "Universidad.h"

Universidad::Universidad()
{
    listaEstudiantes = new ListaEstudiantes(100);
    listaDocentes = new ListaDocentes(100);
    listaAdministrativos = new ListaAdministrativos(100);
    listaMaterias = new ListaMaterias(100);
}

Universidad::~Universidad()
{
    delete listaEstudiantes;
    delete listaDocentes;
    delete listaAdministrativos;
    delete listaMaterias;
}

void Universidad::menu()
{
	int op;
	do
	{
        cout << "\n====== MENÚ UNIVERSIDAD ======\n";
        cout << "1. Registrar estudiante\n";
        cout << "2. Registrar docente\n";
        cout << "3. Registrar administrativo\n";
        cout << "4. Registrar materia\n";
        cout << "5. Asignar docente a materia\n";
        cout << "6. Asignar materia a docente\n";
        cout << "7. Mostrar materias con su docente\n";
        cout << "8. Mostrar estudiantes\n";
        cout << "9. Mostrar docentes\n";
        cout << "10. Mostrar administrativos\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> op;
        cin.ignore();

        switch (op)
        {
        case 1:
            listaEstudiantes->registrarEstudiante();
            break;

        case 2:
            listaDocentes->registrarDocente();
            break;

        case 3:
            listaAdministrativos->registrarAdministrativo();
            break;

        case 4:
            string sigla;
            cout << "Ingrese la sigla de la materia a registrar: " << endl;
            cin >> sigla;
            Materia* m = new Materia(sigla);
            listaMaterias->asignarMateria(m);
            break;
        case 5:
            string profesion;
            cout << "Ingrese la profesion del docente que desea asignar a una materia" << endl;
            cin >> profesion;
            string sigla;
            cout << "Ingrese la sigla de la materia" << endl;
            cin >> sigla;
            Docente* buscarDocente = listaDocentes->buscarDocentePorProfesion(profesion);
            Materia* buscarMateria = listaMaterias->buscarMateria(sigla);

            if (buscarDocente != nullptr && buscarMateria != nullptr)
            {
                buscarMateria->asignarDocente(buscarDocente);
                buscarDocente->agregarMateria(buscarMateria);
                cout << "Agregacion exitosa" << endl;
            }
            else
            {
                cout << "Algo esta fallando" << endl;
            }

            break;
        case 6:
            cout << "6. Asignar materia a docente\n";

            string profesion;
            cout << "Ingrese la profesion del docente: " << endl;
            cin >> profesion;

            Docente* encontrado = listaDocentes->buscarDocentePorProfesion(profesion);

            string sigla;
            cout << "Ingrese la sigla de la materia: " << endl;
            cin >> sigla;
            Materia* materiaEncontrada = listaMaterias->buscarMateria(sigla);
            if (encontrado != nullptr && materiaEncontrada != nullptr)
            {
                encontrado->agregarMateria(materiaEncontrada);
            }
            else
            {
                cout << "Hay algun error" << endl;
            }
            break;
        case 7:
            listaMaterias->mostrarMaterias();
            break;
        case 8:
            listaEstudiantes->mostrarEstudiantes();

            break;
        case 9:
            listaDocentes->mostrarDocentes();

            break;
        case 10:
            listaAdministrativos->mostrarAdministrativos();

            break;
        case 0:
            cout << "Saliendo del sistema...\n";
            break;

        default:
            cout << "Opción inválida. Intente nuevamente.\n";
            break;
        }
	} while (op != 0);
}
