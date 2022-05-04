#include<iostream>
#include<Windows.h>
#include<cstring>
#include<string>


using namespace std;

struct Palavra
{
	string senha;

};

struct conta_Bancaria
{
	string nome;
	double saldo;
};

void conta(conta_Bancaria j);
void senha(Palavra x);

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	Palavra felipe_S;
	conta_Bancaria felipe;

	cout << "Digite seu nome: ";
	cin >> felipe.nome;
	cout << "Digite seu senha: ";
	cin >> felipe_S.senha;
	cout << "Digite o valor do seu deposito: $";
	cin >> felipe.saldo;
	cout << endl;
	cout << "****Exibir dados****\n";
	conta(felipe);
	senha(felipe_S);

	

	cout << endl;
	system("pause");
	return 0;
}

void conta(conta_Bancaria j) {

	cout << "NOME: " << j.nome << endl << "SALDO: $" << j.saldo << endl;
}

void senha(Palavra x) {

	cout << "SENHA: " << x.senha;
	cout << endl;

}