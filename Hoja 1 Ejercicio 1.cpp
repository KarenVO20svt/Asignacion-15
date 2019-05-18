#include <iostream>
#include <conio.h>
using namespace std;

int DibujaCuadrado(int a);
int main()
{
	int n;
	cout << "El valor de n es : " << endl;
	cin >> n;
	DibujaCuadrado(n);

	_getch();


}
int DibujaCuadrado(int a)
{
	for (int i = 1; i <= a; i++)
	{

		for (int j = 1; j <= a; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return a;

	_getch();
}