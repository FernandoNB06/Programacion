#include "Administrativo.h"
#include "Docente.h"
#include "Estudiante.h"

int main() {
	Estudiante e(1234, "Pedro");
	e.mostrarDatosEstudiante();

	Administrativo a(2345, "Mateo");
	a.mostrarDatosAdministrativo();

	Docente d(3456, "Ana");
	d.mostrarDatosDocente();

}