#include<iostream>
#include<Windows.h>
#include <iomanip>

#define p_pao 0.30
#define p_pasteis 0.25

using namespace std;

float calc(int paes, int pasteis);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int paes, pasteis;

	cout << "Pães&Cia \n\n";
	cout << "Quantos pães? ";
	cin >> paes;
	cout << "Quantos pasteis? ";
	cin >> pasteis;

	cout << "O total das compras é R$" << fixed << setprecision(2) <<calc(paes, pasteis) << endl;

	system("pause");
	return 0;
}

float calc(int paes, int pasteis) {

	float preco = (paes * p_pao) + (pasteis * p_pasteis);

	return preco;
}