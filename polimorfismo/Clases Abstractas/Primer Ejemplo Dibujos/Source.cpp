#include "Punto.h"
#include "Linea.h"
#include "GarabatoPuntos.h"
#include "GarabatoLineas.h"
#include "GraficoEnPantalla.h"
#include <iostream>
using namespace std;

void pruebaPunto() {
	ElementoGrafico* p = new Punto(0, 0);
	p->dibujar();
	system("pause");
	system("cls");
	p->llenar();
	system("cls");
	p->dibujar();
	system("pause");
	//Esto es una forma sin polimorfismo

	/*
	Punto p(0, 0);
	p.dibujar();
	system("pause");
	system("cls");
	p.llenar();
	system("cls");
	p.dibujar();
	system("pause");
	*/
}

void pruebaGarabatoPuntos() {
	ElementoGrafico* gp = new GarabatoPuntos(10);
	gp->llenar();
	gp->llenar();
	gp->llenar();

	system("cls");

	gp->dibujar();

	system("pause");
}

void pruebaLinea() {
	ElementoGrafico* l = new Linea(0, 0);
	l->llenar();
	system("cls");
	l->dibujar();
	system("pause");
}

int main() {
    GraficoEnPantalla pantalla(100); 

    int opcion;
    do {
        system("cls");
        cout << "=== MENU DE GRAFICOS ===" << endl;
        cout << "1. Agregar Punto" << endl;
        cout << "2. Agregar Linea" << endl;
        cout << "3. Agregar Garabato de Puntos" << endl;
        cout << "4. Agregar Garabato de Lineas" << endl;
        cout << "5. Mostrar todo en pantalla" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        system("cls");

        switch (opcion) {
        case 1: {
            ElementoGrafico* p = new Punto(0, 0);
            p->llenar();
            pantalla.agregarElemento(p);
            break;
        }
        case 2: {
            ElementoGrafico* l = new Linea(0, 0);
            l->llenar();
            pantalla.agregarElemento(l);
            break;
        }
        case 3: {
            int n;
            cout << "Cantidad de puntos: ";
            cin >> n;
            ElementoGrafico* gp = new GarabatoPuntos(n);
            for (int i = 0; i < n; i++) gp->llenar();
            pantalla.agregarElemento(gp);
            break;
        }
        case 4: {
            int n;
            cout << "Cantidad de lineas: ";
            cin >> n;
            ElementoGrafico* gl = new GarabatoLineas(n);
            for (int i = 0; i < n; i++) gl->llenar();
            pantalla.agregarElemento(gl);
            break;
        }
        case 5:
            pantalla.dibujarTodo();
            system("pause");
            break;
        case 0:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion invalida." << endl;
            system("pause");
            break;
        }

    } while (opcion != 0);

    return 0;
}


