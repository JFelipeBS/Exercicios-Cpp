#include<iostream>
#include<Windows.h>

using namespace std;

int bitAltos(int numero);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	unsigned int numero;

	cout << "Digite um nuúmero inteiro: ";
	cin >> numero;
	cout << bitAltos(numero) << endl;

	system("pause");
	return 0;
}

int bitAltos(int numero) {

	unsigned int mascara = 0;
	mascara = ~(mascara);
	mascara = mascara << 16;
	numero = numero & mascara;
	numero = numero >> 16;
	return numero;
}
