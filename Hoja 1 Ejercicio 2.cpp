#include <iostream>
#include <conio.h>
using namespace std;

int DibujaCuadrado(int s, char caracter)
{
	for (int i = 1; i <= s; i++)
	{
		for (int j = 1; j <= s; j++)
		{
			cout << caracter << " ";
		}
		cout << endl;
	}
	return s;
}
int main()
{
	int n;
	char caracter;
	do
	{
		cout << "Escribe un numero: "; cin >> n;
	} while (n < 1);
	cout << "Ingresa el caracter: ";
	cin >> caracter;

	DibujaCuadrado(n, caracter);

	_getch();
}