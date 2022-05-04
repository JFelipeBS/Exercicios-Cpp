#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<Windows.h>


using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	string nome;
	string sobrenome;

	cout << "Digite seu nome: ";
	cin >> nome; cin >> sobrenome;

	cout << "Bom dia senhor, " + sobrenome + ". Ou devo chama-lo de " + nome + "?" << endl;


	
	





	system("pause");
	return 0;
}
