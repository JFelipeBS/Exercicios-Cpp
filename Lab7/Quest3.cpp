#include<iostream>
#include<Windows.h>

using namespace std;

int bitBaixos(int numero);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	unsigned int numero;

	cout << "Digite um nuúmero inteiro: ";
	cin >> numero;
	cout << bitBaixos(numero) << endl;

	system("pause");
	return 0;
}

int bitBaixos(int numero) {

	unsigned int mascara = 0;
	mascara = ~(mascara);
	mascara = mascara >> 16;
	numero = numero & mascara;
	return numero;
}
