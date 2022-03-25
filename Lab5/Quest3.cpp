#include<iostream>
#include<Windows.h>
#include<cmath>

using namespace std;

double IMC(double altura, double peso);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double altura, peso;

	cout << "Digite sua altura: ";
	cin >> altura;
	cout << "Digite seu peso: ";
	cin >> peso;
	cout << "Seu índice de massa corporal é: " << IMC(altura, peso) << endl;


	system("pause");
	return 0;
}

double IMC(double altura, double peso)
{

	double imc = peso / pow(altura, 2);

		return imc;

}