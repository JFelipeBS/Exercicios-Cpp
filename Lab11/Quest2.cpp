#include<iostream>
#include<cstring>
#include<Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int numero;
	char numero_S[1]{};

	cout << "Digite o primerio numero: ";
	cin >> numero; 
	cout << "Digite o segundo numero: ";
	cin >> numero_S[0];
	
	int num = atoi(numero_S);

	cout << "A multiplicação entre eles é " << numero * num << endl;

	
	system("pause");
	return 0;
}
