#include<iostream>
#include<Windows.h>

using namespace std;

char Codificar(char caractere);
char Decodificar(char caractere);

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	char caractere;

	cout << "Digite o caractere: ";
	cin >> caractere;
	cout << "caracter codoficado: " << Codificar(caractere) << endl;
	cout << "caracter decodificado: " << Decodificar(caractere) << endl;

	
	system("pause");
	return 0;
}

char Codificar(char caractere) {

	char y = caractere + 3;

	return y;
}
char Decodificar(char caractere) {

	char x = caractere - 3;

	return x;
}