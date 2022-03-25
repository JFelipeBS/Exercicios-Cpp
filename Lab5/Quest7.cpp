#include<iostream>
#include<windows.h>
#include<cmath>

using namespace std;

double Cubo(double x);
double Quadrado(double x);


int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x;

	cout << "Digite um valor: ";
	cin >> x;
	cout << "Quadrado: " << Quadrado(x) << endl;
	cout << "Cubo: " << Cubo(x) << endl;
	cout << "O cubo do quadrado: " << Cubo(Quadrado(x)) << endl;




	system("pause");
	return 0;
}

double Cubo(double x) {
	double y = pow(x, 3);

		return y;
}

double Quadrado(double x)
{
	double y = pow(x, 2);

	return y;
}