#include<iostream>
#include<Windows.h>
using namespace std;

double retorno(double numeros[]);

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double numeros[3]{ };

	for (int i = 0; i <=2 ; i++)
	{
		cout << "Valor do " << i + 1 << "ª numero:";
		cin >> numeros[i];
	}

	cout << "O resultado é: " << retorno(numeros) << endl;

	system("pause");
	return 0;
}

double retorno(double numeros[]) {

	double retorno;
	retorno = numeros[0] * numeros[2] - numeros[1];
	return retorno;
}
