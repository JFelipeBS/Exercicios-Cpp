#include<iostream>
#include<Windows.h>
using namespace std;

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float notas[3]{ };
	float peso[3]{ 2,3,4 };

	for (int i = 0; i <= 2; i++)
	{
		cout << "Qual foi a " << i + 1 << "� nota: " << endl;
		cin >> notas[i];
	}

	float media_A, media_P;

	media_A = (notas[0] + notas[1] + notas[2]) / 3;
	cout << "A m�dia no novo modelo � " << media_A << endl;
	media_P = ((notas[0]*peso[0]) + (notas[1] * peso[1]) + (notas[2] * peso[2])) / 9;
	cout << "A m�dia no antigo modelo � " << media_P << endl;


	system("pause");
	return 0;
}