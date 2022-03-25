#include<iostream>
#include<Windows.h>
#include<cmath>

using namespace std;

double Vetor(int x, int y);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int x, y;

	cout << "Digite as cordenadas do vetor (x,y): ";
	cin >> x; cin.ignore(); cin >> y;
	cout << "O tamanho do vetor é: " << Vetor(x, y) << endl;



	system("pause");
	return 0;
}

double Vetor(int x, int y)
{
	double vet = sqrt(pow(x, 2) + pow(y, 2));


	return vet;
}
