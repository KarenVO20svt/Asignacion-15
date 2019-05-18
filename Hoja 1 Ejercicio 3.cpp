#include <iostream>
#include <conio.h>
using namespace std;

void DibujaCuadrado()
{
	int x;
	int y;
	int numero;
	char caracter;

	cout << "Ingrese el tipo de caracter: ";
	cin >> caracter;
	cout << "Ingrese el tamanio: ";
	cin >> numero;
	cout << "Ingrese la coordenada X: ";
	cin >> x;
	cout << "Ingrese la coordenada Y: ";
	cin >> y;


	for (int j = 1; j <= y; j++)
	{
		cout << endl;
	}
	for (int j = 1; j <= numero; j++)
	{
		for (int i = 1; i <= x; i++)
		{
			cout << "  ";
		}
		for (int i = 1; i <= numero; i++)
		{
			cout << " " << caracter;
		}
		cout << endl;
	}
}

int main()
{
	DibujaCuadrado();

	_getch();
}