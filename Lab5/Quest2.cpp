#include<iostream>
#include<windows.h>

using namespace std;

double Aumento(double);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x;
	cout << "Qual o seu s�lario atual? R$";
	cin >> x;
	cout << "O sal�rio ajustado �: R$" << Aumento(x) << endl;

	system("pause");
	return 0;
}

double Aumento(double x) {

	double y = (x * 15) / 100;
	y = y + x;

	return y;
}