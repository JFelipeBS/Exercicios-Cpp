#include<iostream>
#include<windows.h>


using namespace std;

bool Codificar(char caractere);
bool Decodificar(char caractere);


int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	bool resposta;
	char letra;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Se você deseja codificar didite (1), se dejear decodificar digite (0): ";
	cin >> resposta;
	cout << endl;


	if (resposta == true)
	
		Codificar(letra);

	else

		Decodificar(letra);

}

bool Codificar(char caractere) {

	char y = caractere + 3;
	cout << y;

	return true;
}
bool Decodificar(char caractere) {

	char x = caractere - 3;
	cout << x;

	return false;
}

