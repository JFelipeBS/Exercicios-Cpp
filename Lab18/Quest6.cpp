#include<iostream>
#include<string.h>
using namespace std;

struct Pessoa
{
	char nome[30];
	int idade;
	char sexo[14]{ };
};


int main() {


	Pessoa test;
	int i = 0;
	int soma = 0;

	cout << "================================================" << endl;
	cout << "Para finalizar a lista digite fim na opcao nome." << endl;
	cout << "================================================" << endl;

	while (strcmp(test.nome,"fim")!=false)
	{
		i++;
		cout << "Digite o nome: ";
		cin.getline(test.nome, 30);
		if (strcmp(test.nome, "fim") != false)
		{
			cout << "Digite a idade: ";
			cin >> test.idade;
			cout << "Digite o sexo: ";
			cin >> test.sexo;
			soma = soma + test.idade;
			cout << "-------------------------\n";
			cin.ignore();
		}
		else
		{
			cout << "Fim da lista" << endl;
		}
	}
	if (soma==0)
	{
		cout << "Nenhuma idade foi cadastrada" << endl;
	}
	else
	{
		cout << fixed;
		cout.precision(8);
		double media = (soma / (i-1));
		cout << "A media da idade e: " << media;
	}
	
	cout << endl;
	system("pause");
	return 0;
}