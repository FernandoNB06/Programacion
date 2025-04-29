#include "Linea.h"

Linea::Linea(int x, int y) : EGBasico(x, y)
{
	tam = 0;
	orientacion = DERECHA;
}

Linea::~Linea()
{
}

void Linea::dibujar()
{
	for (int i = 0; i < tam; i++) {
		switch (orientacion)
		{
		case ARRIBA:
			gotoxy(x, y - i);
			cout << "|";
			break;
		case ABAJO:
			gotoxy(x, y + i);
			cout << "|";
			break;
		case IZQUIERDA:
			gotoxy(x - i, y);
			cout << "_";
			break;
		case DERECHA:
			gotoxy(x + i, y);
			cout << "_";
			break;
		default:
			break;
		}
	}
}

void Linea::borrar()
{
	for (int i = 0; i < tam; i++) {
		switch (orientacion)
		{
		case ARRIBA:
			gotoxy(x, y - i);
			cout << " ";
			break;
		case ABAJO:
			gotoxy(x, y + i);
			cout << " ";
			break;
		case IZQUIERDA:
			gotoxy(x - i, y);
			cout << " ";
			break;
		case DERECHA:
			gotoxy(x + i, y);
			cout << " ";
			break;
		default:
			break;
		}
	}
}

void Linea::llenar()
{
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	cout << "Tam: ";
	cin >> tam;
	int ori;
	cout << "1. Arriba, 2. Abajo, 3. Izquierda, 4. Derecha: ";
	cin >> ori;
	switch (ori)
	{
	case 1:
		orientacion = ARRIBA;
		break;
	case 2:
		orientacion = ABAJO;
		break;
	case 3:
		orientacion = IZQUIERDA;
		break;
	case 4:
		orientacion = DERECHA;
		break;
	default:
		break;
	}
}
