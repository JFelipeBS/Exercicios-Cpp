#include<iostream>
#include<Windows.h>

using namespace std;

struct livro
{
	char nome[30]{};
	short numeros_paginas;
};

struct jogo
{
	char nome[30]{};
	char genero[30]{};
};


int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	jogo jogos_emprestados[30];
	livro livros_emprestados[30];
	
	
	cout << "Digite 1 para pegar um livro em prestado e se quiser um jogo digite 0: ";
	int x;
	cin >> x;


	if (x == 1)
	{

		cout << "Numero de paginas ";
		cin >> livros_emprestados[x].numeros_paginas;
		cin.ignore();
		cout << "O nome do livro é: ";
		cin.getline(livros_emprestados[x].nome, 30);
		
		
	}
	
	else
	{
		cout << "O nome do jogo é: ";
		cin.ignore();
		cin.getline(jogos_emprestados[x].nome, 30);

		cout << "O genero do jogo é: ";
		cin.getline(jogos_emprestados[x].genero, 30);
	}
	
	

	cout << endl;
	system("pause");
	return 0;
}