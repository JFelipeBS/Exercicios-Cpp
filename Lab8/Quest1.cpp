#include<iostream>
#include<Windows.h>
#include<cmath>

#define delta (b*b - (4*a*c))

using namespace std;

void Quadratica(float a, float b, float c);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float a, b, c;

	cout << "Digite p valo de a: ";
	cin >> a;
	cout << "Digite p valo de b: ";
	cin >> b;
	cout << "Digite p valo de c: ";
	cin >> c;
	cout << endl;

	Quadratica(a, b, c);


	system("pause");
	return 0;
}

void Quadratica(float a, float b, float c) {

	float x, y;
	if (a != 0) {

		if (delta < 0)
		{
			cout << "Não há raiz real." << endl;
		}

		if (delta == 0)
		{
			x = -b / 2 * a;
			cout << "Havera uma unica raiza:" << x << endl;
		}

		if (delta > 0) {
			x = (-b - sqrt(delta)) / (2 * a);
			y = (-b + sqrt(delta)) / (2 * a);

			cout << "Raiz 1: " << x << endl;
			cout << "Raiz 2: " << y << endl;
		}
	}
	else {
		cout << "Não é uma equação do segundo gral." << endl;
	}

	
}


