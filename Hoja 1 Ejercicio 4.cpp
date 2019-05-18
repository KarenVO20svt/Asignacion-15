#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int DibujaRectangulo(int &largo, int &ancho, char &color, int &numColor, int &x, int &y, char &p) {

	switch (color) 
	{
	    case 'r':
		   numColor = 4;
		   break;
	    case 'a':
		   numColor = 1;
		   break;
	    case 'v':
		   numColor = 10;
		   break;
	    default:
		   numColor = 15;
		   break;
	}

	for (int a = 0; a < x; a++) {
		cout << "  ";
		cout << endl;
	}

	for (int i = 0; i < ancho; i++) {
		for (int b = 0; b < y; b++) {
			cout << "  ";
		}
		for (int j = 0; j < largo; j++) {
			if (i == 0 || j == 0 || i == (ancho - 1) || j == (largo - 1)) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), numColor);
				cout << " " << p;
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return p;
}

int main() {
	int largo, ancho;
	int x, y;
	char color, p;
	int numColor;

	cout << "Ingrese el largo del rectangulo: ";
	cin >> largo;
	cout << "Ingrese el ancho del rectangulo: ";
	cin >> ancho;
	cout << "Ingrese la coordenada de X: ";
	cin >> x;
	cout << "Ingrese la coordenada de Y: ";
	cin >> y;
	cout << "Ingrese el caracter: ";
	cin >> p;
	cout << "Ingrese el color deseado (r, a, v): ";
	cin >> color;

	DibujaRectangulo(largo, ancho, color, numColor, x, y, p);

	_getch();
}